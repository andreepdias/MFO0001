/*
 * It shows the map of the train problem (for petri nets)
 * Copyright (C) 2018  rafaelberri@gmail.com rafaelberri@gmail.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "redepetri.h"


RedePetri::RedePetri(PoolTransicoes *_pool, MapaTrem *_mapa, Trem *_trem1, Trem *_trem2)
{
    ifstream arq("../txts/matriz_dimensoes.txt");
    arq >> n_lugares;
    arq >> n_transicoes;

    carregarMatrizPre();
    carregarMatrizPos();
    carregarVetorMarcacoes();
    carregarTransicoes();
    carregarLugares();

    pool = _pool;
    mapa = _mapa;
    trem1 = _trem1;
    trem2 = _trem2;

    thread = new Thread();
    thread->Event((Task *) this);
}

RedePetri::~RedePetri()
{    
    if(thread != NULL)
        delete thread;
}

void RedePetri::carregarMatrizPre(){

    ifstream arq("../txts/matriz_pre.txt");
    int x;

    for(int i = 0; i < n_lugares; i++){
        pre.push_back(vi());

        for(int j = 0; j < n_transicoes; j++){
            arq >> x;
            pre[i].push_back(x);
        }

    }
}

void RedePetri::carregarMatrizPos(){

    ifstream arq("../txts/matriz_pos.txt");
    int x;

    for(int i = 0; i < n_lugares; i++){
        pos.push_back(vi());

        for(int j = 0; j < n_transicoes; j++){
            arq >> x;
            pos[i].push_back(x);
        }

    }
}

void RedePetri::carregarVetorMarcacoes(){

    ifstream arq("../txts/vetor_marcacoes.txt");
    int x;

    for(int i = 0; i < n_lugares; i++){
        arq >> x;
        marcacoes.push_back(x);
    }
}

void RedePetri::carregarTransicoes(){

    ifstream arq("../txts/nomes_transicoes.txt");
    string s;

    for(int i = 0; i < n_transicoes; i++){
        arq >> s;
        nome_transicoes.push_back(s);
    }
}

void RedePetri::carregarLugares(){
    ifstream arq("../txts/nomes_lugares.txt");
    string s;

    for(int i = 0; i < n_lugares; i++){
        arq >> s;
        nome_lugares.push_back(s);
    }
}

void RedePetri::printMatrizPre(){
    for(int i = 0; i < n_lugares; i++){
        for(int j = 0; j < n_transicoes; j++){
            cout << pre[i][j] << " ";
        }
        cout << endl;
    }
}

void RedePetri::printMatrizPos(){
    for(int i = 0; i < n_lugares; i++){
        for(int j = 0; j < n_transicoes; j++){
            cout << pos[i][j] << " ";
        }
        cout << endl;
    }
}

void RedePetri::printMarcacoes(){
    cout << "Marcacoes Habilitadas:" << endl;
    // for(int i = 0; i < n_lugares; i++){
    //     cout << marcacoes[i] << " ";
    // }
    // cout << endl;

    for(int i = 0; i < n_lugares; i++){
        if(marcacoes[i] >= 1){
            cout << nome_lugares[i] << endl;
        }else if(marcacoes[i] < 0){
            cout << "***Marcacao negativa***" << endl;
        }
    }
    cout << endl;
}

void RedePetri::printNomeLugares(){
    cout << "Nome e ID dos Lugares:" << endl;
    for (int i = 0; i < n_lugares; i++)
    {
        printf("%2d: ", i);
        cout << nome_lugares[i] << endl;
    }
    cout << endl;
}

void RedePetri::printVetorMarcacoes(){
    for(int i = 0; i < n_lugares; i++){
        cout << marcacoes[i] << " ";
    }
    cout << endl;
}

void RedePetri::printTransicaoPre(int k){
    cout << "Pre Transicao " << k << ":" << endl;
    for(int i = 0; i < n_lugares; i++){
        cout << pre[i][k] << " ";
    }
    cout << endl;
    for(int i = 0; i < n_lugares; i++){
        if(pre[i][k] >= 1){
            printf("%2d: ", i);
            cout << nome_lugares[i] << endl;
        }
    }
    cout << endl;
}

void RedePetri::printTransicaoPos(int k){
    cout << "Pos Transicao " << k << ":" << endl;
    for (int i = 0; i < n_lugares; i++)
    {
        cout << pos[i][k] << " ";
    }
    cout << endl;
    for(int i = 0; i < n_lugares; i++){
        if(pos[i][k] >= 1){
            printf("%2d: ", i);
            cout << nome_lugares[i] << endl;
        }
    }
    cout << endl;
}

void RedePetri::printNomeTransicoes(){
    cout << "Nome e ID das Transicoes:" << endl;
    for(int i = 0; i < n_transicoes; i++){
        printf("%2d: ", i);
        cout << nome_transicoes[i] << endl;
    }
    cout << endl;
}

void RedePetri::printTransicoesHabilitadas(vi &t){
    cout << "Transicoes Habilitadas:" << endl;
    for(int i = 0; i < (int)t.size(); i++){
        printf("%2d: ", t[i]);
        cout << nome_transicoes[t[i]] << endl;
    }
    cout << endl;
}

vi RedePetri::transicoesHabilitadas(){
    vi t_habilitadas;
    bool valido;

    for(int i = 0; i < 16; i++){
        valido = true;
        for(int j = 0; j < n_lugares; j++){
            if(marcacoes[j] - pre[j][i] < 0){
                valido = false;
                break;
            }
        }
        if(valido){
            t_habilitadas.push_back(i);
        }
    }
    return t_habilitadas;
}

void RedePetri::T0_Parar_T1_Eng_S(){
    (*trem1).setEstado(0);
    Thread::SleepMS(3000);
    (*pool).addTransicao(16);
}

void RedePetri::T1_Parar_T1_Gate_S(){
    (*trem1).setEstado(4);
}

void RedePetri::T2_Parar_T2_Eng_S(){
    (*trem2).setEstado(0);
    Thread::SleepMS(3000);
    (*pool).addTransicao(16);
}

void RedePetri::T3_Parar_T2_Gate_S(){
    (*trem2).setEstado(4);
}

void RedePetri::T4_Continar_T1_Eng_R(){
    (*trem1).setEstado(1);
    (*mapa).Gate(1);
}

void RedePetri::T5_Continar_T2_Eng_R(){
    (*trem2).setEstado(1);
    (*mapa).Gate(0);
}

void RedePetri::T6_Parar_T1_Lucerne_S(){
    (*trem1).setEstado(0);
}

void RedePetri::T7_Parar_T2_Sarnem_S(){
    (*trem2).setEstado(0);
}

void RedePetri::T8_Mover_T1_Eng_R(){
    (*trem1).setEstado(1);
    (*mapa).Gate(1);
}

void RedePetri::T9_Mover_T1_Gate_L(){
    (*trem1).setEstado(2);
}

void RedePetri::T10_Mover_T1_Gate_R(){
    (*trem1).setEstado(1);
}

void RedePetri::T11_Mover_T1_Lucerne_L(){
    (*trem1).setEstado(2);
}

void RedePetri::T12_Mover_T2_Eng_R(){
    (*trem2).setEstado(1);
    (*mapa).Gate(0);
}

void RedePetri::T13_Mover_T2_Gate_L(){
    (*trem2).setEstado(2);
}

void RedePetri::T14_Mover_T2_Gate_R(){
    (*trem2).setEstado(1);
}

void RedePetri::T15_Mover_T2_Sarnem_L(){
    (*trem2).setEstado(2);
}


void RedePetri::executarTransicao(int t){
    cout << "Executando Transicao " << nome_transicoes[t] << "(" << t << ")." << endl;
    for(int i = 0; i < n_lugares; i++){
        marcacoes[i] -= pre[i][t];
        marcacoes[i] += pos[i][t];
        marcacoes[i] = max(0, min(1, marcacoes[i]));
    }

    switch(t){
        case 0: 
            T0_Parar_T1_Eng_S();
            break;
        case 1:
            T1_Parar_T1_Gate_S();
            break;
        case 2:
            T2_Parar_T2_Eng_S();
            break;
        case 3:
            T3_Parar_T2_Gate_S();
            break;
        case 4:
            T4_Continar_T1_Eng_R();
            break;
        case 5:
            T5_Continar_T2_Eng_R();
            break;
        case 6:
            T6_Parar_T1_Lucerne_S();
            break;
        case 7:
            T7_Parar_T2_Sarnem_S();
            break;
        case 8:
            T8_Mover_T1_Eng_R();
            break;
        case 9:
            T9_Mover_T1_Gate_L();
            break;
        case 10:
            T10_Mover_T1_Gate_R();
            break;
        case 11:
            T11_Mover_T1_Lucerne_L();
            break;
        case 12:
            T12_Mover_T2_Eng_R();
            break;
        case 13:
            T13_Mover_T2_Gate_L();
            break;
        case 14:
            T14_Mover_T2_Gate_R();
            break;
        case 15:
            T15_Mover_T2_Sarnem_L();
            break;
    }
    cout << endl;
}

// Task
bool RedePetri::Exec()
{
    printNomeTransicoes();
    printNomeLugares();

    int qtd, t, r, size;
    vi t_h;

    while(1){
        qtd = (*pool).sizePool();

        for(int i = 0; i < qtd; i++){
            t = (*pool).popTransicao();
            executarTransicao(t);
            printMarcacoes();
        }

        t_h = transicoesHabilitadas();
        size = t_h.size();

        if(size > 0){
            r = rand() % size;
            printTransicoesHabilitadas(t_h);
            executarTransicao(t_h[r]);
            printMarcacoes();
        }
        Thread::SleepMS(5);
    }
    return true;
}


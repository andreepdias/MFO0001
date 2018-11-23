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


RedePetri::RedePetri(PoolTransicoes *_pool)
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

void RedePetri::executarTransicao(int t){
    cout << "Executando Transicao " << nome_transicoes[t] << "." << endl;
    for(int i = 0; i < n_lugares; i++){
        marcacoes[i] -= pre[i][t];
        marcacoes[i] += pos[i][t];
        marcacoes[i] = max(0, min(1, marcacoes[i]));
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
        }

        t_h = transicoesHabilitadas();
        size = t_h.size();

        if(size > 0){
            r = rand() % size;
            executarTransicao(t_h[r]);
        }
        Thread::SleepMS(5);
    }
    return true;
}


#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int> > vvi;


void printNomeTransicoes(vector<string> &v){
    for(int i = 0; i < (int)v.size(); i++){
        // printf("T%2d: ", i);
        cout << v[i] << endl;
    }
}

void printNomeLugares(vector<string> &v){
    for(int i = 0; i < (int)v.size(); i++){
        cout << v[i] << endl;
    }
}

void printMatriz(vvi &m){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << m[i][j];
            if(j != 3 - 1){
                cout << "\t";
            }
        }
        cout << endl;
    }
}

int main(int argc, char **argv) {
   
   
    ifstream a_pre("pre_bruto.txt");
    ifstream a_pos("pos_bruto.txt");

    vvi pre(3, vi(3, 0));
    vvi pos(3, vi(3, 0));

    string s;
    vector<string> nome_transicoes;
    vector<string> nome_lugares;

    for(int i = 0; i < 3; i++){
        a_pre >> s;
        a_pos >> s;
        nome_transicoes.push_back(s);
    }

    for(int i = 0; i < 3; i++){
        a_pre >> s;
        a_pos >> s;
        nome_lugares.push_back(s);

        for(int j = 0; j < 3; j++){
            a_pre >> pre[i][j];
            a_pos >> pos[i][j];
        }
    }

    // printMatriz(pre);
    // printMatriz(pos);
    // printNomeLugares(nome_lugares);
    printNomeTransicoes(nome_transicoes);

}

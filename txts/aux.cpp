#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int> > vvi;


void printTransicoes(vector<string> &v){
    for(int i = 0; i < (int)v.size(); i++){
        // printf("T%2d: ", i);
        cout << v[i] << endl;
    }
}

void printLugares(vector<string> &v){
    for(int i = 0; i < (int)v.size(); i++){
        cout << v[i] << endl;
    }
}

void trocarTransicao(vector<string> &v, int a, int b){

    string aux = v[a];

    v[a] = v[b];
    v[b] = aux;
}

int main(int argc, char **argv) {
   
   /*
    ifstream file("nomes.txt");

    int x;
    string s;
    vector<string> transicoes;
    vector<string> lugares;

    for(int i = 0; i < 27; i++){
        file >> s;
        transicoes.push_back(s);
    }

    for(int i = 0; i < 23; i++){
        file >> s;
        lugares.push_back(s);

        for(int j = 0; j < 27; j++){
            file >> x;
        }
    }

    ifstream f("trocas.txt");

    int a, b;

    while(f >> a >> b){
        trocarTransicao(transicoes, a, b);
    }

    printTransicoes(transicoes);

    printLugares(lugares);
    */

    

}

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int> > vvi;

void printMatriz(vvi &m){

    for(int i = 0; i < 23; i++){
        for(int j = 0; j < 27; j++){
            cout << m[i][j];
            if(j != 27 - 1){
                cout << "\t";
            }
        }
        cout << endl;
    }
}

void trocarColuna(vvi &m, int a, int b){

    vi aux(23, 0);

    for(int i = 0; i < 23; i++){
        aux[i] = m[i][a];
        m[i][a] = m[i][b];
        m[i][b] = aux[i];
    }

}

int main(int argc, char **argv) {
  
    ifstream a_pre("pre.txt");
    ifstream a_pos("pos.txt");

    vvi pre(23, vi(27, 0));
    vvi pos(23, vi(27, 0));

    for(int i = 0; i < 23; i++){
        for(int j = 0; j < 27; j++){
            a_pre >> pre[i][j];
            a_pos >> pos[i][j];
        }
    }
    
    
    ifstream trocas("trocas.txt");

    int a, b;

    while(trocas >> a >> b){
        trocarColuna(pre, a, b);
        trocarColuna(pos, a, b);
    }

    printMatriz(pos);

}

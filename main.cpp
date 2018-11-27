#include <iostream>
#include "class/mapatrem.h"
#include "class/trem.h"
#include "class/threads/thread.h"
#include <vector>
#include <string>
#include "class/threadtest.h"
#include "class/redepetri.h"
#include "class/pooltransicoes.h"

using namespace std;


int main(int argc, char **argv) {
    /*
    ThreadTest teste(4);
    Thread::SleepMS(10000);
    */

    PoolTransicoes pool;
    MapaTrem mapa(&pool);
    
    Trem trem1(1, &mapa);
    Trem trem2(2, &mapa);

    
    RedePetri rede(&pool, &mapa, &trem1, &trem2);
    int t;

    bool m1 = false, m2 = false;

    while(1){
        /*
        cout << "Digite uma transicao.\n";
        cin >> t;
        pool.addTransicao(t);
        */
        int key = (mapa).GetLastKey();
        // cout << "LastKey = " << key << endl;
        if (key == 177){
            if(!m1){
                pool.addTransicao(20);
                m1 = true;
            }
        }else if(key == 180){
            if(m1){
                pool.addTransicao(25);
                m1 = false;
            }
        }else if(key == 178){
            if(!m2){
                pool.addTransicao(21);
                m2 = true;
            }
        }else if(key == 181){
            if(m2){
                pool.addTransicao(26);
                m2 = false;
            }
        }
        Thread::SleepMS(10);
    }

    return 0;
 
    

   
    while(1){}
    
    return 0;
}

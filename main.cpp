#include <iostream>
#include "class/mapatrem.h"
#include "class/trem.h"
#include "class/threads/thread.h"
#include <vector>
#include <string>
#include "class/threadtest.h"

using namespace std;


int main(int argc, char **argv) {
    /*
    ThreadTest teste(4);
    
    Thread::SleepMS(10000);
    
    return 0;
    */
    MapaTrem trens;


    trens.Trem1Pos(1, 1);
    trens.Trem1Txt("Mensagem trem 1.");
    trens.Trem2Pos(1, 2);
    trens.Trem2Txt("Mensagem trem 2.");
    
    Trem trem1(1, &trens);
    Trem trem2(2, &trens);

   
    while(1){}
    
    return 0;
}

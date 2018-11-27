#ifndef REDEPETRI_H
#define REDEPETRI_H
#include "threads/sema.h"
#include "threads/thread.h"
#include "threads/task.h"
#include "linep.h"
#include <string>
#include <opencv2/opencv.hpp>
#include "draw.h"
#include "path.h"
#include <vector>
#include <queue>
#include "mapatrem.h"
#include "pooltransicoes.h"
#include "trem.h"

using namespace std;
using namespace cv;

typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;


class RedePetri : public Task
{
protected:
    Thread *thread = NULL;
    PoolTransicoes *pool = NULL;
    MapaTrem *mapa = NULL;
    Trem *trem1 = NULL;
    Trem *trem2 = NULL;

    vvi pre;
    vvi pos;
    vi marcacoes;

    vs nome_transicoes;
    vs nome_lugares;

    int n_lugares, n_transicoes;
    
public:
    RedePetri(PoolTransicoes *_pool, MapaTrem *_mapa, Trem *_trem1, Trem *_trem2);
    ~RedePetri();

    void carregarMatrizPre();
    void carregarMatrizPos();
    void carregarVetorMarcacoes();
    void carregarTransicoes();
    void carregarLugares();

    void printMatrizPre();
    void printMatrizPos();
    void printMarcacoes();
    void printNomeLugares();
    void printNomeTransicoes();
    void printTransicoesHabilitadas(vi &t);
    void printVetorMarcacoes();
    void printTransicaoPre(int k);
    void printTransicaoPos(int k);

    vi transicoesHabilitadas();
    void executarTransicao(int t);

    
    void T0_Parar_T1_Eng_S();
    void T1_Parar_T1_Gate_S();
    void T2_Parar_T2_Eng_S();
    void T3_Parar_T2_Gate_S();
    void T4_Continar_T1_Eng_R();
    void T5_Continar_T2_Eng_R();
    void T6_Parar_T1_Lucerne_S();
    void T7_Parar_T2_Sarnem_S();
    void T8_Mover_T1_Eng_R();
    void T9_Mover_T1_Gate_L();
    void T10_Mover_T1_Gate_R();
    void T11_Mover_T1_Lucerne_L();
    void T12_Mover_T2_Eng_R();
    void T13_Mover_T2_Gate_L();
    void T14_Mover_T2_Gate_R();
    void T15_Mover_T2_Sarnem_L();
    void T16_Terminar_Timer();
    void T17_Acionar_B1();
    void T18_Acionar_B2();
    void T19_Acionar_C();
    void T20_Acionar_M1();
    void T21_Acionar_M2();
    void T22_Desativar_B1();
    void T23_Desativar_B2();
    void T24_Desativar_C();
    void T25_Desativar_M1();
    void T26_Desativar_M2();
    void T27_Acionar_A1();
    void T28_Acionar_A2();
    void T29_Desativar_A1();
    void T30_Desativar_A2();
    


    // Task
    virtual bool
    Exec();
};

#endif // REDEPETRI_H

#ifndef REDEPETRI_H
#define REDEPETRI_H
#include "threads/sema.h"
#include "threads/thread.h"
#include "threads/task.h"
#include "mapatrem.h"
#include "linep.h"
#include <string>
#include <opencv2/opencv.hpp>
#include "draw.h"
#include "path.h"
#include <vector>
#include <queue>

using namespace std;
using namespace cv;

typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;


class RedePetri : public Task
{
protected:
    Thread *thread = NULL;
    MapaTrem *mapa = NULL;

    vvi pre;
    vvi pos;
    vi marcacoes;

    vs nome_transicoes;
    vs nome_lugares;

    int n_lugares, n_transicoes;

    queue<int> pool_transicoes;
    
public:
    RedePetri();
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

    vi transicoesHabilitadas();
    void executarTransicao(int t);

    // Task
    virtual bool Exec();
};

#endif // REDEPETRI_H

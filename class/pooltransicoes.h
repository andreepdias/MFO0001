#ifndef POOLTRANSICOES_H
#define POOLTRANSICOES_H
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

using namespace std;
using namespace cv;


class PoolTransicoes
{
protected:
    sema pool_lock;
    queue<int> pool_externa;
    int qtd;

public:
    PoolTransicoes();
    ~PoolTransicoes();

    void addTransicao(int id);
    int popTransicao();
    int sizePool();


};

#endif // POOLTRANSICOES_H

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

#ifndef TREM_H
#define TREM_H
#include "threads/sema.h"
#include "threads/thread.h"
#include "threads/task.h"
#include "linep.h"
#include <string>
#include <opencv2/opencv.hpp>
#include "draw.h"
#include "path.h"
#include <vector>
#include "mapatrem.h"

using namespace std;
using namespace cv;

class Trem : public Task
{
protected:
    Thread *thread = NULL;
    int id;
    int estado;

    float pos;
    float traj;

    sema sema_est;
    sema sema_traj;

    MapaTrem *mapa = NULL;
    
public:
    Trem(int _id, MapaTrem *_mapa);
    ~Trem();
    int getId();
    void setId();
    int getEstado();
    void setEstado(int e);
    int getTrajeto();
    void setTrajeto(int t);

    void operarT1();
    void operarT2();

    void pararT1();
    void pararT1_Gate();
    void pararT1_Eng();
    void pararT1_Luc();
    void moverT1_R();
    void moverT1_L();

    void pararT2();
    void pararT2_Gate();
    void pararT2_Eng();
    void pararT2_Sar();
    void moverT2_R();
    void moverT2_L();

    // Task
    virtual bool Exec();
};

#endif // TREM_H

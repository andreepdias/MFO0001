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

#include "trem.h"


Trem::Trem(int _id, MapaTrem *_mapa)
{
    id = _id;
    estado = 0;      
    mapa = _mapa;

    pos = 1.0;
    traj = id;

    thread = new Thread();
    thread->Event((Task *) this);
}

Trem::~Trem()
{    
    if(thread != NULL)
        delete thread;
}

int Trem::getEstado(){
    int i;
    sema_est.Lock();
    i = estado;
    sema_est.Unlock();
    return i;
}

void Trem::setEstado(int e){
    sema_est.Lock();
    estado = e;
    sema_est.Unlock();
}

int Trem::getTrajeto()
{
    int i;
    sema_traj.Lock();
    i = traj;
    sema_traj.Unlock();
    return i;
}

void Trem::setTrajeto(int t)
{
    sema_traj.Lock();
    traj = t;
    sema_traj.Unlock();
}

void Trem::pararT1(){
    while(true){
        if(getEstado() != 0)
            break;

        (*mapa).Trem1Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::pararT1_Gate(){
    while (true)
    {
        if (getEstado() != 4)
            break;

        if(pos >= 0.15){
            pos -= 0.005;
            (*mapa).Trem1Pos(pos, 1);
        }

        (*mapa).Trem1Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::pararT1_Eng()
{
    while (true)
    {
        if (getEstado() != 5)
            break;

        if (pos < 1)
        {
            pos += 0.005;
            (*mapa).Trem1Pos(pos, 0);
        }

        (*mapa).Trem1Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::pararT2_Eng()
{
    while (true)
    {
        if (getEstado() != 5)
            break;

        if (pos < 1)
        {
            pos += 0.005;
            (*mapa).Trem2Pos(pos, 0);
        }

        (*mapa).Trem2Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::pararT2_Gate()
{
    while (true)
    {
        if (getEstado() != 4)
            break;

        if (pos >= 0.15)
        {
            pos -= 0.005;
            (*mapa).Trem2Pos(pos, 2);
        }

        (*mapa).Trem2Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}



void Trem::moverT1_R(){
    while(true){
        if(getEstado() != 1)
            break;

        // cout << pos << endl;

        int t = getTrajeto();
        if(t == 1){
            pos -= 0.005;
            (*mapa).Trem1Pos(pos, t);
            if(pos <= 0.0){
                setTrajeto(0);
            }
        }else{
            pos += 0.005;
            (*mapa).Trem1Pos(pos, t);

            if(pos >= 1)
                setTrajeto(1);
        }
        (*mapa).Trem1Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::moverT1_L(){
    while (true){
        if(getEstado() != 2)
            break;

        // cout << pos << endl;

        if (getTrajeto() == 1){
            pos += 0.005;
            (*mapa).Trem1Pos(pos, 1);

            if(pos >= 1)
                traj = 0;
        }
        else{
            pos -= 0.005;
            (*mapa).Trem1Pos(pos, 0);

            if(pos <= 0)
                traj = 1;
        }
        (*mapa).Trem1Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::pararT2(){
    while(true){
        if(getEstado() != 0)
            break;

        (*mapa).Trem2Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::moverT2_R(){
    while (true){
        if(getEstado() != 1)
            break;

        if (getTrajeto() == 2){
            pos -= 0.005;
            (*mapa).Trem2Pos(pos, 2);

            if(pos <= 0)
                traj = 0;
        }
        else{
            pos += 0.005;
            (*mapa).Trem2Pos(pos, 0);

            if(pos >= 1)
                traj = 2;
        }
        (*mapa).Trem2Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::moverT2_L(){
    while (true){
        if(getEstado() != 2)
            break;

        if (getTrajeto() == 2){
            pos += 0.005;
            (*mapa).Trem2Pos(pos, 2);

            if(pos >= 1){
                traj = 0;
            }
        }
        else{
            pos -= 0.005;
            (*mapa).Trem2Pos(pos, 0);

            if(pos <= 0)
                traj = 2;
        }
        (*mapa).Trem2Txt("a1=" + to_string((int)(*mapa).A1()) + " a2=" + to_string((int)(*mapa).A2()) + " b1=" + to_string((int)(*mapa).B1()) + " b2=" + to_string((int)(*mapa).B2()) + " c=" + to_string((int)(*mapa).C()));
        Thread::SleepMS(10);
    }
}

void Trem::operarT1(){
    switch(estado){
        case 0:
            pararT1();
            break;
        case 1:
            moverT1_R();
            break;
        case 2:
            moverT1_L();
            break;
        case 4:
            pararT1_Gate();
            break;
        case 5:
            pararT1_Eng();
            break;
    }
}

void Trem::operarT2(){
    switch (estado){
    case 0:
        pararT2();
        break;
    case 1:
        moverT2_R();
        break;
    case 2:
        moverT2_L();
        break;
    case 4:
        pararT2_Gate();
        break;
    case 5:
        pararT2_Eng();
        break;
    
    }
}


// Task
bool Trem::Exec()
{
    while(1)
    {
        if(id == 1){
            operarT1();
        }else if(id == 2){
            operarT2();
        }
    }
    
    return true;
}


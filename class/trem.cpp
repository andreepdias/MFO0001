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
    thread = new Thread();
    thread->Event((Task *) this);
}

Trem::~Trem()
{    
    if(thread != NULL)
        delete thread;
}


// Task
bool Trem::Exec()
{
    while(1)
    {
        if(id == 1){
            for(float p = -1; p <= 1; p += 0.01)
            {
                if(p < 0)
                    (*mapa).Trem1Pos((-1) * p, 1);
                else
                    (*mapa).Trem1Pos(p, 0);
                //(*mapa).Trem1Pos(p.x,p.y);
                Thread::SleepMS(10);
                
                (*mapa).Trem1Txt("a1=" + to_string((int) (*mapa).A1()) 
                + " a2=" + to_string((int) (*mapa).A2()) 
                + " b1=" + to_string((int) (*mapa).B1()) 
                + " b2=" + to_string((int) (*mapa).B2()) 
                + " c=" + to_string((int) (*mapa).C()));
                
                int key = (*mapa).GetLastKey();
                cout << "LastKey = " << key << endl;
                if(key == 27)
                    return 1;
            }
        }else if(id == 2){
            for(float p = -1; p <= 1; p += 0.01)
            {
                if(p < 0)
                    (*mapa).Trem2Pos((-1) * p, 2);
                else
                    (*mapa).Trem2Pos(p, 0);
                //(*mapa).Trem2Pos(p.x,p.y);
                Thread::SleepMS(10);
                
                (*mapa).Trem2Txt("a1=" + to_string((int) (*mapa).A1()) 
                + " a2=" + to_string((int) (*mapa).A2()) 
                + " b1=" + to_string((int) (*mapa).B1()) 
                + " b2=" + to_string((int) (*mapa).B2()) 
                + " c=" + to_string((int) (*mapa).C()));
                
                int key = (*mapa).GetLastKey();
                cout << "LastKey = " << key << endl;
                if(key == 27)
                    return 1;
            }
        }
    }
    
    return true;
}


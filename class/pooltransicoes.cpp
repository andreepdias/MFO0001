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

#include "pooltransicoes.h"


PoolTransicoes::PoolTransicoes(){
    qtd = 0;
}

PoolTransicoes::~PoolTransicoes(){}

void PoolTransicoes::addTransicao(int id){
    pool_lock.Lock();
    pool_externa.push(id);
    qtd++;
    pool_lock.Unlock();
}

int PoolTransicoes::popTransicao(){
    int id;
    pool_lock.Lock();
    id = pool_externa.front();
    pool_externa.pop();
    qtd--;
    pool_lock.Unlock();
    return id;
}

int PoolTransicoes::sizePool(){
    int q;
    pool_lock.Lock();
    q = qtd;
    pool_lock.Unlock();
    return q;
}


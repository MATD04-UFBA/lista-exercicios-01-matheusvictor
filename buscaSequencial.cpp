#include <vector>
#include <iostream>
#include "buscaSequencial.h"

using namespace std;


bool buscaSequencial(vector<int> v, int chaveBusca) {
    int contador = 0;

    while(contador < v.size() && v[contador] != chaveBusca)
        contador++;

    if(contador == v.size()) return false; else return true;
}


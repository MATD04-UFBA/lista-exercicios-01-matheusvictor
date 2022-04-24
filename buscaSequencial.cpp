#include "buscaSequencial.h"


int buscaSequencial(vector<int> v, int chaveBusca) {
    for (int i=0; i < v.size(); i++){
        if(chaveBusca == v[i]){
            return i + 1;
        }
    }
    return -1;
}


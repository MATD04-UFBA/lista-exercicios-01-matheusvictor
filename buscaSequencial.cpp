#include "buscaSequencial.h"


int buscaSequencial(vector<int> v, int chaveBusca) {
    for (int i=0; i < v.size(); i++){
        if(chaveBusca == v[i]){
            return i + 1;
        }
    }
    return -1;
}

void contadorComparacoesBuscaSequencial(vector<int> v, int chaveBusca, int &enderecoQuantidadeComparacoes) {

    for (int i=0; i < v.size(); i++){    
        enderecoQuantidadeComparacoes++;
        if(chaveBusca == v[i]){
            break;
        }
    }

}

int posicaoChaveBuscaSequencial(vector<int> v, int chaveBusca, int &enderecoQuantidadeComparacoes) {
    int posicaoChave = 0;
    for (int i=0; i < v.size(); i++){    
        enderecoQuantidadeComparacoes++;
        if(chaveBusca == v[i]){
            posicaoChave = i + 1;
            break;
        } else {
            posicaoChave = -1;
        }
    }
    return posicaoChave;
}

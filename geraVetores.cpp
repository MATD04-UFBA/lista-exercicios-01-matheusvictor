#include "geraVetores.h"

vector<int> gerarVetorDesordenado(){

    SEMENTE;
    vector<int> vetorDesordenado;    

    for (unsigned int i=0; i < TAMANHO_MAXIMO; i++) {        
        vetorDesordenado.push_back(rand() % 100); // números randômicos de 0 a 100
    }
    
    return vetorDesordenado;
}

vector<int> ordenarVetor(vector<int> vetor) {
    
    sort(vetor.begin(), vetor.end()); // ordena o vetor
    return vetor;
    
}

#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#include "buscaSequencial.h"

using namespace std;


#define TAMANHO_MAXIMO 20


int main() {
    
    vector<int> vetor;
    
    cout << "Tamanho do vetor: " << vetor.size() << endl;
    srand(time(NULL));

    cout << " ************************************************ " << endl;
    cout << "Preenchendo o vetor com valores aleatorios..." << endl;
    for (unsigned int i=0; i < TAMANHO_MAXIMO; i++) {
        vetor.push_back(rand() % 100); // números randômicos de 0 a 100
    }
    cout << " ************************************************ " << endl;

    cout << " ************************************************ " << endl;
    cout << "Tamanho do vetor depois de preenchido: " << vetor.size() << endl;
    cout << " ************************************************ " << endl;

    cout << "Conteudo do vetor: ";
    for (unsigned int i=0; i < TAMANHO_MAXIMO; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl << " ************************************************ " << endl;    
    
    cout << "Ordenando o vetor... ";
    sort(vetor.begin(), vetor.end());
 
    cout << "Vetor ordenado: " << endl;
    for (auto x : vetor) cout << x << " ";
    cout << endl << " ************************************************ " << endl;    


    for (unsigned int i=0; i < TAMANHO_MAXIMO / 2; i++) {
        int chaveAleatoria = rand() % 100;

        if (buscaSequencial(vetor, chaveAleatoria)){
            cout << "Achei a chave " << chaveAleatoria << endl;
        } else{
            cout << "NAO ENCONTREI a chave " << chaveAleatoria << endl;
        }
    }

    system("pause");

    return 0;
}

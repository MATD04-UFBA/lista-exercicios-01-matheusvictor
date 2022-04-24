#include "geraVetores.h"
#include "buscaSequencial.h"


int main() {

    // unsigned int chaveBusca = (rand() % 100);
    unsigned int chaveBusca = 41;

    vector<int> vetorDesordenado = gerarVetorDesordenado();
    vector<int> vetorOrdenado = ordenarVetor(vetorDesordenado);

    // imprimir os dois vetores
    cout << "Vetor desordenado: ";
    for (auto x : vetorDesordenado)
        cout << x << " ";

    cout << "\n";

    cout << "Vetor ordenado: ";
    for (auto x : vetorOrdenado)
        cout << x << " ";
    
    cout << "\n";

    cout << "chave: " << chaveBusca << endl;

    cout << "no ordenado:" << buscaSequencial(vetorOrdenado, chaveBusca) << endl;
    cout << "no desordenado:" << buscaSequencial(vetorDesordenado, chaveBusca) << endl;
    
    system("pause");

    return 0;
}

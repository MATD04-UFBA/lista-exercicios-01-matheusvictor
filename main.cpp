#include "utils.h"
#include "buscaSequencial.h"


int main() {

    // unsigned int chaveBusca = (rand() % 100);
    unsigned int chaveBusca = gerarChaveAleatoria();
    vector<int> vetorDesordenado = gerarVetorDesordenado();
    vector<int> vetorOrdenado = ordenarVetor(vetorDesordenado);

    cout << "Chave gerada: " << chaveBusca << endl;

    // imprimir os dois vetores
    cout << "Vetor desordenado: ";
    for (auto x : vetorDesordenado)
        cout << x << " ";
    cout << "\n";

    cout << "Vetor ordenado: ";
    for (auto x : vetorOrdenado)
        cout << x << " ";
    cout << "\n";
    cout << "**********************" << endl;
    cout << "No vetor ORDENADO, a chave " << chaveBusca << " foi encontrada na posicao " << buscaSequencial(vetorOrdenado, chaveBusca) << endl;
    cout << "No vetor DESORDENADO, a chave " << chaveBusca << " foi encontrada na posicao " << buscaSequencial(vetorDesordenado, chaveBusca) << endl;
    cout << "**********************" << endl;

    int contadorVetorOrdenado = 0;
    contadorComparacoesBuscaSequencial(vetorOrdenado, chaveBusca, contadorVetorOrdenado);
    
    int contadorVetorDesordenado = 0;
    contadorComparacoesBuscaSequencial(vetorDesordenado, chaveBusca, contadorVetorDesordenado);

    cout << "No vetor ORDENADO, foram feitas " << contadorVetorOrdenado << " comparacoes!" << endl;
    cout << "No vetor DESORDENADO, foram feitas " << contadorVetorDesordenado << " comparacoes!" << endl;
    cout << "**********************" << endl;    

    system("pause");

    return 0;
}

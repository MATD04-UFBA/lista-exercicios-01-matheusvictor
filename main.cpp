#include "utils.h"
#include "buscaSequencial.h"


void testeContador(vector<int> v, int chaveBusca, int &enderecoQuantidadeComparacoes) {
    enderecoQuantidadeComparacoes++;    
}

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

    cout << "No vetor ORDENADO, a chave " << chaveBusca << " foi encontrada na posicao " << buscaSequencial(vetorOrdenado, chaveBusca) << endl;
    cout << "No vetor DESORDENADO, a chave " << chaveBusca << " foi encontrada na posicao " << buscaSequencial(vetorDesordenado, chaveBusca) << endl;

    cout << "**********************" << endl;

    int contadorVetorOrdenado = 0;
    contadorComparacoesBuscaSequencial(vetorOrdenado, chaveBusca, contadorVetorOrdenado);

    cout << contadorVetorOrdenado << endl;

    // int X = 0;
    // int *ponteiro = &X;    

    // cout << "Endereco: " << &X << endl;
    // cout << "O valor da variavel X eh: " << *ponteiro << endl;
    // X++;
    // cout << "O valor da variavel X eh: " << *ponteiro << endl;

    // cout << "***********" << endl;

    // int Y = 0;
    // for(int i=0; i <5; i++){
    //     testeContador(vetorOrdenado, chaveBusca, Y);
    //     cout << Y << endl;
    // }
    
    system("pause");

    return 0;
}

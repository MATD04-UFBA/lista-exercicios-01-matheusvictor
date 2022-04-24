#include "utils.h"
#include "buscaSequencial.h"


int main() {

    // unsigned int chaveBusca = (rand() % 100);
    unsigned int chaveBusca = gerarChaveAleatoria();
    vector<int> vetorDesordenado = gerarVetorDesordenado();
    vector<int> vetorOrdenado = ordenarVetor(vetorDesordenado);

	cout << "=======================================" << endl;
	cout << "CHAVE GERADA = " << chaveBusca << endl;
	cout << "=======================================" << endl;

    // imprimir os dois vetores
    cout << "Vetor DESORDENADO: ";
    for (auto x : vetorDesordenado)
        cout << x << " ";
    cout << "\n";

    cout << "Vetor ORDENADO: ";
    for (auto x : vetorOrdenado)
        cout << x << " ";
    cout << "\n";

    int contadorVetorOrdenado = 0;
    int contadorVetorDesordenado = 0;
    
    cout << "=======================================" << endl;
	cout << "|          NO VETOR DESORDENADO       |" << endl;
	cout << "=======================================" << endl;
    
    int posicaoChaveVetorDesordenado = posicaoChaveBuscaSequencial(vetorDesordenado, chaveBusca, contadorVetorDesordenado);        

    cout << "* Foram feitas " << contadorVetorDesordenado << " comparacoes!" << endl;  

    if (posicaoChaveVetorDesordenado != -1){
        cout << "* A chave foi encontrada na posicao " << posicaoChaveVetorDesordenado << endl;        
    } else
        cout << "* A chave buscada nao foi encontrada!" << endl;
    
    cout << "=======================================" << endl;
	cout << "|          NO VETOR ORDENADO          |" << endl;
	cout << "=======================================" << endl;

    int posicaoChaveVetorOrdenado = posicaoChaveBuscaSequencial(vetorOrdenado, chaveBusca, contadorVetorOrdenado);
    
    cout << "* Foram feitas " << contadorVetorOrdenado << " comparacoes!" << endl; 
    if (posicaoChaveVetorOrdenado != -1) {
        cout << "* A chave foi encontrada na posicao " << posicaoChaveVetorOrdenado << endl;        
    } else
        cout << "* A chave buscada nao foi encontrada!" << endl;

    system("pause");

    return 0;
}

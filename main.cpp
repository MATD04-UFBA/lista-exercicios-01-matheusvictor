#include "utils.h"
#include "buscaSequencial.h"

#define QTD_EXECUCOES 10
#define TAMANHO_MAXIMO 1000

int main() {

    srand(time(NULL));

    // variáveis estatísticas
    int medioComparacoesVetorOrdenado = 0;
    int maximoComparacoesVetorOrdenado = -1;
    int minimoComparacoesVetorOrdenado = -1;    

    int medioComparacoesVetorDesordenado = 0;
    int maximoComparacoesVetorDesordenado = -1;
    int minimoComparacoesVetorDesordenado = -1;

    int i=0;

    for (i=0; i < QTD_EXECUCOES; i++) {
        
        unsigned int chaveBusca = gerarChaveAleatoria(TAMANHO_MAXIMO);
        vector<int> vetorDesordenado = gerarVetorDesordenado(TAMANHO_MAXIMO);
        vector<int> vetorOrdenado = ordenarVetor(vetorDesordenado);

        int contadorVetorOrdenado = 0;
        int contadorVetorDesordenado = 0;
        
        cout << "=======================================" << endl;
        cout << "|          NO VETOR DESORDENADO       |" << endl;
        cout << "=======================================" << endl;
        
        int posicaoChaveVetorDesordenado = posicaoChaveBuscaSequencial(vetorDesordenado, chaveBusca, contadorVetorDesordenado);        

        cout << "* Foram feitas " << contadorVetorDesordenado << " comparacoes!" << endl;  

        if (minimoComparacoesVetorDesordenado == -1 || minimoComparacoesVetorDesordenado > contadorVetorDesordenado) {
            minimoComparacoesVetorDesordenado = contadorVetorDesordenado;
        } 

        if (maximoComparacoesVetorDesordenado == -1 || maximoComparacoesVetorDesordenado < contadorVetorDesordenado) {
            maximoComparacoesVetorDesordenado = contadorVetorDesordenado;
        } 

        medioComparacoesVetorDesordenado += contadorVetorDesordenado;

        if (posicaoChaveVetorDesordenado != -1){
            cout << "* A chave foi encontrada na posicao " << posicaoChaveVetorDesordenado << endl;       
        } else
            cout << "* A chave buscada nao foi encontrada!" << endl;
        
        cout << "=======================================" << endl;
        cout << "|          NO VETOR ORDENADO          |" << endl;
        cout << "=======================================" << endl;

        int posicaoChaveVetorOrdenado = posicaoChaveBuscaSequencial(vetorOrdenado, chaveBusca, contadorVetorOrdenado);
        
        cout << "* Foram feitas " << contadorVetorOrdenado << " comparacoes!" << endl; 

        if (minimoComparacoesVetorOrdenado == -1 || minimoComparacoesVetorOrdenado > contadorVetorOrdenado) {
            minimoComparacoesVetorOrdenado = contadorVetorOrdenado;
        } 

        if (maximoComparacoesVetorOrdenado == -1 || maximoComparacoesVetorOrdenado < contadorVetorOrdenado) {
            maximoComparacoesVetorOrdenado = contadorVetorDesordenado;
        } 

        medioComparacoesVetorOrdenado += contadorVetorOrdenado;

        if (posicaoChaveVetorOrdenado != -1) {
            cout << "* A chave foi encontrada na posicao " << posicaoChaveVetorOrdenado << endl;        
        } else
            cout << "* A chave buscada nao foi encontrada!" << endl;
    }

    cout << "=======================================" << endl;
    cout << "|          RELATORIO ESTATISCO        |" << endl;
    cout << "=======================================" << endl;
    cout << "- Quantidade de execucoes: " << i << endl;
    cout << "- Quantidade maxima de comparacoes no VETOR DESORDENADO: " << maximoComparacoesVetorDesordenado << endl;
    cout << "- Quantidade minima de comparacoes no VETOR DESORDENADO: " << minimoComparacoesVetorDesordenado << endl;
    cout << "- Quantidade media de comparacoes no VETOR DESORDENADO: " << (medioComparacoesVetorDesordenado/i) << endl;
    cout << "\n************************************************************************************** " << endl;
    cout << "- Quantidade maxima de comparacoes no VETOR ORDENADO: " << maximoComparacoesVetorOrdenado << endl;
    cout << "- Quantidade minima de comparacoes no VETOR ORDENADO: " << minimoComparacoesVetorOrdenado << endl;
    cout << "- Quantidade media de comparacoes no VETOR ORDENADO: " << (medioComparacoesVetorOrdenado/i) << endl;

    system("pause");

    return 0;
}

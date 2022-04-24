#include <vector>
#include <limits>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

#define TAMANHO_MAXIMO 10
#define SEMENTE srand(time(NULL))

vector<int> gerarVetorDesordenado();

vector<int> ordenarVetor(vector<int> vetor);

int gerarChaveAleatoria();

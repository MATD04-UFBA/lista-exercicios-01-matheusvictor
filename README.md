[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=7645035&assignment_repo_type=AssignmentRepo)
# Lista de exercicios 01 -Estudo de Casos: Algoritmos de Busca

Com base no código desenvolvido na aula 04, de 24.03.2022, faça o que se pede:

1. Codifique a sua versão do algoritmo de *Busca Sequencial*, codificando um função que recebe como parametros o vetor onde a busca será feita e a chave de busca;
2. Faça um teste do seu algoritmo sorteando numeros aleatórios e verificando se são ou não encontrados no vetor;
3. Utilizando o algoritmo **sort** da STL[^1], promova a ordenação do vetor; 
4. Codifique uma nova versão da função de *Busca Sequencial* do item 1, levando em conta agora que o vetor recebido como parametro estará sempre ordenado;
5. Faça um novo teste do seu algoritmo sorteando numeros aleatórios e verificando se são ou não encontrados no vetor;

Agora que temos 2 algoritmos, que tal compará-los? 

1. Modifique o seu programa para que gere dois vetores diferentes, um ordenado e outro não ordenado, ambos inicializados com valores aleatórios;
2. Acrescente nas funções contadores para registrar o número de comparações feitas durante o processo de busca, retornando esse valor para o programa principal;
3. No programa principal gere algumas estatísiticas com os valores retornados pelas funções como: número médio, máximo e mánimo de comparações efetuadas pelos dois algoritmos. Para ser estatíticamente relevante, depois dos testes iniciais, execute a avaliação com vetores relativamente grandes. 
4. Elabora a analise dos dois algoritmos determinando a sua Complexidade Assintótica nos casos médio, pior e melhor;
5. Compare a Complexidade teórica com os resultados estatisticos gerados pela sua implementação. 


[^1]: https://www.cplusplus.com/reference/algorithm/sort/ 

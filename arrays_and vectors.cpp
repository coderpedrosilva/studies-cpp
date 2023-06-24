#include <iostream>
#include <iterator>

void MostrarVetor(int Array[], int TamVetor)
{
    for (int i = 0; i < TamVetor; i++)
    {
        std::cout << " - " << Array[i] << " - ";
    }
    std::cout << std::endl;
}

/*
Na assinatura da função ImprimirMatriz, o argumento matriz é declarado como int matriz[][5]. 
O número 5 representa o tamanho das colunas da matriz.

Quando declaramos uma matriz multidimensional em C++, precisamos especificar o tamanho das 
colunas em todas as dimensões, exceto na primeira. A primeira dimensão pode ser deixada em 
branco para permitir que a matriz seja passada como um parâmetro para a função.

No caso dessa assinatura, estamos declarando uma matriz em que o número de linhas é variável 
(definido pelo parâmetro linhas), mas o número de colunas é fixo em 5. Portanto, na assinatura, 
especificamos int matriz[][5], indicando que o número de colunas é 5 e deixando a primeira 
dimensão em branco para permitir que a matriz seja passada como argumento. Isso permite que a 
função aceite uma matriz de qualquer número de linhas, desde que cada linha tenha exatamente 5 colunas.

Essa abordagem é comumente usada em C++ para trabalhar com matrizes de tamanho variável em 
uma dimensão, enquanto mantém o tamanho fixo em outra dimensão.

*/

void ImprimirMatriz(int matriz[][5], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() 
{
    /*
    O erro no código está na linha onde você está obtendo o tamanho do vetor usando sizeof(Vetor). 
    A função sizeof() retorna o tamanho do vetor em bytes, e não o número de elementos. Portanto, 
    você precisa dividir o tamanho pelo tamanho de cada elemento para obter o número correto de elementos.

    Para corrigir o código, você pode alterar a linha int TamVetor = sizeof(Vetor); 
    para int TamVetor = sizeof(Vetor) / sizeof(Vetor[0]);. Isso garantirá que TamVetor contenha 
    o número correto de elementos do vetor.   
    */

    //float Notas[5]{1.0f, 2.0f, 3.0f, 4.0f, 5.0f}; //sem f é considerado double
    int Vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int TamVetor = sizeof(Vetor) / sizeof(Vetor[0]); //explicação acima

    int matriz[8][5] = 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
        {26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35},
        {36, 37, 38, 39, 40}
    };

    MostrarVetor(Vetor, TamVetor);
    "\n";
    ImprimirMatriz(matriz, 8, 5);
    
}

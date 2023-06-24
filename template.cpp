#include <iostream>
#include <string.h> 

/*
Em C++, um template é uma ferramenta poderosa que permite escrever 
código genérico, ou seja, código que pode ser reutilizado com 
diferentes tipos de dados. Ele é uma forma de programação genérica,
onde algoritmos e estruturas de dados podem ser implementados de 
forma independente do tipo de dado com o qual eles irão operar.

Os templates em C++ são baseados em parâmetros de tipo. Eles 
permitem que você defina classes, funções e estruturas de dados 
que podem ser usadas com tipos específicos, determinados no 
momento da utilização do template.

Aqui está um exemplo simples de um template de função em C++:
*/

#include <iostream>

// Definindo um template de função para somar dois valores
template <typename T>
T somar(T a, T b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    float f1 = 3.14, f2 = 2.71;

    // Chamando a função somar com inteiros
    int resultadoInt = somar(x, y);
    std::cout << "Resultado da soma de inteiros: " << resultadoInt << std::endl;

    // Chamando a função somar com floats
    float resultadoFloat = somar(f1, f2);
    std::cout << "Resultado da soma de floats: " << resultadoFloat << std::endl;

    return 0;
}

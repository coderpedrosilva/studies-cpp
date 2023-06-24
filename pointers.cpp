#include <iostream>

int main() {
    int x = 10;
    int* ptr;  // Declaração de um ponteiro para int

    ptr = &x;  // Referenciando o endereço de memória de 'x' ao ponteiro 'ptr'

    // Imprime o valor de 'x' e o valor apontado por 'ptr'
    std::cout << "Valor de x: " << x << std::endl;
    std::cout << "Valor apontado por ptr: " << *ptr << std::endl;

    // Altera o valor de 'x' indiretamente através do ponteiro 'ptr'
    *ptr = 20;

    // Imprime o novo valor de 'x' e o valor apontado por 'ptr'
    std::cout << "Novo valor de x: " << x << std::endl;
    std::cout << "Novo valor apontado por ptr: " << *ptr << std::endl;

    return 0;
}

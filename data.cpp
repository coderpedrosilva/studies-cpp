#include <iostream>
#include <string.h>
#define NBR_LIFES 10

int main()
{
    const int NUM_VIDAS = 10;
    int NUM_QUALQUER;

    std::cout << NUM_VIDAS << "\n";
    std::cout << NBR_LIFES << "\n""\n";

    std::cout << "Digite o primeiro numero: " << "\n";
    std::cin >> NUM_QUALQUER;
    std::cout << "NUM_QUALQUER = " << NUM_QUALQUER << "\n""\n";

    std::string Texto ("Texto da String");
    std::cout << Texto << "\n""\n";

    std::printf("Valor numero inteiro = %d ", NUM_VIDAS);
    std::printf("Valor texto = %s ", Texto.c_str()); //usa essa função para imprimir string

    return 0;

}
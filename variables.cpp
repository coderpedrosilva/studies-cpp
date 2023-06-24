#include <iostream>

int main()
{
    int numVidas = 5;
    int pontuacao = 1350;
    std::cout << "*********INICIO DO JOGO**************" << std::endl;
    std::cout << "Vidas Jogador: " << numVidas << std::endl;
    std::cout << "Pontuacao: " << pontuacao << std::endl;
    std::cout << "Endereco que numVidas ocupa na Memoria RAM: " << &numVidas << "\n";
    std::cout << "Endereco que Pontuacao ocupa na Memoria RAM: " << &pontuacao << "\n";
    std::cout << "***********************" << std::endl;
    
    std::cout << "*********DURANTE O JOGO**************" << std::endl;
    numVidas = numVidas + 150;
    pontuacao = pontuacao - 1;
    std::cout << "Vidas Jogador: " << numVidas << std::endl;
    std::cout << "Pontuacao: " << pontuacao << std::endl;
    std::cout << "Endereco que numVidas ocupa na Memoria RAM: " << &numVidas << "\n";
    std::cout << "Endereco que Pontuacao ocupa na Memoria RAM: " << &pontuacao << "\n";
    std::cout << "***********************" << std::endl;
    system("Pause");
}
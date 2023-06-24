#include <iostream>
#include <string.h> 

int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
    int SomaDosNumeros;
    SomaDosNumeros = Numero + NumeroASerSomado;
    return SomaDosNumeros;
}

void Mensagem()
{
    std::cout << "\nMensagem de Marte... Chegamos bem...\n";
    return; //opcional para encerrar a função aqui, como fazemos em c
}

int main()
{
    int Numero, NumeroASerSomado;
    std::cout << "Digite um numero: " << "\n";
    std::cin >> Numero;
    std::cout << "Digite o numero a ser somado: " << "\n";
    std::cin >> NumeroASerSomado;
    std::cout << "A soma deste numero: " << Numero << " Com o numero: " << 
        NumeroASerSomado << " Sera: " << SomaAUmNumero(Numero, NumeroASerSomado);
    return 0;
}
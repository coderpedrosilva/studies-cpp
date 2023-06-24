#include <iostream>

int main () 
{
    int Numero{ 1024 };
    char Letra{ 'A' };
    int &Ref = Numero; //Ref é só um rótulo, não um ponteiro, é apenas um apelido, um alias, é um atalho

    std::cout << "Valor de Numero usando Ref: " << Ref << std::endl;
    std::cout << "Valor Endereco de numero: " << &Numero << std::endl;
    std::cout << "Valor Endereco de Ref: " << &Ref << std::endl;
    
    return 0;
}
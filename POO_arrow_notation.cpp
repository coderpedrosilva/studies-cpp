#include <iostream>

class Casa
{
public: 
    int NumQuartos { 4 };
    float Tamanho { 90.0f };
    bool bTemSuite { true };

public:
    void MostrarTamanho();
    int ObtenhaNUmeroDeQuartos();
    bool TemSuite();
};

int main () 
{
    //inatanciando um objeto de forma dinâmica
    Casa *CasaDePraia = new Casa();

    (*CasaDePraia).ObtenhaNUmeroDeQuartos();

    //é o mesmo que atalho:
    CasaDePraia->ObtenhaNUmeroDeQuartos();

    CasaDePraia.MostrarTamanho();
    std::cout << "\n Num Quartos: " << CasaDePraia.ObtenhaNUmeroDeQuartos();
    std::cout << "\n Tem Suite: " << CasaDePraia.TemSuite() ? std::cout << " Sim" : std::cout <<  " Não" << "\n";

    return 0;
}

void Casa::MostrarTamanho()
{
    std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNUmeroDeQuartos()
{
    return NumQuartos;
}

bool Casa::TemSuite()
{
    return bTemSuite;
}
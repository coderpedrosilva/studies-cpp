#include <iostream>
#include <string>

struct Pessoa {
    std::string nome;
    int idade;
    std::string profissao;
};

int main() {
    Pessoa pessoa1;

    pessoa1.nome = "João";
    pessoa1.idade = 30;
    pessoa1.profissao = "Engenheiro";

    std::cout << "Nome: " << pessoa1.nome << std::endl;
    std::cout << "Idade: " << pessoa1.idade << std::endl;
    std::cout << "Profissão: " << pessoa1.profissao << std::endl;

    return 0;
}

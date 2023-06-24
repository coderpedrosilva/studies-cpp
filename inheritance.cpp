#include <iostream>

// Classe base
class Animal {
public:
    void comer() {
        std::cout << "O animal está comendo." << std::endl;
    }

    void dormir() {
        std::cout << "O animal está dormindo." << std::endl;
    }
};

// Classe derivada (herda de Animal)
class Cachorro : public Animal {
public:
    void latir() {
        std::cout << "O cachorro está latindo." << std::endl;
    }
};

// Classe derivada (herda de Animal)
class Gato : public Animal {
public:
    void miar() {
        std::cout << "O gato está miando." << std::endl;
    }
};

int main() {
    // Criando objetos das classes derivadas
    Cachorro cachorro;
    Gato gato;

    // Chamando métodos da classe base e das classes derivadas
    cachorro.comer();
    cachorro.dormir();
    cachorro.latir();

    gato.comer();
    gato.dormir();
    gato.miar();

    return 0;
}

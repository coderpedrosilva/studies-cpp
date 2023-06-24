#include <iostream>

/*
Neste exemplo, temos uma classe base chamada Animal que possui uma função virtual emitSound(). 
Em seguida, temos duas classes derivadas, Cachorro e Gato, que sobrescrevem essa função virtual.

No main(), criamos dois ponteiros de tipo Animal, um apontando para um objeto Cachorro e o outro 
para um objeto Gato. Chamamos a função emitSound() para ambos os objetos, mas o comportamento 
é diferente dependendo do tipo de objeto ao qual o ponteiro está apontando.

Isso é possível devido ao polimorfismo. O compilador determina em tempo de execução qual 
implementação de emitSound() deve ser chamada com base no tipo real do objeto referenciado 
pelo ponteiro. Portanto, mesmo chamando a mesma função, o programa exibe o som característico 
de cada animal. Isso é polimorfismo em ação.
*/

// Classe base
class Animal {
public:
    virtual void emitSound() {
        std::cout << "O animal faz um som.\n";
    }
};

// Classe derivada
class Cachorro : public Animal {
public:
    void emitSound() override {
        std::cout << "O cachorro late.\n";
    }
};

// Classe derivada
class Gato : public Animal {
public:
    void emitSound() override {
        std::cout << "O gato mia.\n";
    }
};

int main() {
    Animal* animal1 = new Cachorro();
    Animal* animal2 = new Gato();

    animal1->emitSound();  // Output: O cachorro late.
    animal2->emitSound();  // Output: O gato mia.

    delete animal1;
    delete animal2;

    return 0;
}

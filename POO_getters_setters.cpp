#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    string banco;
    string agencia;
    string num_conta;
    string titular;
    double saldo;

//construtor
public:
    ContaBancaria(std::string banco, string agencia, string num_conta, string titular, double saldo) {
        this->banco = banco;
        this->agencia = agencia;
        this->num_conta = num_conta;
        this->titular = titular;
        this->saldo = saldo;
    }

    //Destrutor
    ~ContaBancaria();

    string getBanco() {
        return banco;
    }

    void setBanco(string novoBanco) {
        banco = novoBanco;
    }

    string getAgencia() {
        return agencia;
    }

    void setAgencia(string novaAgencia) {
        agencia = novaAgencia;
    }

    string getNumConta() {
        return num_conta;
    }

    void setNumConta(string novoNumConta) {
        num_conta = novoNumConta;
    }

    string getTitular() {
        return titular;
    }

    void setTitular(string novoTitular) {
        titular = novoTitular;
    }

    double getSaldo() {
        return saldo;
    }

    void setSaldo(double novoSaldo) {
        saldo = novoSaldo;
    }

    void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Saque realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente para efetuar o saque." << endl;
        }
    }

    void depositar(double valor) {
        saldo += valor;
        cout << "Depósito realizado com sucesso." << endl;
    }

    void transferir(double valor, ContaBancaria& contaDestino) {
        if (valor <= saldo) {
            saldo -= valor;
            contaDestino.depositar(valor);
            cout << "Transferência realizada com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente para efetuar a transferência." << endl;
        }
    }

    void consultarSaldo() {
        cout << "Saldo atual: R$" << saldo << endl;
    }
};

int main()
{
    // Criando uma instância da classe ContaBancaria
    ContaBancaria* conta = new ContaBancaria("Banco X", "1234", "56789", "Fulano de Tal", 1000.0);

    // Consultando o saldo
    conta->consultarSaldo();  // Saída: Saldo atual: R$1000.0

    // Libera a memória alocada pelo objeto
    delete conta;

    return 0;
}

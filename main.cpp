#include <iostream>
#include <thread>
#include "Thread.h"
#include <unistd.h>


class Testao : public Tigre::Thread {

    public:
        Testao(std::string nome){
            this->nome = nome;
        }

    private:
        std::string nome;
        void Run(){
            sleep(1);
            std::cout << "Sou uma thread \n";
            sleep(1);
            std::cout << nome << "\n";
        }
};

int main(int argc, char *argv[])  {
    try {
        Testao *t = new Testao("Pedro Soares");
        t->Start();
        sleep(1);

        while(t->IsRunning()){
            std::cout << (t->IsRunning() ? "rodando\n" : "Parada");
        }

    }catch (Tigre::ThreadException &e){
        std::cout << "Um Erro aqui";
        std::cout << e.what();
    }
}


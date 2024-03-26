#include <iostream>

int main(){
    
    std::string nome;
    
    //Crie um programa que pede ao usuário seu nome e idade e depois imprime 
    //uma mensagem de saudação

    //Solicitar idade e nome;
    std::cout <<"Digite idade e nome : \n";

    std::getline(std::cin, nome);

    //Programa realiza a impressão de uma mensagem, de boas vindas;
    std::cout <<"Obrigado por realizar o seu cadastro" << nome <<"|Aproveite o site. \n";
            
                return 0;
}


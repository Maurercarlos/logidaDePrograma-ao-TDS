#include <iostream>

//Crie um programa que pede ao usuário para digitar;

int main(){

    int num1;   

    //Pede para o usuário, para digitar um número;

    printf("Digite seu número");
    scanf("%d", &num1);

    int num2 = 2;

    int multiplicacao = num1 * num2;

    //Realiza a multiplicação do número digitado;

    printf("Seu resultado: %d * %d = %d\n", num1, num2, multiplicacao);

    return 0;

}
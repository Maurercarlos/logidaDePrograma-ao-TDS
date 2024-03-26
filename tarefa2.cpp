#include <iostream>

//Crie um programa que pede ao usuário dois números 
//e depois imprime a soma desses números.

int main(){

    int num1;
    int num2;
    int soma;

    //Pede que a pessoa, digite o número 1;
    printf("Digite o seu primeiro número: ");
    scanf("%d", &num1);
    printf("Você digitou: %d\n", num1);

    //Pede que a pessoa, digite o número 2;
    printf("Digite o segundo número");
    scanf("%d", &num2);
    printf("Voce digitou: %d\n", num2);
   
     soma = num1 + num2;
    
    //Realizando a soma dos números;
    printf("Soma: %d + %d = %d", num1, num2, soma);

    return 0;
}
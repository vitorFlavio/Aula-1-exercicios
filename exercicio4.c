#include<stdio.h>
#include<stdlib.h>



int main(){

    float salario,novoSalario;

    printf("Informe o seu salario\n");
    scanf("%f",&salario);

    novoSalario=salario*1.25;

    printf("Novo salario: %f",novoSalario);

    return 0;
}
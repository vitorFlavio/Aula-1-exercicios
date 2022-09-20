#include<stdio.h>
#include<stdlib.h>


int main(){

    float peso,pesoG;

    printf("Informe o seu peso\n");
    scanf("%f",&peso);

    pesoG=peso*1000;

    printf("O seu peso em gramas é %f",pesoG);

    return 0;
}
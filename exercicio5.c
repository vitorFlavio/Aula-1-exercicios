#include<stdio.h>
#include<stdlib.h>



int main(){

    float raio,areaC;

    printf("Informe o raio do circulo\n");
    scanf("%f",&raio);

    areaC=3.14*(raio*raio);

    printf("Area do circulo: %f",areaC);

    return 0;
}
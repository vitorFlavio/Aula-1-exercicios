#include<stdio.h>
#include<stdlib.h>



int main(){
    float nota1,nota2,nota3,media;

    printf("Informe as notas\n");
    scanf("%f %f %f",&nota1,&nota2,&nota3);

    media=(nota1+nota2+nota3)/3;

    printf("A media é %4.2f",media);


    return 0;
}
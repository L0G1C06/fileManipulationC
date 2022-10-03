#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *farq;
    int i;
    char tentrada[50] = {"Hello"};
    char tsaida[50], car;

    if((farq = fopen("arqtexto.txt", "w")) == NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    for(i = 0; i < strlen(tentrada); i++){
        fputc(tentrada[i], farq);
    }
    fclose(farq);
    farq = fopen("arqtexto.txt", "r");
    if(farq==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    printf("\n\nVou ler e mostrar o texto gravado...\n\n");
    i=0;
    car=fgetc(farq);
    while(car!=EOF){
        tsaida[i]=car;
        printf("%c", tsaida[i]);
        i++;
        car = fgetc(farq);
    }
    fclose(farq);
}
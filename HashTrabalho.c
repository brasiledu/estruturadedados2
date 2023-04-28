#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "HashTrabalho.h"
#define MAX 3225

typedef struct Words {
    char letters[50];
}Words;

HashStruct hashes;
initHash(&hashes);

void verifyFile(Words letters[50]){
    FILE *File = fopen("ListaDePalavrasPT.txt", "r");
    if(File == NULL){
        printf("arquivo de palavras vazio");
    }else{
        Words *data = (Words*)malloc(sizeof(MAX));
        while((data = *fgets(File))!= EOF){
        for(char i[50] = 0; i<MAX){
        hash(i);
        put(&hashes, i, data);
        }
        }
    }
fclose(File);
}
/*int insertdata(){
    verifyFile();
    data = fgets(File);
    hash(data);

    

}*/
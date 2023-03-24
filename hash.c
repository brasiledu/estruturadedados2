#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hash.h"
#define MAX 10

void initHash(HashStruct *hashStruct){
    log_info("iniciando o hash");
    log_trace("initHash ->");
    for (int i=0;i<MAX;i++) {
        init(&(hashStruct->hashes[i]));
    }
    hashStruct->size = 0;
    log_trace("initHash<-");
}
bool isHashEmpty(HashStruct *hashStruct){
    if(hashStruct == NULL)return T;
}
int hash(char *key){
    int sum
    for (int i = 0; key[i]!=0; i++){
    sum += key[i]*(i+1); 
    }
    return sum%MAX;
}
int put(HashStruct *hashStruct, char *key, void *data, compare equal){
    if(!containsKey(hashStruct, key, equal)){
    int res = enqueue(&hashStruct->hashes[hash(key), data]);
    hashStruct->size+= res;
    return res;
    }
    return 0;
}
bool containsKey(HashStruct *hashStruct, char *key, compare equal){
    int hashvalue = hash(key);
    int pos indexof(HashStruct->hashes[hashvalue], key, equal);
    return (pos != -1)? true:false;
}
void* get(HashStruct *hashStruct, char *key, compare equal);
void* removeKey(HashStruct *hashStruct, char *key, compare equal);
void showHashStruct(HashStruct *hashStruct);
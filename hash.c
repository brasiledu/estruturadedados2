#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"
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
    if(hashStruct == NULL)return 0;
}
int hash(char *key){
    int sum;
    for (int i = 0; key[i]!=0; i++){
    sum += key[i]*(i+1); 
    }
    return sum%MAX;
}
int put(HashStruct *hashStruct, char *key, void *data, compare equal){
    if(!containsKey(hashStruct, key, equal)){
    int res = enqueue(&hashStruct->hashes[hash(key)], data);
    hashStruct->size+= res;
    return res;
    }
    return 0;
}
bool containsKey(HashStruct *hashStruct, char *key, compare equal){
    int hashvalue = hash(key);
    int pos = indexOf(&hashStruct->hashes[hashvalue], key, equal);
    return (pos != -1)? true:false;
}
void* get(HashStruct *hashStruct, char *key, compare equal){
    int hashValue = hash(key);
    Node *aux = hashStruct-> hashes[hashValue].first->next;
    while(aux!=hashStruct->hashes[hashValue].first && !equal(aux->data, key))
    aux = aux -> next;
    return aux->data;
}
void* removeKey(HashStruct *hashStruct, char *key, compare equal){
    int hashValue =hash(key);
    int pos = indexOf(&hashStruct->hashes[hashValue], key, equal);
    void* result = removePos(&hashStruct->hashes[hashValue], pos);
    if(result!=NULL)hashStruct->size--;
    return result;
}
void showHashStruct(HashStruct *hashStruct, printNode print){
    printf("There are %d elements in the Hash\n \n", hashStruct->size);
    for(int i=0; i<MAX; i++){
    printf("Hash %d has %d elements: ", i, hashStruct->hashes[i].size);
    show(&hashStruct->hashes[i], print);
    printf("\n");
    }
}
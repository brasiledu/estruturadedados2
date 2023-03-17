#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "GeneralizedLinkedList.h"
#include "log.h"

int addAtom(Node **list, int atom){
    Node *no = (Node*)malloc(sizeof(Node));
    if(no == NULL) return -1;
        no->type = 0;
        no->atomList.atom = atom;
        no->next = NULL;
            if(*list == NULL){
               *list = no;
            }else{
                Node *aux = NULL;
                for(aux = *list; aux->next!=NULL; aux = aux->next);
                aux->next= no;
            }
        return 1;
}

int addList(Node **list, Node **subList){
    Node *no = (Node*)malloc(sizeof(Node));
    if(no == NULL) return -1;
    no->type = 1;
    no->atomList.list = *subList;
    no->next = NULL;
            if(*list == NULL){
               *list = no;
            }else{
                Node *aux = NULL;
                for(aux = *list; aux->next!=NULL; aux = aux->next);
                aux->next= no;
            }
    return 1;
}
/*Node* head(Node *list){
    Node *aux = (Node*)malloc(sizeof(Node));
    aux->list->next;
 return aux;
}

/*Node* tail(Node *list){
    Node *aux = (Node*)malloc(sizeof(Node));
    aux->list->NULL;
 return aux;
}*/
void show(Node *list){
    Node *aux = list;
    while(aux!=NULL){
        aux->next;
        printf("(%p)", aux);
    }
    printf("/n");
}
/*boole search(Node *list, int atom);
int depth(Node *list);*/
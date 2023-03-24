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
 Node* head(Node *list){
    Node *aux = NULL
    if((list) -> type == 0){
        aux = (Node*)malloc(sizeof(Node));
        aux->type = 0;
        aux->atomList.atom =(list)->atomList.atom;
        aux->next = NULL;
    }else{
        aux = list->atomList.list;
    }
 return aux;
}

Node* tail(Node *list){
 return (list)->next;
}
void show(Node *list){
    printf("( ")
    Node *aux = NULL;
    while(aux = list; aux = aux->next; aux!=NULL){
        if(aux->type == 0){
        printf("%d", aux->atomList.atom);
        }
        else{
            show(aux->atomList.list);

        }
    }
    printf("/n");
}
int depth(Node *list){
    int dep          
}
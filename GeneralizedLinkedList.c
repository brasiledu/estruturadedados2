#include <stdio.h>
#include <stdlib.h>
#include "GeneralizedLinkedList.h"
#include "log.h"

int addAtom(Node **list, int atom){
    Node *no = (Node*)malloc(sizeof(Node));
    if(no == NULL) return -1;
        no->type = 0;
        no->atomlist.atom = atom;
        no->next = NULL;
}
/*int addList(Node **list, Node **subList);
Node* head(Node *list);
Node* tail(Node *list);*/
void show(Node *list){

}
/*boolean search(Node *list, int atom);
int depth(Node *list);*/
#include <stdlib.h>
#include <stdio.h>
#include "GeneralizedLinkedList.h"
#include "log.h"

int main() {
	FILE *file = fopen("program.log","w");
	
	log_set_level(LOG_INFO);
	log_add_fp(file, LOG_TRACE);
    
    Node *listaGeneralizada = NULL;
    printf("Lista: ");
    showGeneralizedList(listaGeneralizada);
    addAtom(&listaGeneralizada, 3);
    addAtom(&listaGeneralizada, 5);
    //printf("%d\n",listaGeneralizada->atomList.atomo);
    Node *lista2 = NULL;
    addAtom(&lista2, 7);
    addAtom(&lista2, 9);
    Node *lista3 = NULL;
    addAtom(&lista3, 11);
    addAtom(&lista3, 13);

    Node *lista4 = NULL;
    addAtom(&lista4, 15);
    addAtom(&lista4, 17);
    addList(&lista2, &lista4);
    
    Node *lista5 = NULL;
    addAtom(&lista5, 33);
    addAtom(&lista5, 44);
    addList(&lista3, &lista5);
    
    //    printf("%d\n",lista2->prox->atomList.atomo);
    addList(&listaGeneralizada, &lista2);
    addList(&listaGeneralizada, &lista3);

    //    printf("%d\n",listaGeneralizada->prox->prox->atomList.lista->atomList.atomo);
    
   /* printf("\nLista: ");
    showGeneralizedList(listaGeneralizada);
    printf("\nProfundidade: %d\n",depth(listaGeneralizada));
    
    printf("\nTail: ");
    showGeneralizedList(tail(listaGeneralizada));
    
    printf("\n\nhead(tail()): %d\n",head(tail(listaGeneralizada))->atomList.atom);
    printf("\n\nhead(tail(tail(head(tail(tail()))))):\n");
    
    showGeneralizedList(head(tail(tail(head(tail(tail(listaGeneralizada)))))));
    
    printf("\n\nLista: ");
    showGeneralizedList(head(tail(tail(listaGeneralizada))));
    printf("\nProfundidade: %d\n",depth(head(tail(tail(listaGeneralizada)))));
 */   
    return 0;
}
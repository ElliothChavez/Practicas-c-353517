#include <stdio.h>
#include <stdlib.h>
 /*metodo ingenuo, primero se crean los nodos y al final se enlazan*/
 
/* Estructura de datos para almacenar un nodo de lista enlazada*/
struct Node
{
    int data;
    struct Node* next;
};
 
/* Función auxiliar para devolver un nuevo nodo de lista enlazada del heap*/
struct Node* newNode(int data)
{
    /* asignar un nuevo nodo en un heap y configurar sus datos*/
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
 
    /* El puntero `.next` del nuevo nodo no apunta a nada*/
    node->next = NULL;
 
    return node;
}
 
/* Función ingenua para la implementación de listas enlazadas que contienen tres nodos*/
struct Node* constructList()
{
    /* construye tres nodos de lista enlazados*/
    struct Node* first = newNode(1);
    struct Node* second = newNode(2);
    struct Node* third = newNode(3);
 
    /* reorganizar los punteros para construir una lista*/
    struct Node* head = first;
    first->next = second;
    second->next = third;
 
    /* devuelve un puntero al primer nodo de la lista*/
    return head;
}
 
/* Función auxiliar para imprimir una lista enlazada*/
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL");
}
 
int main(void)
{
    /* `head` apunta al primer nodo (también conocido como nodo principal) de una lista enlazada*/
    struct Node* head = constructList();
 
    /* imprimir lista enlazada*/
    printList(head);
 
    return 0;
}

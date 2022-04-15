//
// Created by hp on 4/15/22.
//
#include <stdbool.h>

#ifndef SINGLELIST_SINGLELIST_H
#define SINGLELIST_SINGLELIST_H


typedef struct node {

    int num;
    struct node *next;


} node;


node *makeEmpty(node *head);

bool isEmpty(node *l);

bool isLast(node *n, node *head);

node *find(int x, node *head);

node *findPrev(int x, node *l);

void deleteNode(int x, node *head);

void insertAtBeginning(int x, node *head);

void insertAtNode(int x, node *head, node *p);

void printList(node *head);

void deleteList(node *head);

int sizeOfList(node *head);


#endif //SINGLELIST_SINGLELIST_H

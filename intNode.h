#pragma once
#define IsInt
#include"floatNode.h"
#ifdef IsInt

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define RETYPE int
#define PRINT_VAL(a) printf("%d\n",a)
#define CASTING(a,b) int a=*((int*)b)  
#define SCAN_DATA(a) scanf("%d",&a)

typedef struct Node
{
	int value;
	struct Node* left;
	struct Node* rigth;
}Node;

Node* createNode(void* val);
void addItemToTreeRec(Node *node, void* val);
void printPostOrderREC(Node* root);
RETYPE sumLeftSonsRe(Node* root);
void printOneSonRe(Node* root);
void freeTreeRE(Node* root);
Node *findInTreeRe(Node* root, void * val);

#endif 
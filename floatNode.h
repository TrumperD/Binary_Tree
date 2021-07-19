#pragma once
#include"intNode.h"
#ifndef IsInt

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define RETYPE float
#define PRINT_VAL(a) printf("%.2f\n",a)
#define CASTING(a,b) float a=*((float*)b)  
#define SCAN_DATA(a) scanf("%f",&a)

typedef struct Node
{
	float value;
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

#endif // !IsInt
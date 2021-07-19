#pragma once
#include "floatNode.h"
#include "intNode.h"

typedef struct BST
{
	Node* root;
}BST;

void init(BST*bst);
void addItemToTree(BST *bst, void* val);
void printOneSon(BST* bst);
int sumLeftSons(BST*bst);
void printPostOrder(BST*bst);
Node *findInTree(BST* bst, void * val);
void printGeneral(void fubcName(BST*), BST*bst);
void freeTree(BST* bst);
#include"tree.h"
#include <stdio.h>

void init(BST*bst)
{
	bst->root= NULL;
}

void addItemToTree(BST *bst, void* val)
{
	CASTING(data, val);
	if (bst->root == NULL)
	{
		bst->root = createNode(val);
		return;
	}
	addItemToTreeRec(bst->root, val);
}

void printOneSon(BST* bst)
{
	printOneSonRe(bst->root);
}


RETYPE sumLeftSons(BST*bst)
{
	return sumLeftSonsRe(bst->root);
}


void printPostOrder(BST*bst)
{
	printPostOrderREC(bst->root);
}

Node *findInTree(BST* bst, void * val)
{
	
	Node* temp = (Node*)calloc(1, sizeof(Node));
	assert(temp);
	return temp=findInTreeRe(bst->root, val);
}

void printGeneral(void fubcName(BST*), BST*bst)
{
	fubcName(bst);
}

void freeTree(BST* bst)
{
	freeTreeRe(bst->root);

}






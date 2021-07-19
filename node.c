#include "tree.h"

Node* createNode(void* val)
{
	Node* newNode = (Node*)calloc(1, sizeof(Node));
	assert(newNode);
	CASTING(data, val);
	newNode->value = data;
	return newNode;
}

void addItemToTreeRec(Node *node, void* val)
{
	CASTING(data, val);
	if (data <= node->value)
	{
		if (node->left == NULL)
		{
			node->left = createNode(val);
			return;
		}
		else addItemToTreeRec(node->left, val);
		return;
	}
	else
	{
		if (node->rigth == NULL)
		{
			node->rigth = createNode(val);
			return;
		}
		addItemToTreeRec(node->rigth, val);
		return;
	}
}

void printPostOrderREC(Node* root)
{
	if (root != NULL)
	{
		printPostOrderREC(root->left);
		printPostOrderREC(root->rigth);
		PRINT_VAL(root->value);
	}
}

RETYPE sumLeftSonsRe(Node* root)
{
	RETYPE a = 0;
	CASTING(sum, &a);
	if (!root)
		return sum;
	if (root->left != NULL)
	{
		sum += root->left->value;
		sumLeftSonsRe(root->left);
	}
	sumLeftSonsRe(root->rigth);
	return sum;
}

void printOneSonRe(Node* root)
{
	if (root == NULL)
		return;
	if (root != NULL)
	{
		printOneSonRe(root->left);
	}
	if (root->left == NULL && root->rigth != NULL)
	{
		PRINT_VAL(root->value);
		printOneSonRe(root->rigth);
	}
	if (root->left != NULL && root->rigth == NULL)
	{
		PRINT_VAL(root->value);
		printOneSonRe(root->left);
	}
}

Node*findInTreeRe(Node* root, void * val)
{
	if (!root)
		return NULL;
	CASTING(data, val);
	if (data == root->value)
		return root;
	if (data < root->value)
		findInTreeRe(root->left, val);
	else
		findInTreeRe(root->rigth, val);
}

void freeTreeRe(Node* root)
{
	if (!root) return;
	if (root->rigth ==NULL&& root->left == NULL)
	{		
	free(root);
	return;
	}
	freeTreeRe(root->rigth);
	freeTreeRe(root->left);
	free(root);
}











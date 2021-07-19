#include "tree.h"

void main()
{
	BST MainBst;
	init(&MainBst);
	RETYPE data;
	int choois, printOp;
	printf("Hello and welcome to your binar tree!\n");
	printf("Please enter your choois:\n");
	do 
	{
		printf("1-Enter new Node\n2-Sum of left\n3-Find Node\n4-Print by Options\n5-Exit\n");
		scanf("%d", &choois);
		switch (choois)
		{
		case 1: printf("Please enter value: ");
			SCAN_DATA(data);
			addItemToTree(&MainBst, &data);
			break;
		case 2: printf("The sum of left values is: ");
			PRINT_VAL(sumLeftSons(&MainBst));
			break;
		case 3: printf("Please enter Node value: ");
			SCAN_DATA(data);
			Node* temp=findInTree(&MainBst, &data);
			if (!temp)printf("The value was not found.\n");
			else printf("The value is found in the addres: %p", &data);
			break;
		case 4:printf("Print options:\n1-Print one son\n2-Print postorder\n");
			scanf("%d", &printOp);
			switch (printOp)
			{
			case 1: printGeneral(printOneSon, &MainBst);
				break;
			case 2: printGeneral(printPostOrder, &MainBst);
				break;
			default: printf("Invalid option.\n");
			}
			break;
		case 5: freeTree(&MainBst);
			printf("Thank you and Goodbye\n");
			break;
		default: printf("Invalid choois\n");
		}
	} while (choois != 5);
	system("pause");
}
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<fstream>
using namespace std;
//#include "AVL_test.h"
#include"avl.h"

ifstream fýn("ýnput.txt");

int main()
{
	int key;
	char option;

	NodeAVL *root = NULL;

	//FILE *fp = fopen("input.txt", "r");

	/*if (!fp)
	{
		perror("Unable to open file");
		exit(0);
	}
	*/
	while (fýn>>option)
	{
		
		//fscanf(fp, "%c", &option);

		if (option == 'I')
		{
			//fscanf(fp, "%d", &key);
			fýn >> key;
			root = insertAVLNode(root, key);
		}
		else if (option == 'D')
		{
			//fscanf(fp, "%d", &key);
			fýn >> key;
			root = deleteAVLNode(root, key);
		}

	}

	//fclose(fp);

	displayAVLTree(root, 10);

	system("PAUSE");
	return 0;
}

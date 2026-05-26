// w.a.p. to create a binary tree and produce the output using all three
// traversal methods of binary tree.

#include<stdio.h>
#include<conio.h>
void insert();
struct abc
{
	int info;
	struct abc *left,*right;
};
struct abc *root = NULL, *node,*p,*q;
void main()
{
	int ch;
	do
	{
		//clrscr();
		printf("\n Binary Tree");
		printf("\n 1. Insert element");
		printf("\n 2. Preorder Traversal");
		printf("\n 3. Inorder Traversal");
		printf("\n 4. Postorder Traversal");
		printf("\n 5. Exit");
		printf("\n Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				getch();
				continue;
			case 2:
				p = root;
				preorder(p);
				getch();
				continue;
			case 3:
				p = root;
				inorder(p);
				getch();
				continue;
			case 4:
				p = root;
				postorder(p);
				getch();
				continue;
		}
	}while(ch!=5);
}
insert()
{
	node = (struct abc *) malloc(sizeof(struct abc));
	printf("\n Enter element : ");
	scanf("%d",&node->info);
	if(root == NULL)
	{
		root = node;
		node->left = NULL;
		node->right = NULL;
		return;
	}
	p = root;
	find(p);
	return;
}
find( struct abc *p)
{
	if(node->info < p->info)
	{
		if(p->left != NULL)
			find(p->left);
		else
		{
			p->left = node;
			node->left = NULL;
			node->right = NULL;
			return;
		}
	}
	else if(node->info > p->info)
	{
		if(p->right != NULL)
			find(p->right);
		else
		{
			p->right = node;
			node->left = NULL;
			node->right = NULL;
			return;
		}
	}
	else
	{
		printf("\n Duplicate Element not allowed");
		return;
	}
	return;
}
preorder(struct abc *p)
{
	printf("\n Element is : %d",p->info);
	if(p->left != NULL)
		preorder(p->left);
	if(p->right != NULL)
		preorder(p->right);
	return;
}
inorder(struct abc *p)
{

	if(p->left != NULL)
		inorder(p->left);
	printf("\n Element is : %d",p->info);
	if(p->right != NULL)
		inorder(p->right);
	return;
}
postorder(struct abc *p)
{
	if(p->left != NULL)
		postorder(p->left);
	if(p->right != NULL)
		postorder(p->right);
	printf("\n Element is : %d",p->info);
	return;
}


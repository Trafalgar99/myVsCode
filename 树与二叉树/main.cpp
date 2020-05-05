#include<iostream>
#include<cstdio>
using namespace std;

class Treenode
{
public:
	Treenode()
	{
		this->left = NULL;
		this->right = NULL;
	}
public:
	int data;
	Treenode* left;
	Treenode* right;
};
class Tree
{
public:
	Treenode* root;
};

//二叉树顺序插入元素
void biTreeInsert(Tree*tree,int val)
{
	Treenode* node = new Treenode;
	node->data = val;
	if (tree->root == NULL)
	{
		tree->root = node;
	}
	else
	{
		Treenode* tem = tree->root;
		while (tem)
		{
			if (val < tem->data)
			{
				if (tem->left == NULL)
				{
					tem->left = node;
					return;
				}
				else
				{
					tem = tem->left;
				}
			}
			else
			{
				if (tem->right == NULL)
				{
					tem->right = node;
					return;
				}
				else
				{
					tem = tem->right;
				}
			}
		}
	}
}


//二叉树的遍历
//先序遍历
void preTraverseTree(Treenode* tree)
{
	if (tree != NULL)
	{
		cout << tree->data << " ";
		preTraverseTree(tree->left);
		preTraverseTree(tree->right);
	}
	
}
//中序遍历
void inTraverseTree(Treenode* tree)
{
	if (tree != NULL)
	{
		preTraverseTree(tree->left);
		cout << tree->data << " ";
		
		preTraverseTree(tree->right);
	}
	
}
//后序遍历
void postTraverseTree(Treenode* tree)
{
	if (tree != NULL)
	{
		preTraverseTree(tree->left);
		

		preTraverseTree(tree->right);
		cout << tree->data << " ";
	}

}



void test01()
{
	Treenode* p1 = new Treenode;
	p1->data = 1;
	Treenode * p2 = new Treenode;
	p2->data = 2;
	Treenode * p3 = new Treenode;
	p3->data = 3;
	p1->left = p2;
	p1->right = p3;
	preTraverseTree(p1);
	printf("\n");
	inTraverseTree(p1);
	printf("\n");
	postTraverseTree(p1);
		
}

void test02()
{
	int arr[7] = { 6,3,8,2,5,1,7 };
	Tree tree;
	tree.root = NULL;

	int i;
	for (i = 0; i < 7; i++)
	{
		biTreeInsert(&tree, arr[i]);
	}
	preTraverseTree(tree.root);
}

int main()
{

	// test01();

	test02();
	
	system("pause");
	return 0;
}
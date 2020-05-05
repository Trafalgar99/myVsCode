#include"tree.h"

#define N 10

//前序遍历 
void preOder(pNode p) {
	if (p) {
		printf("%d", p->data);
		preOder(p->left);
		preOder(p->right);

	}
}

//中序遍历//二叉搜索树的中序遍历有序
void midOder(pNode p) {
	if (p) {
		midOder(p->left);
		printf("%d", p->data);
		midOder(p->right);

	}
}	

//后序遍历
void latOder(pNode p)  {
	if (p) {
		latOder(p->left);
		latOder(p->right);
		putchar(p->c);
	}
}
//建立二叉搜索树
void insert(Tree* tree,int value){
	pNode node = (pNode)calloc( 1,sizeof(Node));
	node->data  = value;
	node->left  = NULL;
	node->right = NULL;

	if (NULL == tree->root) {
		tree->root = node;
	}
	else {
		pNode temp=tree->root;
		while (temp) {
			if (value < temp->data) {
				if (NULL == temp->left) {
					temp->left = node;
					return; 
				}
				else {
					temp = temp->left;
				}
			}
			else {
				if (NULL == temp->right) {
					temp->right = node;
					return;
				}
				else {
					temp = temp->right;
				}
			}
		}
	}
}
//求二叉搜索树的高度
int get_height(pNode node) {
	if (NULL == node) {
		return 0;
	}
	else {
		int left_h = get_height(node->left);
		int right_h = get_height(node->right);
		int max = left_h;
		if(right_h>max){
			max = right_h;
		}
		return max + 1;
	}
}
//求树的最大值
int get_maximum(pNode node) {
	if (NULL == node) {
		return -1;
	}
	else {
		int m1 = get_maximum(node->left);
		int m2 = get_maximum(node->right);
		int m3 = node->data;
		int max = m1;
		if (m2 > max) { max = m2; }
		if (m3 > max) { max = m3; }
		return max;
	}
}

int main() {
	//char c[N + 1] = "ASXDFGXCVG";
	//int i,j;
	//pNode p[N];
	//pNode tree1;
	//for (i = 0; i < N; i++) {
	//	p[i]=(pNode)calloc(1, sizeof(Node));
	//	p[i]->c = c[i];
	//}
	//	tree1=0;
	//	for (i = 1; i < N; i++) {//外层控制要进树的循环
	//		if (p[j]->left == NULL) {
	//			p[j]->left = p[i]; 
	//		}
	//		else if (p[j]->right == NULL) {
	//			p[j]->right = p[i];
	//			j++;
	//		}
	//}
	//	preOder(tree1);
	//	printf("\n");
	//	midOder(tree1);
	//	printf("\n");
	//	latOder(tree1);
	//	printf("\n");
	//	system("pause");

		Tree tree;
		int arr[7] = { 6,4,5,7,2,3,1 };
		tree.root=NULL;
		int i;
		for (i = 0; i < 7 ; i++) {
			insert(&tree, arr[i]);
		}
		midOder(tree.root);










		system("pause");
		return 0;
}
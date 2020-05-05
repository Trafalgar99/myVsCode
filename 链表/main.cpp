#include<iostream>
using namespace std;

//创建链表结点
class Node 
{
public:
	//Node() {

	//}
	int data;
	Node* pNext;
};

//从头指针打印链表
void Print_List(Node* p) {
	while (p->pNext) {
		cout << p->pNext->data<< " ";
		p = p->pNext;
	}
	cout << endl;
}

//头插法
void List_HeadInsert(Node *&List_p)
{
	Node* p;
	int x;
	List_p = new Node;		//头结点
	List_p->pNext = NULL;
	cin >> x;
	while (x != 9999)
	{
		p = new Node;
		p->data = x;
		p->pNext = List_p->pNext;
		List_p->pNext = p;
		cin >> x;	
	}
}

//尾插法
void List_TailInsert(Node*& List_p) {
	int x;
	List_p = new Node;
	Node* p=List_p;
	Node* ptail=List_p;
	List_p->pNext = NULL;
	cin >> x;
	while (x != 9999) {
		p = new Node;
		p->data = x;
		p->pNext = NULL;
		ptail->pNext = p;
		ptail = p;
		cin >> x;
	}
}

//按序号查找结点值
Node* Find_Node_By_Num(Node*List_p,int x) 
{
	int cnt = 0;
	while (cnt != x)
	{
		List_p = List_p->pNext;
		cnt++;
	}
	return List_p;
}

//按值查找表结点
Node* Find_Node_By_Val(Node* List_p, int x) 
{
	if (List_p->pNext == NULL) 
	{
		cout << "链表为空，不存在 " << x << endl;
	}
	else 
	{
		List_p = List_p->pNext;
	}
	while (List_p->pNext)
	{
		if (List_p->data == x) {
			return List_p;
		}
		List_p = List_p->pNext;
	}
	cout << "不存在 " << x << endl;
}

//插入结点操作
void Insert_New_Node(Node*List_p,int x, Node&pNewNode)
{
	int cnt = 0;
	while (cnt != x-1)
	{
		List_p = List_p->pNext;
		cnt++;
	}
	pNewNode.pNext = List_p->pNext;
	List_p->pNext = &pNewNode;
}

//删除结点操作
void Delete_Node(Node* List_p, int x)
{
	Node* tool;
	if (List_p->pNext == NULL)
	{
		cout << "空链表" << endl;
		return;
	}
	else
	{
		int cnt = 0;
		while (cnt != x - 1)
		{
			List_p = List_p->pNext;
			cnt++;
		}
		tool = List_p->pNext;
		List_p->pNext = List_p->pNext->pNext;
	}
	delete tool;
	tool = NULL;
}

//求表长操作
int Get_List_Length(Node* List_p) 
{
	int cnt = 0;
	while (List_p->pNext)
	{	
		List_p = List_p->pNext;
		cnt++;
	}
	return cnt;
}





void test01() 
{
	Node* List_P=NULL;
	 List_HeadInsert(List_P);
	 Print_List(List_P);
}
void test02() {
	Node* List_p;
	List_TailInsert(List_p);
	Print_List(List_p);
}
void test03()
{
	Node* List_P = NULL;
	List_HeadInsert(List_P);
	Print_List(List_P);
	cout << Find_Node_By_Num(List_P, 1)->data << endl;
}
void test04()
{
	int x;
	cin >> x;
	Node* List_P = NULL;
	List_HeadInsert(List_P);
	Print_List(List_P);
	cout << Find_Node_By_Val(List_P, x)->data <<endl;
}
void test05()
{
	Node* List_P = NULL;
	List_HeadInsert(List_P);
	Print_List(List_P);
	Node newNode;
	newNode.data = 66;
	Insert_New_Node(List_P,1, newNode);
	Print_List(List_P);
}
void test06()
{
	Node* List_P = NULL;
	List_HeadInsert(List_P);
	Print_List(List_P);
	Delete_Node(List_P, 1);
	Print_List(List_P);
}
void test07()
{
	Node* List_P = NULL;
	List_HeadInsert(List_P);
	Print_List(List_P);
	cout << Get_List_Length(List_P) << endl;

}

int main()
{
	//test01();

	//test02();

	//test03();

	//test04();

	//test05();

	//test06();

	test07();

	system("pause");
	return EXIT_SUCCESS;
}
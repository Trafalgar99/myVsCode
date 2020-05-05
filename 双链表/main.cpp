#include<iostream>
using namespace std;

//双链表结点
class Node
{
public:
	int data;
	Node* prior;
	Node* next;
};

//按头打印链表
void List_Print(Node*List_p)
{
	while (List_p->next)
	{
		cout << List_p->next->data << " ";
		List_p = List_p->next;
	}
	cout << endl;
}
//双链表的插入操作
void List_Insert(Node*&List_p)
{
	int x;
	Node* p;
	List_p = new Node;
	Node* assist = List_p;
	List_p->next  = NULL;
	List_p->prior = NULL;
	cin >> x;
	while (x != 9999)
	{
		p = new Node;
		p->data = x;
		p->next = NULL;
		assist->next = p;
		p->prior = assist;
		assist = p;
		cin >> x;
	}
}

//按值查找表结点
Node* Find_Node_By_Val(Node* List_p, int x)
{
	if (List_p->next == NULL)
	{
		cout << "链表为空，不存在 " << x << endl;
	}
	else
	{
		List_p = List_p->next;
	}
	while (List_p->next)
	{
		if (List_p->data == x) {
			return List_p;
		}
		List_p = List_p->next;
	}
	cout << "不存在 " << x << endl;
}

//双链表的删除操作
void Delete_Node(Node*List_p,int x)
{
	if (List_p->next == NULL)
	{
		cout << "链表为空，不存在 " << x << endl;
	}
	else
	{
		List_p = List_p->next;
	}
	while (List_p->next)
	{
		if (List_p->data == x) {
			List_p->prior->next = List_p->next;
			List_p->next->prior = List_p->prior;
			delete List_p;
			return;
		}
		List_p = List_p->next;
	}
}

void test01()
{
	Node* List_p;
	List_Insert(List_p);
	List_Print(List_p);
	
}
void test02()
{
	Node* List_p;
	List_Insert(List_p);
	List_Print(List_p);
	Delete_Node(List_p, 5);
	List_Print(List_p);
}
int main()
{
	//test01();

	test02();


	system("pause");
	return EXIT_SUCCESS;
}
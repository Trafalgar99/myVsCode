#include<iostream>
using namespace std;

//����������
class Node 
{
public:
	//Node() {

	//}
	int data;
	Node* pNext;
};

//��ͷָ���ӡ����
void Print_List(Node* p) {
	while (p->pNext) {
		cout << p->pNext->data<< " ";
		p = p->pNext;
	}
	cout << endl;
}

//ͷ�巨
void List_HeadInsert(Node *&List_p)
{
	Node* p;
	int x;
	List_p = new Node;		//ͷ���
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

//β�巨
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

//����Ų��ҽ��ֵ
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

//��ֵ���ұ���
Node* Find_Node_By_Val(Node* List_p, int x) 
{
	if (List_p->pNext == NULL) 
	{
		cout << "����Ϊ�գ������� " << x << endl;
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
	cout << "������ " << x << endl;
}

//���������
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

//ɾ��������
void Delete_Node(Node* List_p, int x)
{
	Node* tool;
	if (List_p->pNext == NULL)
	{
		cout << "������" << endl;
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

//�������
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
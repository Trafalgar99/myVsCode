#define _CRT_SECURE_NO_WARNING
#include<iostream>
using namespace std;

//单链表结点
class Node	
{
public:
	int data;
	Node* next;
};

//双链表结点
class Node2
{
public:
	int data;
	Node2* next;
	Node2* prior;
};

//从头打印链表元素（不带头结点）
void List_Print(Node*List_p)
{	
	if (List_p == NULL)
	{
		cout << "No Value" << endl;
		return;
	}
	while (List_p)
	{
		cout << List_p->data << " ";
		List_p = List_p->next;
	}
	cout << endl;
}

//从头打印链表元素（带头结点）
void List_Print2(Node* List_p)
{
	
	while (List_p->next)
	{
		cout << List_p->next->data << " ";
		List_p = List_p->next;
	}
	cout << endl;
}

//建立循环双链表
void Bi_List_Insert(Node2*&List_p)
{
	int x;
	Node2* p;
	Node2* tool;
	List_p = new Node2;
	tool = List_p;
	cin >> x;
	while (x != 9999)
	{
		p = new Node2;
		p->data = x;
		tool->next = p;
		p->prior = tool;
		p->next = NULL;
		tool = tool->next;
		cin >> x;
	}
	tool->next = List_p;
	List_p->prior = tool;
}

//头插法建立链表(不带头结点)
void List_HeadInsert(Node*& List_p)
{
	Node* p;
	int x;
	cin >> x;
	while (x != 9999)
	{
		if (List_p == NULL)
		{
			List_p = new Node;
			List_p->data = x;
			List_p->next = NULL;
			cin >>x;
		}
		else
		{
			p = new Node;
			p->data = x;
			p->next = List_p;
			List_p = p;
			
			cin >> x;
		}
		
	}
}

//头插法建立链表(带头结点)
void List_HeadInsert_Withhead(Node*& List_p)
{
	Node* p;
	int x;
	List_p = new Node;		//头结点
	List_p->next = NULL;
	cin >> x;
	while (x != 9999)
	{
		p = new Node;
		p->data = x;
		p->next = List_p->next;
		List_p->next = p;
		cin >> x;
	}
}

//删除链表中所有X（递归）
void Delete_All_X_In_List(Node*&List_p,int x)
{
	Node* p;
	if (List_p == NULL)
	{
		return;
	}
	else
	{
		if (List_p->data == x)
		{
			p = List_p;
			List_p = List_p->next;
			delete p;
			p = NULL;

			Delete_All_X_In_List(List_p, x);
		}
		else
		{
			Delete_All_X_In_List(List_p->next, x);
		}
	}
	

}

//删除链表中所有X（非递归）
void Delete_All_X_In_List_2(Node*& List_p, int x)
{
	Node* p, * r = List_p, * q;
	if (List_p == NULL)
	{
		return;
	}
	p = List_p->next;
	if (p == NULL && List_p->data == x)
	{
		q = List_p;
		delete q;
		List_p = NULL;
		return;
	}
	p = List_p->next;
	while (p)
	{
		if (p->data!=x)
		{
			r->next = p;
			r = p;
			p = p->next;
		}
		else
		{
			q = p;
			p = p->next;
			delete q;
			q = NULL;
		}
	}
}

//逆序输出单链表中的元素（递归）（秀）
void List_Print_Reversely(Node* List_p)
{
	if (List_p->next)
	{
		List_Print_Reversely(List_p->next);
	}
	cout << List_p->data << " ";
}

//删除一个最小值结点
void Delete_Min_val(Node*List_p)
{
	Node* pmin = List_p->next;
	Node* ptool = List_p;
	int minval = List_p->next->data;
	List_p = List_p->next;
	while (List_p->next)
	{
		if (List_p->next->data < minval)
		{
			pmin = List_p->next;
			minval = List_p->next->data;
		}
		List_p = List_p->next;
	}
	while (ptool->next != pmin)
	{
		ptool = ptool->next;
	}
	ptool->next = pmin->next;
	delete pmin;
	pmin = NULL;
}

//将带头结点的单链表逆置
void Reverse_List(Node*List_p)
{
	Node* q;
	Node* p = List_p->next;
	List_p->next = NULL;
	while (p)
	{
		q = p->next;
		p->next = List_p->next;
		List_p->next = p;
		p = q;
		
		
	}
}

//使带头结点单链表递增
void Sort_List(Node*List_p)
{
	Node* p = List_p->next->next;
	Node* passist = List_p->next;
	Node* passist2 = List_p;
	passist->next = NULL;
	
	Node* r ;
	while (p)
	{
		passist = List_p->next;
		passist2 = List_p;
		while (passist)
		{
			if (p->data < passist->data)
			{
				r = p;
				p = p->next;
				passist2->next = r;
				r->next = passist;
				
				break;
			}
			if (passist->next == NULL)
			{
				r = p;
				p = p->next;
				passist->next = r;
				r ->next=NULL;
				
				break;
			}
			passist = passist->next;
			passist2 = passist2->next;
		}
		
	}
}

//删除某一区间内的结点
void Delete_Some_X_In_List_2(Node*& List_p, int x,int y)
{
	List_p = List_p->next;
	Node* p, * r = List_p, * q;
	if (List_p == NULL)
	{
		return;
	}
	p = List_p->next;
	if (p == NULL && List_p->data == x)
	{
		q = List_p;
		delete q;
		List_p = NULL;
		return;
	}
	p = List_p->next;
	while (p)
	{
		if (p->data<=x||p->data>=y)
		{
			r->next = p;
			r = p;
			p = p->next;
		}
		else
		{
			q = p;
			p = p->next;
			delete q;
			q = NULL;
		}
	}
}

//按顺序输出链表并释放每一个结点
void List_Print_And_Free_Node(Node*List_p)
{
	while (List_p->next)
	{
		Node* pre = List_p;
		Node* p = pre->next;
		while (p->next)
		{
			if (p->next->data < pre->next->data)
			{
				pre = p;
			}
				p = p->next;
			
		}
		cout << pre->next->data << " ";
		Node*u = pre->next;
		pre->next = u->next;
		delete(u);
		u = NULL;
	}
	delete List_p;
	List_p = NULL;
}

//把链表按元素序号的奇偶分为两个链表
void Divide_Two_List(Node*&List_p,Node*List_1,Node*List_2)
{
	int cnt = 0;
	Node* assist = List_p->next;
	Node* tool;
	while (assist)
	{
		cnt++;
		if (cnt % 2 == 0)
		{
			Node* p = new Node;
			p->next = NULL;
			p->data=assist->data;
			List_2->next = p;
			List_2 = List_2->next;
		}
		else
		{
			Node* p = new Node;
			p->next = NULL;
			p->data = assist->data;
			List_1->next = p;
			List_1 = List_1->next;
		}
		tool = assist;
		assist = assist->next;
		delete tool;
		tool = NULL;
	}
	delete List_p;
	List_p = NULL;
}

//删除有序链表中的重复元素
void Delete_ALL_Repetitive_Val(Node*List_p)
{
	Node* assist;
	while (List_p->next)
	{
		if (List_p->data == List_p->next->data)
		{
			assist = List_p->next;
			List_p->next = assist->next;
			delete assist;
			assist = NULL;
		}
		if (List_p->next==NULL)
		{
			break;
		}
		List_p = List_p->next;
		
	}
}

//合并两个递增有序链表
void Merge_Two_List(Node*List_1,Node*List_2)
{
	Node* p1 = List_1->next;
	Node* p2 = List_2->next;
	Node* assist;
	List_1->next = NULL;

	while (p1 && p2)
	{
		if (p1->data<=p2->data)
		{
			assist = p1->next;
			p1->next = List_1->next;
			List_1->next = p1;
			p1 = assist;
		}
		else
		{
			assist = p2->next;
			p2->next = List_1->next;
			List_1->next = p2;
			p2 = assist;
		}

	}
	if (p1)
	{
		p2 = p1;
	}
	while (p2)
	{
		assist = p2->next;
		p2->next = List_1->next;
		List_1->next = p2;
		p2 = assist;
	}
	delete List_2;
	List_2 = NULL;
}

//创建含有两个链表的公共元素的单链表
Node*& Get_Common_Val_List(Node*List_1,Node*List_2)
{
	Node* p = List_1->next;
	Node* q = List_2->next;
	Node* List_p = new Node;
	Node* r = List_p;
	Node* s;
	while (p&&q)
	{
		if (p->data < q->data)
		{
			p = p->next;
		}
		else if (p->data > q->data)
		{
			q = q->next;
		}
		else
		{
			s = new Node;
			s->data = p->data;
			r->next = s;
			r = s;
			p = p->next;
			q = q->next;
		}
	}
	r->next = NULL;
	return List_p;
}

//创建含有两个链表公共元素的单链表（不创建新链表）
void Get_Common_Val_List2(Node*List_1,Node*List_2)
{
	Node* p1 = List_1->next;
	Node* p2 = List_2->next;
	Node* assist ,*tool;
	List_1->next = NULL;
	while(p1&&p2)
	{
		if (p1->data > p2->data)
		{
			assist = p2;
			p2 = p2->next;
			delete assist;
			assist = NULL;
		}
		else if (p1->data<p2->data)
		{
			assist = p1;
			p1 = p1->next;
			delete assist;
			assist = NULL;
		}
		else
		{
			tool = p1;
			p1 = p1->next;
			tool->next = List_1->next;
			List_1->next = tool;
			assist = p2;
			p2 = p2->next;
			delete assist;
			assist = NULL;
		}
	}
	if (p1)
	{
		p2 = p1;
	}
	while (p2)
	{
		assist = p2;
		p2 = p2->next;
		delete assist;
		assist = NULL;
	}
	delete List_2;
	List_2 = NULL;
}

//判断一个单链表是不是另一个的连续子元素集
void Is_Continuous_Subset(Node*List_1,Node*List_2)
{
	Node* p1 = List_1->next;
	Node* p2 = List_2->next;
	while (p1)
	{
		if (p1->data == p2->data)
		{
			Node* tool1 = p1;
			Node* tool2 = p2;
			while (tool1 && tool2)
			{
				if (tool1->data == tool2->data)
				{
					tool1 = tool1->next;
					tool2 = tool2->next;
				}
				else
				{
					break;
				}
			}
			if (tool2 == NULL)
			{
				cout << "l2是l1的连续子集和" << endl;
				return;
			}
		}
		p1 = p1->next;
	}
	cout << "l2不是l1的连续子集和" << endl;
}

//判断带头结点的循环双链表是否对称
void Is_Bi_List_Symmetry(Node2*List_p)
{
	Node2* p1 = List_p->next;
	Node2* p2 = List_p->prior;
	while (p1 != p2 && p1->next != p2)
	{
		if (p1->data != p2->data)
		{
			cout << "不对称" << endl;
			return;
		}
		p1 = p1->next;
		p2 = p2->prior;
	}
	cout << "对称"<<endl;
}


void test01()
{
	Node* List_p=NULL;
	List_HeadInsert(List_p);
	List_Print(List_p);
	Delete_All_X_In_List(List_p, 5);
	List_Print(List_p);
}

void test02()
{
	Node* List_p = NULL;
	List_HeadInsert(List_p);
	List_Print(List_p);
	Delete_All_X_In_List_2(List_p, 5);
	List_Print(List_p);
}

void test03()
{
	Node* List_p = NULL;
	List_HeadInsert(List_p);
	List_Print(List_p);
	List_Print_Reversely(List_p);
}

void test04()
{
	Node* List_p = NULL;
	List_HeadInsert_Withhead(List_p);
	List_Print2(List_p);
	Delete_Min_val(List_p);
	List_Print2(List_p);
}

void test05()
{
	Node* List_p = NULL;
	List_HeadInsert_Withhead(List_p);
	List_Print2(List_p);
	Reverse_List(List_p);
	List_Print2(List_p);
}

void test06()
{
	Node* List_p = NULL;
	List_HeadInsert_Withhead(List_p);
	List_Print2(List_p);
	Sort_List(List_p);
	List_Print2(List_p);
}

void test07()
{
	Node* List_p = NULL;
	List_HeadInsert_Withhead(List_p);
	List_Print2(List_p);
	Delete_Some_X_In_List_2(List_p, 1, 5);
	List_Print2(List_p);
}

void test08()
{
	Node* List_p = NULL;
	List_HeadInsert_Withhead(List_p);
	List_Print2(List_p);
	List_Print_And_Free_Node(List_p);

}

void test09()
{
	Node* List_p = NULL;
	List_HeadInsert_Withhead(List_p);
	List_Print2(List_p);
	Node* List_1, * List_2;
	List_HeadInsert_Withhead(List_1);
	List_HeadInsert_Withhead(List_2);
	Divide_Two_List(List_p, List_1, List_2);
	List_Print2(List_1);
	List_Print2(List_2);
}

void test10()
{
	Node* List_p = NULL;
	List_HeadInsert_Withhead(List_p);
	List_Print2(List_p);
	Delete_ALL_Repetitive_Val(List_p);
	List_Print2(List_p);
}

void test11()
{
	Node* List_1 = NULL;
	List_HeadInsert_Withhead(List_1);
	List_Print2(List_1);
	Node* List_2 = NULL;
	List_HeadInsert_Withhead(List_2);
	List_Print2(List_2);
	Merge_Two_List(List_1, List_2);
	List_Print2(List_1);
}

void test12()
{
	Node* List_1 = NULL;
	List_HeadInsert_Withhead(List_1);
	List_Print2(List_1);
	Node* List_2 = NULL;
	List_HeadInsert_Withhead(List_2);
	List_Print2(List_2);
	Node*List_p=Get_Common_Val_List(List_1, List_2);
	List_Print2(List_p);
}

void test13()
{
	Node* List_1 = NULL;
	List_HeadInsert_Withhead(List_1);
	List_Print2(List_1);
	Node* List_2 = NULL;
	List_HeadInsert_Withhead(List_2);
	List_Print2(List_2);
	Get_Common_Val_List2(List_1, List_2);
	List_Print2(List_1);
}

void test14()
{
	Node* List_1 = NULL;
	List_HeadInsert_Withhead(List_1);
	List_Print2(List_1);
	Node* List_2 = NULL;
	List_HeadInsert_Withhead(List_2);
	List_Print2(List_2);
	Is_Continuous_Subset(List_1, List_2);
}

void test15()
{
	Node2* List_p = NULL;
	Bi_List_Insert(List_p);
	Node2* p = List_p->next;
	while (p != List_p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	Is_Bi_List_Symmetry(List_p);
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	//test09();
	//test10();
	//test11();
	//test12();
	//test13();
	//test14();
	test15();


	system("pause");
	return 0;
}
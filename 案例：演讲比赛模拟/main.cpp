#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<deque>
#include<numeric>
#include<functional>
#include<ctime>
using namespace std;

/*
1) 产生选手 （ ABCDEFGHIJKLMNOPQRSTUVWX ） 姓名、得分；选手编号

2) 第1轮	选手抽签 选手比赛 查看比赛结果
3) 第2轮	选手抽签 选手比赛 查看比赛结果
4) 第3轮	选手抽签 选手比赛 查看比赛结果
*/
class Speaker
{
public:

	string m_Name;	//	姓名
	int m_Score[3];	//的分数组
};

void createSpeaker(vector<int>&v,map<int,Speaker>&m)
{
	string nameSeed = "ABCDEFGHIJKLMNOPQRSTUVWX";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 3; j++)
		{
			sp.m_Score[j] = 0;
		}
		
		v.push_back(i + 100);//编号100--123
		m.insert(make_pair(i + 100, sp));
	}
}
//抽签
void speechDraw(vector<int>v)
{
	//洗牌
	random_shuffle(v.begin(), v.end());
}

//比赛		第几轮  v1 比赛选手编号 m选手编号和具体选手 v2 晋级选手编号容器
void speechContest(int index ,vector<int>&v1,map<int, Speaker>&m,vector<int>&v2)
{
	int num = 0 ;
	multimap<int, int, greater<int>>groupMap;	//key 分数value 编号

	for (vector<int>::iterator it=v1.begin();it!=v1.end();it++)
	{
		num++;
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;	//60-100
			d.push_back(score);
		}
		//排序
		sort(d.begin(), d.end());
		//去除最高最低分
		d.pop_back();
		d.pop_front();
		//累计分数
		int sum = accumulate(d.begin(),d.end(),0);
		int avg = sum / d.size();

		//将平均分放入m容器中
		m[*it].m_Score[index - 1] = avg;

		//每六个人取前三个晋级
		//用一个临时容器保存六个人
		//临时数据存放数据
		groupMap.insert(make_pair(avg, *it));

		if (num % 6 == 0)
		{
			/*cout << "小组比赛成绩如下：" << endl;
			for (multimap<int, int, greater<int>>::iterator mit = groupMap.begin(); mit != groupMap.end(); mit++)
			{
				cout << "编号： " << mit->second << "姓名：" << m[mit->second].m_Name << "得分：" << m[mit->second].m_Score[index - 1] << endl;

			}*/
			//取前三名
			int count = 0;
			for (multimap<int, int, greater<int>>::iterator mit = groupMap.begin(); mit != groupMap.end(), count < 3; mit++, count++)
			{
				//晋级容器获取数据
				v2.push_back(mit->second);
			}

			groupMap.clear();	//清空临时容器
		}

	}
}

void showScore(int index,vector<int>&v,map<int,Speaker>&m)
{
	cout << "第" << index << "轮 比赛成绩如下： " << endl;

	for (map<int, Speaker>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "选手编号" << it->first << "姓名: " << it->second.m_Name << "分数：" << it->second.m_Score[index-1] << endl;
	}
	
	cout << "晋级选手编号： " << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	vector<int> v1;	//选手编号

	map<int, Speaker> m;	//存放选手编号和对应的具体的选手

	//创建选手
	createSpeaker(v1,m);

	//抽签
	speechDraw(v1);

	vector<int>v2;
	//比赛
	speechContest(1, v1, m, v2);

	//显示比赛结果
	showScore(1,v2,m);	//轮数  晋级编号  具体人员信息

	//第二轮比赛
	speechDraw(v2);
	vector<int>v3;
	speechContest(2, v2, m,v3);
	showScore(2, v3, m);

	//第三轮比赛
	speechDraw(v3);
	vector<int>v4;
	speechContest(3, v3, m, v4);
	showScore(3, v4, m);



	//测试
	/*for (map<int, Speaker>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "编号：" << it->first << "姓名：" << it->second.m_Name << endl;
	}*/


	system("pause");
	return EXIT_SUCCESS;
}
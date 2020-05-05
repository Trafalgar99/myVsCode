#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#include"Hero.h"
#include"Monster.h"
#include"weapon.h"
#include"Knife.h"
#include"DragonSword.h"
using namespace std;

void play() {
	//��������
	Monster* monster = new(Monster);
	//����Ӣ��
	Hero* hero = new(Hero);
	//��������
	Weapon* knife = new(Knife);
	Weapon* dragon = new(DragonSword);

	//���û�ѡ������
	cout << "��ѡ������" << endl;
	cout << "1�����ֿ�ȭ" << endl;
	cout << "2��С��" << endl;
	cout << "3����������" << endl;

	int oper;
	cin >> oper;
	switch (oper) {
	case 1: 
		cout << "����ţX���㻹��̫�����ˣ�" << endl;
		//system("cls");
		break;
	case 2:
		hero->EquipWeapon(knife);	
		break;
	case 3:
		hero->EquipWeapon(dragon);
		break;
	}
	getchar();//���뻺������Ļس������ȡһ��ֵ��
	int round = 1;
	while (true) {
		getchar();
		
	
		system("cls");
		
		cout << "----��ǰ��" << round <<"�غϿ�ʼ----"<< endl;
		/*if (hero->m_Hp <= 0) {
			cout << "Ӣ��" << hero->m_Name << "�ѹң���Ϸ����" << endl;
			break;
		}*/

		hero->Attack(monster);

		if (monster->m_Hp <= 0) {
			cout << "����" << monster->m_Name << "�ѹң�˳��ͨ��" << endl;
			break;
		}
		monster->Attack(hero);

		if (hero->m_Hp <= 0) {
			cout << "Ӣ��" << hero->m_Name << "�ѹң���Ϸ����" << endl;
			break;
		}

		cout << "Ӣ��" << hero->m_Name << "ʣ��Ѫ��" << hero->m_Hp << endl;
		cout << "����" << monster->m_Name << "ʣ��Ѫ��" << monster->m_Hp << endl;
		round++;
	} 

	delete monster;
	delete hero;
	delete knife;
	delete dragon;

}

int main() {
	srand((unsigned int)time(NULL));
	play();

	system("pause");
	return EXIT_SUCCESS;
}

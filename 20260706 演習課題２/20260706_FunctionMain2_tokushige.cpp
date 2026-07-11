#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_HeaderMain2_tokushige.h"
#include"Config2_tokushige.h"
using namespace std;
using namespace ConstName;

int InputCheck(int max, int min)
{
	int num;
	while (true)
	{
		cin >> num;
		if (num<min || num>max)
		{
			cout << "もう一度入力してください\n";
		}
		else
		{
			break;
		}
	}
	return num;
}

int InputExp(int& expnow)
{
	int num = rand() % EXP_MAX + 1;
	cout << num << "獲得\n";
	expnow += num;
	return expnow;
}

void Game()
{
	int level = 0;
	int player = 0;;
	int exp = 0;
	srand((unsigned int)time(NULL));
	cout << "ジャンケンをしてください0:グー、1:チョキ、2:パー\n";
	while (true)
	{
		player = InputCheck(HAND_MAX, HAND_MIN);
		int cpu = rand() % CPU_HAND + 1;
		int num = player - cpu;
		if (num == -1 || num == 2)
		{
			cout << "あなたの勝ち\n";
			exp = InputExp(exp);
			if (exp >= 20)
			{
				exp -= EXP_UP;
				level++;
				cout << "レベルが" << level << "に上がった" << endl;
			}
			cout << "現在の経験値" << exp << "\n";
		}
		else if (num == 0)
		{
			cout << "分け\n";
		}
		else
		{
			cout << "CPUの勝ち\n";
		}
		if (level == 5)
		{
			cout << "お疲れさまでした\n";
			break;
		}
	}
}
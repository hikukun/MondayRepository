#include<iostream>
#include"20260706_Header1_tokushige.h"
#include"Config1_tokushige.h"
using namespace std;
using namespace ConstNumber;

//回復関数
void Heal(int& hp)
{
	//回復
	hp += HEAL;
}
//入力チェック
int InputCheck(int max,int min)
{
	//変数
	int num;
	//ループ
	while (true)
	{
		//入力
		cin >> num;
		//入力のやり直し
		if (num < min || num>max)
		{
			cout << "もう一度入力してください\n";
		}
		//終わり
		else
		{
			break;
		}
	}
	//戻り値返し
	return num;
}
//実行
void run()
{
	//変数宣言
	int HP = PLAYER_HP;
	int player = 0;
	cout << "HPを回復しますか？ 0:No,1:Yes\n";
	//入力チェック
	player = InputCheck(MAX,MIN);

	if (player == 1)
	{
		//回復関数
		Heal(HP);
	}
	//結果の表示
	cout << HP << endl;
}
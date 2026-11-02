#include "Player.h"
#include"Config.h"

#include<iostream>
#include<limits>
using namespace std;

//コンストラクタ
Player::Player():Character(Config::INTIAL_HP){}

//プレイヤーの行動を選択する

PlayerAction Player::SelectAction()const
{
	//入力
	int playerInput;

	while (true)
	{
		cout << "=========SelectAction==========" << endl;

	}
}
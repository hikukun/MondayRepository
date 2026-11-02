#include<iostream>
using namespace std;

namespace player
{
	

	void Choice()
	{
		cout << "0.攻撃,1.防御,2.回復" << endl;
	}

	void Atk()
	{
		cout << "プレイヤーの攻撃" << atk << endl;
	}

	void Dif()
	{
		cout << "プレイヤーの防御" << dif << endl;
	}

	void Heal()
	{
		cout << "プレイヤーの回復" << heal << endl;
	}
}

namespace Enemy
{
	int hp = 100;
	int atk = 20;
	int dif = 30;

	void Atk()
	{
		cout << "エネミーの攻撃" << atk << endl;
	}

	void dif()
	{
		cout << "エネミーの防御" << dif << endl;
	}
}

int main(void)
{
	Player::Action();
}


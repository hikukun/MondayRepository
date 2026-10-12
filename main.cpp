#include<iostream>
#include"Character.h"
using namespace std;
int main(void)
{
	//コンストラクタ
	Character character("ヴェイルフェイス");

	cout << character.GetName();

	character.Attack();

	return 0;
}
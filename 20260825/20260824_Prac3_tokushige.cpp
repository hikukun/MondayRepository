#include<iostream>
using namespace std;

int main(void)
{
	int numbers[5] = { 35,82,17,96,54 };
	int* pNum;
	int nummax = numbers[0];

	pNum = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << "numbers[" << i << "]:" << *(pNum + i) << endl;
		if (nummax < *(pNum + i))
		{
			nummax = *(pNum + i);
		}
	}
	cout << "最大値 " << nummax << endl;
	return 0;
}
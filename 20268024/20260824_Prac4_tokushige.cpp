#include<iostream>
using namespace std;

void MAG(int& mag)
{
	int* p = &mag;

	cin >> *p;
}

int main(void)
{
	int numbers[5] = { 10,20,30,40,50 };
	int mag;
	int* pNum = numbers;
	MAG(mag);

	for (int i = 0; i < 5; i++)
	{
		*(pNum + i) *= mag;
		cout << "pNum[" << i << "]:" << *(pNum + i) << endl;
	}

	return 0;
}
#include<iostream>
using namespace std;
int main() {
	int i, j;
	for (i = 1; i <= 9; i++)//��ѭ��
	{
		for (j = 1; j <= i; j++)//��ѭ��
		{
			cout << i<<"*"<<j<<"="<<i*j<<"  ";
		}
		cout << endl;
	}
}

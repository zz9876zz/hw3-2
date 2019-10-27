#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(void)
{
	unsigned int a, b;
	unsigned long long int n;
	a = 0;
	b = 1;
	cout << "0\n1\n";	
	for (int i = 0; i < 46; i++)
	{
		n = a + b;
		a = b;
		b = n;		
		cout << n<<"\n";
	}

	system("pause");
	return 0;
}
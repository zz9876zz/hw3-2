#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


int main(void)
{

	int a, b, i;
	cout<<"¿é¤J2­Ó¼Æ:\n";
	cin >> a >> b;
	for (i = 1; i < a*b; i++)
	{
		if (i%a == 0 && i%b == 0) 
		break;
	}
	cout << "LCM of " << a << " and " << b << " is " << i<<"\n";
	system("pause");
	return 0;
}
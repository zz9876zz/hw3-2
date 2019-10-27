#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main(void)
{
	int a,b,base, ex, n;
	cout << "Enter the base:\n";
	cin >> a;
	cout << "Enter the exponent:\n";
	cin >> b;

	cout << pow(a, b)<<"\n";
	
	system("pause");
	return  0;
	
}
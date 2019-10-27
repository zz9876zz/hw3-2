#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {
	char a , b = ' ';
	cout << "¿é¤J¦r¥À:";
	
	
	while (cin >> a)//scanf_s("%c", &a);
	{
		if (a < 91) 
		{
			b = a + 32;
			cout << b<<"\n";			
		}
		else if (a > 96)
		{
			b = a -('a' - 'A');
			printf("%c\n", b);
		}
	}
	
	system("pause");
	return 0;

}
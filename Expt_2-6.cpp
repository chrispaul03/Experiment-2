#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()

{
	int n, sum = 0;
	while(n!=0)
	{
	cout << "Enter a number: "; cin >> n;
	if(n>=0)
	{
		sum = (pow(n,2) + n)/2;
		cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << endl;
	}
	else break;
	}
	cout << "Thank you!";	
	_getch();
	return 0;
}

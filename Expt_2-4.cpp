#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
	int counter;
	cout << "Counting... \n";
	for(counter=1; counter<=9; counter++) 
	{
		cout << counter << "," ;
	}
	for(counter=10; counter<=30; counter+=2)
	{
		cout << counter << ",";
	}
	_getch();
	return 0;
}

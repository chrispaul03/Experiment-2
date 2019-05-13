#include <iostream>
#include <conio.h>
using namespace std;
int main() 

{
	string package;
	float time;
	float price;
	cout << "Enter the package purchased: ";
	cin >> package;
	if ((package == "A" || package == "a") || (package == "B" || package == "b") || (package == "C" || package == "c")) 
	{
		cout << "Number of hours used: "; cin >> time;
		if (time <= 744) 
	{
		if (package == "A" || package == "a") 
 	{
		if (time > 10) 
		{
			price = 995 + (time - 10) * 2;
		} 
			else 
		{
			price = 995;
		}		
 	} 	
		else if (package == "B" || package == "b") 
 	{
		if (time > 20) 
		{
			price = 1495 + (time - 20) * 1;
		} 
			else 
		{
			price = 1495;
		}
 	} 
		else 
		price = 1995;
	}
		else 
		cout << "Inoperative number of hours in a month\n";
	}
		else 
 	{
 		cout << "No package available\n";
	}		
	cout << "\nPrice: P" << price;
	_getch();
	return 0;
} 

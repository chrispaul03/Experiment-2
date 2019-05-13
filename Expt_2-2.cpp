#include <iostream>
#include <conio.h>
using namespace std;
int main()

{	
	int usedGallons;
	float pastMonth, totalCost;
	const float unpaidCharge = 35, usedCharge = 1.10;
	cout << "Enter unpaid balance due to previous month: ";	cin >> pastMonth;
	cout << "Enter consumed gallons in the current month: "; cin >>	usedGallons;
	if (pastMonth < 0 || usedGallons < 0 ) 
	cout << "Inoperative number/s to calculate costs" << endl;
	else if (pastMonth > 0) 
		{
			totalCost = unpaidCharge + (usedCharge * usedGallons) + pastMonth + 20;
			cout << "\nWater bill charge for this month: P" << totalCost;
		}
	else 
		{
			totalCost = unpaidCharge + (usedCharge * usedGallons);
			cout << "\nWater bill charge for this month: P" << totalCost;
		}
	_getch();
	return 0;
}

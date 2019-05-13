#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
	int n;
	cout << "Fibonacci numbers:\n";
	n = 22;
	int first=0, second=1,third;
 	for(int i=0; i<n-1; i++)
	{
  			if(i==0)
  		{
   			cout<<first<<", "<<second<<", ";
    	}
   else
    	{
   			third = first + second;
   			first = second;
    		second = third;
   			cout<<third<<", ";
   		}
  	}
  	_getch();
	return 0;
}

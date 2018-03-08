#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp; 
	return;
}

int main()
{
	int a = 1, b = 2, c;
	cout<<"Before swap a = "<<a<<", b = "<<b<<endl;
	swap(a,b);
	cout<<"After swap a = "<<a<<", b = "<<b<<endl;
}
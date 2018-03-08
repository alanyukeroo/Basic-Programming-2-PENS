#include <iostream>
using namespace std;

const int MAX = 3;

int main()
{
	int *ptr;
	int var[MAX] = {10,100,200};
	ptr = var;
	//dari i = 3 -> i sampai 0 -> --i
	for(int i = MAX; i>0; i--)
	{
		cout<<"Address of var["<<i<<"] = ";
		cout<<ptr<<endl;
		cout<<"Value of var["<<i<<"] = ";
		cout<<*ptr<<endl;
		ptr--;
	}
	return 0;
}
#include <iostream>
using namespace std;

const int MAX = 3;

int main()
{
	int var[MAX] = {10,100,200};
	int *ptr;
	int i = 0;
	ptr = var; //deklarasi pointer
	//ketika ptr kurang dari alamat var[MAX-1]
	while (ptr <= &var[MAX -1]) 
	{
		cout<<"Address of var["<<i<<"] =  ";
		cout<<ptr<<endl;
		cout<<"Value of var["<<i<<"]=";
		cout<<*ptr<<endl;
		ptr++; //increment alamanya
		i++; //
	}
	return 0;
}


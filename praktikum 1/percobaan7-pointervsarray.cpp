// #include <iostream>
// usig namespace std;

// const int MAX = 3;
// int main()
// {
// 	int var[MAX] = {10,100,200};
// 	int *ptr;
// 	ptr = var;
// 	for(int i=0; i<MAX; i++)
// 	{
// 		cout<<"Address of var["<<i<<"] = ";
// 		cout<<ptr<<endl;
// 		cout<<"Value of var["<<i<<"] = ";
// 		cout<<*ptr<<endl;
// 		ptr++;
// 	}
// }

#include <iostream>
using namespace std;
const int MAX = 3;
int main()
{
	// int *ptr;
	int var[MAX] = {10,100,200};
	//ptr = var;
	for(int i = 0; i<MAX; i++)
	{
		*var = i;
		//ptr++;
	}
	return 0;
}

//kesimpulan dari 2 percobaan diatas adalah kita harus 
//inisialisasi terlebih dahulu variable penampung (pointer)
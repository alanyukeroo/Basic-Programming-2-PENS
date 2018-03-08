/* normal array */
// #include <iostream>
// using namespace std;

// const int MAX = 3;
// int main()
// {
// 	int var[MAX] = {10,100,200};
// 	for(int i = 0; i<MAX; i++)
// 	{
// 		cout<<"Value of var["<<i<<"] = " ;
// 		cout<<var[i]<<endl;
// 		return 0;
// 	}
// }


/* pointer with array */
// #include <iostream>
// using namespace std;

// const int MAX = 3;
// int main()
// {
// 	int var[MAX] = {10,100,200};
// 	int *ptr[MAX]; 
// 	for(int i = 0; i<MAX; i++)
// 	{
// 		ptr[i] = &var[i]; //assign addres of integer 
// 	}
// 	for(int i=0;i<MAX;i++)
// 	{
// 		cout<<"Value of var["<<i<<"] = " ;
// 		cout<<*ptr[i]<<endl;
// 	}
// 	return 0;
// }


/* char *names[MAX] = string names[MAX] */
#include <iostream>
using namespace std;
const int MAX = 4;
int main()
{
	char *names[MAX] = {
		"Zara Ali","Hina Ali","Nuha Ali","Sara Ali" };
		for (int i=0; i< MAX; i++)
		{
			cout<<"Value of names[" << i << "] = ";
			cout<<names[i]<<endl;
		}
		return 0;
}

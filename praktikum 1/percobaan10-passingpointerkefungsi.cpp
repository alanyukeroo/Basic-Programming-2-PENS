// #include <iostream>
// #include <ctime>

// using namespace std;

// void getSeconds(unsigned long *par);

// int main()
// {
// 	unsigned long sec;
// 	getSeconds(&sec);
// 	cout<<"Number of seconds :"<<sec<<endl;
// 	return 0;
// }

// void getSeconds(unsigned long *par)
// {
// 	*par = time(NULL);
// 	return;
// }

#include <iostream>
using namespace std;

double getAverage(int *arr, int size);
int main()
{
	int balance[5] = {1000,2,3,17,50};
	double avg;
	avg = getAverage(balance, 5);
	cout<<"Average value is: " <<avg<<endl;
	return 0;
}

double getAverage(int *arr,int size)
{
	int i, sum=0;
	double avg;
	for(i = 0; i<size; ++i)
	{
		sum += arr[i];
	}
	avg = double(sum) / size;
	return avg;
}

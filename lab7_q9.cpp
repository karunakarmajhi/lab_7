#include <iostream>
using namespace std;
int fact(int);
int main()
{
	int num;
	cout<<"Enter a number."<<endl;
	cin>>num;
	int factorial=fact(num);
	cout<<"The factorail of "<<num<<" is "<<factorial<<endl;
	return 0;
}
int fact(int n)
{
	if(n<1)
	return 1;
	else
	return n*fact(n-1);
}


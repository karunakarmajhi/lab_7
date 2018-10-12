#include <iostream>
using namespace std;
int sumOfDigits(int);
int main()
{
	int num=0;
	cout<<"Enter a number."<<endl;
	cin>>num;
	int sum=sumOfDigits(num);
	cout<<"The sum of difits of "<<num<<" is "<<sum;
	return 0;
}
int sumOfDigits(int n)
{
	if(n!=0)
	return (n%10)+sumOfDigits(n/10);
	else
	return 0;
}

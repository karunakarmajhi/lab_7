#include <iostream>
using namespace std;
int reverse(int,int);
int main()
{
	int num=0;
	cout<<"Enter a number."<<endl;
	cin>>num;
	int rev=0;
	rev=reverse(num,rev);
	cout<<num<<" after reversing is "<<rev<<endl;
	return 0;
}
int reverse(int n,int r)
{
	if(n!=0)
	return reverse(n/10,r*10+(n%10));
	else
	return r;
}

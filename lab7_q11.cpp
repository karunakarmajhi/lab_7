#include <iostream>
using namespace std;
int gcd(int,int);
int main()
{
	int n1,n2;
	cout<<"Enter two numbers."<<endl;
	cin>>n1;
	cin>>n2;
	int a=(n1>n2)?n1:n2;
	int b=(n1>n2)?n2:n1;
	cout<<"The Greatest Common Divisor of "<<n1<<" and "<<n2<<" is "<<gcd(a,b);
	return 0;
}
int gcd(int x,int y)
{
	if(x%y==0)
	return y;
	else
	return gcd(y,x%y);
}



#include <iostream>
using namespace std;
void print(int);
int main()
{
	int num=0;
	cout<<"Enter the number to which printed."<<endl;
	cin>>num;
	print(num);
	return 0;
}
void print(int n)
{
	if(n>0)
	{ 
		print(n-1);
		cout<<n<<endl;
	}
}

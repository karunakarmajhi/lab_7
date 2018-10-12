#include <iostream>
using namespace std;
int sumEven(int,int);
int sumOdd(int,int);
int main()
{
	int start,end,choice=0;
	cout<<"Enter the starting number."<<endl;
	cin>>start;
	cout<<"Enter the ending number."<<endl;
	cin>>end;
	cout<<"Enter 1 to find sum of even numbers."<<endl;
	cout<<"Enter 2 to find sum of odd numbers."<<endl;
	cin>>choice;
	int sum=0;
	if(choice==1)
	{
		if(start%2==0)
		sum=sumEven(start,end);
		else
		sum=sumEven(start+1,end);
	}
	else if(choice==2)
	{
		if(start%2==0)
		sum=sumEven(start+1,end);
		else
		sum=sumEven(start,end);
	}
	cout<<"The chosen sum is "<<sum;
	return 0;
}
int sumEven(int s,int e)
{
	if(s<=e)
	return s+sumEven(s+2,e);
	else
	return 0;
}
int sumOdd(int s,int e)
{
	if(s<=e)
	return s+sumOdd(s+2,e);
	else
	return 0;
}	


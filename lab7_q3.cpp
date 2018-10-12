#include <iostream>
using namespace std;
void printOdd(int,int);
void printEven(int,int);
int main()
{
	int start,end,choice=0;
	cout<<"Enter the starting number."<<endl;
	cin>>start;
	cout<<"Enter the ending number."<<endl;
	cin>>end;
	cout<<"Enter 1 to print all odd numbers in the range."<<endl;
	cout<<"Enter 2 to print all even numbers n the range."<<endl;
	cin>>choice;
	if(choice==1)
	{
		if(start%2==0)
		printOdd(start+1,end);
		else 
		printOdd(start,end);
	}
	else if(choice==2)
	{
		
		if(start%2==0)
		printEven(start,end);
		else 
		printEven(start+1,end);
	}
	return 0;
}
void printOdd(int s,int e)
{
	if(s<=e)
	{
		cout<<s<<endl;
		printOdd(s+2,e);
	}
}
void printEven(int s,int e)
{
	if(s<=e)
	{	
		cout<<s<<endl;
		printEven(s+2,e);
	}
}

#include <iostream>

using namespace std;


void deductnum(int *num[])
{
	for(int i=0;i<5;i++)
		num[i]-=10;
}

void addnum(int *num[])
{
	for(int i=0 ;i<5;i++)
		num[i]+=10;
}

int main()
{
	int num[5]={1,2,3,4,5};
	
	for(int i=0;i<5;i++)
		cout<<num[5]<<" ";
	cout<<endl;
	
	deductnum(num);
	
	
	
	return 0;
}
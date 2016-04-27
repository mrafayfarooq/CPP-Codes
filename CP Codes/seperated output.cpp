#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num=0;
	int remain[10];
	int tem=0;
	int i=1;
	cout<<"Please Enter a Number"<<endl;
	cin>>num;
	while(num!=0)
	{
		
		tem=num/10;
		remain[i]=num%10;
		cout<<remain[i]<<endl;
		i++;
		num=tem;
	}
	i--;
	for(int j=i;j>0;j--)
	cout<<remain[j]<<" ";
	
	getch();
}

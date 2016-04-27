/*Author:K112257-M.Rafay Farooq
Program Mechanism:Convert The Roman character into its Decimal*/
#include<iostream>
#include<conio.h>
using namespace std;
class romanType
{
	private:
		string roman;
		long decimal;
	public:
	void store()
	{
		cout<<"Enter The Roman Character"<<endl;
		cin>>roman;
	}
	romanType(long a);
	int convert ()
	{
		int j;
		j=roman.size();
		for(int i=0;i<j;i++)
		{
				if(roman[i]=='V')
				{
					decimal=decimal+5;
				}
				else if(roman[i]=='X')
				{
					decimal=decimal+10;
				}
				else if(roman[i]=='L')
				{
					decimal=decimal+50;
				}
				else if(roman[i]=='C')
				{
					decimal=decimal+ 100;
				}
				else if(roman[i]=='D')
				{
					decimal=decimal+500;
				}
				
				else if(roman[i]=='M')
				{
					decimal=decimal+1000;
				}
		}
	return decimal;
	}			
};
romanType::romanType(long a)
{
	decimal=a;
}

int main()
{
	int ans;
	romanType converter(0);
	converter.store();
	ans=converter.convert();
	cout<<ans;
	getch();
	
}

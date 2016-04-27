/*Author k11257:M Rafay Farooq
Program Mechanis: Change the Name into its Binary with Particular Format i.e
A..C..E..Y=0
a..c..e..y=1
B..D..F=1
b..d..f=0
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string str;
	int i=0;
	cout<<"Enter Any String : "<<endl;
	getline(cin,str);
	i=str.size();

	for(int j=0;j<i;j++)
	{
		if(str[j]>=65&&str[j]<=90)
		{
			if(str[j]%2==0)
			{
				str[j]=0;
			}
			else
			{
			str[j]=1;
			}
		}
		else if(str[j]>96&&str[j]<123)
		{
			if(str[j]%2==0)
			{
				str[j]=1;
			}
			else
			{
			str[j]=0;
			}
		}
		else if(str[j]<33&&str[j]>31)
		{
			str[j]=32;
			cout<<static_cast<char>(str[j]);
			continue;
		}	
		
			cout<<static_cast<int> (str[j]);
		
		
}
	getch();
}

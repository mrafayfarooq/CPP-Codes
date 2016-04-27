#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char choice;
	cout<<"What do You Wanted To Buy? Please Make a Selection "<<endl;
	cout<<"Candies (C) Snacks (S) Biscuit (B) "<<endl;
	cin>>choice;
	switch(choice)
	{
		case('C'):
			char c;
			cout<<"One Candy Cost $2 :"<<endl;
			cout<<"Do You Wanted To Buy :"<<endl;
			cin>>c;	
			switch(c)
			{
				case('Y'):
					cout<<"$2 Dollar has been detected from your Account "<<endl;
				case('N'):
				break;		
			}
			break;
		case('S'):
			if(c=='N')
			{
			break;
			}
			char a;
			cout<<"One Snack Cost $2.5 :"<<endl;
			cout<<"Do You Wanted To Buy :"<<endl;
			cin>>a;	
			switch(a)
			{
				case('Y'):
					cout<<"$2.5 Dollar has been detected from your Account "<<endl;
				case('N'):
				break;		
			}
			break;
		case('B'):
			
			char b;
			cout<<"One Biscuit Cost $5 :"<<endl;
			cout<<"Do You Wanted To Buy :"<<endl;
			cin>>b;	
			switch(b)
			{
				case('Y'):
					cout<<"$5 Dollar has been detected from your Account "<<endl;
				case('N'):
				break;		
			}
	}
		
		
		
		
getch();		
		
	}


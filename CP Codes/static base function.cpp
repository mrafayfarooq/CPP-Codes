#include<iostream>
#include<conio.h>
using namespace std;
class Animal
{
	public:
		void speak()
		{
		cout<<"Aniamls Can't Speak"<<endl;
		}
};
class dog:public Animal
{
	public:
		void speak()
		{
		cout<<"Bhao Bhao"<<endl;
		}
};
class cat:public Animal
{
	public:
		void speak()
		{
		cout<<"Meow"<<endl;
		}
};
class parrot:public Animal
{
	public:
		void speak()
		{
		cout<<"Hello Rafay I am Parrot"<<endl;
		}
};
void sp (Animal s)
{
	s.speak();
	cout<<endl;
}
int main()
{
	parrot p;
	cat s;
	dog d;
	cout<<"When Base Class (Aniaml) doesnt Have \"Virtual Function\""<<endl<<endl;
	
	sp(p);
	sp(s);
	sp(d);
	
	
	getch();
}


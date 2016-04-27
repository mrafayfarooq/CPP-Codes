/*Author:k112257-M.Rafay Farooq
Program Mechanism:Show the operation of OVerloading*/
#include<iostream>
#include<conio.h>
using namespace std;
 

  class myclass
  {
    int sub1, sub2;

  public:
    // default constructor
    myclass(){}

    // main constructor
    myclass(int x, int y)
	{
		sub1=x;
		sub2=y;
	}

    // notice the declaration
     myclass operator +(myclass );

    void show()
	{
		cout<<sub1<<endl<<sub2;
	}
  };

  // returns data of type myclass
  myclass myclass::operator +(myclass ob)
  {
    myclass temp;

    // add the data of the object
    // that generated the call
    // with the data of the object
    // passed to it and store in temp
    temp.sub1=sub1 + ob.sub1;
    temp.sub2=sub2 + ob.sub2;

    return temp;
  }

  int main()
  {
    myclass ob1(0,90);
    myclass ob2(90,10);

    // this is valid
    ob1=ob1+ob2;

    ob1.show();
    getch();
  }


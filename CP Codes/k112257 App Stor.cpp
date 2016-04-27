/*Author:k112257*/
/*Templates are not declared on the functions where Virtual functions and composition 
is used*/
#include<iostream>
#include<conio.h>
using namespace std;

/*************************User Detail Class*****************/

class UserDetails
{
	public:
		string name;
		string password;
		string adress;
		int age;
		long long teleNumber;
		long long CNIC;
		long long credit;
	public:
		void getDetails();
		void getName();//get the name of the user
		void getPass();//get password
		void getAdress();
		void getAge();
		void getTeleNumber();
		void getCNIC();
		void getCredit();//get Credit Card Number
		void showDetails();
		void showName();
		void showAdress();
		void showAge();
		void showTeleNumber();
		void showCNIC();
		void showCredit();
		
};
/***********************Account Details***************************************/

class account_manager:public UserDetails
{
	private:
            string TName;//temperory name
		    string Tpassword;
	public:
		UserDetails user[2];//object of account
    
	bool check(UserDetails user[2]);//check username and Password
	
};

/////////////////////////////////Application Type////////////////////////////
class App
{
	protected:
		char app;
	public:
		char appType();
		
};


/**************************AppDetails*****************************/
class AppDetails:public App
{
	protected:
		char Platform;
		int code[5];
	public:
		char appPlatform();//application platform	
		char show(char);
	virtual	char type();	//category of Application
	virtual	void Display(char);//Display Application sub-categories
	virtual void details();//displaying Details
		
	
};
/*************************************Game Apps****************************/
class Game:public AppDetails
{
	private:
		char mode;
		string str;
	public:
		char type();//category of Application
		void Display(char);
};
/**********************************Entertianment App**************/
class Entertainment:public AppDetails
{
	private:
		char t;
	public:
		char type();
		void Display(char);

};
/*This App uses use the concept of Virtual Inheritance */
/////////////////////////////////////News App//////////////////////////////
class News: virtual public AppDetails
{
	protected:
		char type;
	public:
		char NewsType();
};
/***********************Sports News*************************************/
class SportsNews:virtual public News,virtual public AppDetails
{
	private:
		char choice;
	public:
		char type();
		void Display(char);
};
/***********************Weather News*************************************/
class WeatherNews:virtual public News,virtual public AppDetails
{
	private:
		char choice;
	public:
		char type();
		void Display(char);
};
///////////////////////////////////////Political News////////////////////////////////////////
class PoliticalNews:virtual public News,virtual public AppDetails
{
	private:
		char choice;
	public:
		char type();
		void Display(char);
};
/*This Apps Base class is virtually Inherited*/
///////////////////////////////Utilities App/////////////////////////////////
class Utilities:virtual public AppDetails
{
	protected:
		char type;
	public:
		char UtilityType();
};
/***********************Software utility****************************************/
class Software:virtual public Utilities,virtual public AppDetails
{
	private:
		char choice;
	public:
		char type();
		void Display(char);
};
/***********************Software utility****************************************/
class Web:virtual public Utilities,virtual public AppDetails
{
	private:
		char choice;
	public:
		char type();
		void Display(char);
};

/***********************Hacking Utilities*************************************/
class Hacking:virtual public Utilities,virtual public AppDetails
{
	private:
		char choice;
	public:
		char type();
		void Display(char);
};
//User Defined Apps
/**************************User App Details***********************************/
class UserAppsDetail
{
	private:
		string Platform;
		string typ;
		string category;
		string subCategory;
		double price;
		int code;
	public:
		void getOS();
		void getType();
		void getCategory();
		void getsubCategory();
		void getPrice();
		void getCode();
		void showOS();
		void showType();
		void showCategory();
		void showsubCategory();
		void showPrice();
		void showCode();
};
/*******************************User App Base Class**************************/
class UserApp
{
	private:
		int noOfApps;
	public:
		
		void CreateShowApps(); 
		
};
///////////////////////////////////////////////////////////////////////////////
//void show(AppDetails &s);//Virtual Main Program Function

using namespace std;
/******************************User Detail Functions***************/
void UserDetails::getName()
{
	cout<<"Please Enter Your Name: ";
	cin>>name;
	cout<<endl;
}
void UserDetails::getPass()
{
	cout<<"Please Enter Your Password: ";
	cin>>password;
	cout<<endl;
}

void UserDetails::getAdress()
{
	cout<<"Please Enter Your Adress: ";
//	fflush(stdin);
	getline(cin,adress);
	cout<<endl;
}
void UserDetails::getAge()
{
	cout<<"Please Enter Your Age: ";
	cin>>age;
	cout<<endl;
}
void UserDetails::getTeleNumber()
{
	cout<<"Please Enter Your Telephone Number: ";
	cin>>teleNumber;
	cout<<endl;
}
void UserDetails::getCNIC()
{
	cout<<"Please Enter Your CNIC number: ";
	cin>>CNIC;
	cout<<endl;
}
void UserDetails::getCredit()
{
	cout<<"Please Enter Your Credit Card number: ";
	cin>>credit;
	cout<<endl;
}
void UserDetails::showName()
{
	cout<<"Name: ";
	cout<<name;
	cout<<endl;
}
void UserDetails::showAdress()
{

	cout<<"Adress: ";
	cout<<adress;
	cout<<endl;
}
void UserDetails::showAge()
{
	cout<<"Age: ";
	cout<<age;
	cout<<endl;
}
void UserDetails::showTeleNumber()
{
	cout<<"Telephone Number: ";
	cout<<teleNumber;
	cout<<endl;
}
void UserDetails::showCNIC()
{
	cout<<"CNIC number: ";
	cout<<CNIC;
	cout<<endl;
}
void UserDetails::showCredit()
{
	cout<<"Credit Card number: ";
	cout<<credit;
	cout<<endl;
}
/*******************************************************************************/
void UserDetails::getDetails()
{
		getName();//get the name of the user
		getPass();
		getAdress();
		getAge();
		getTeleNumber();
		getCNIC();
		getCredit();
}
void UserDetails::showDetails()
{

		showName();//show the name of the user
		showAdress();
		showAge();
		showTeleNumber();
		showCNIC();
		showCredit();
}
/*******************************************************************************/

bool account_manager::check(UserDetails user[2])
{
	int i=0;
    bool check;
    cout<<"Please Enter Your Name:"<<endl;
    cin>>TName;
	for(i=0;i<2;i++)
    {
    if(user[i].name==TName)
    	{
    cout<<"User Name Found "<<endl;
    break;
		}
	}
	
    cout<<"Please Enter Your Password"<<endl;
    cin>>Tpassword;
	for(i=0;i<2;i++)
    {
	if(user[i].password==Tpassword)
		{
	    cout<<"Password Correct "<<endl;
	    cout<<"You May Enter:"<<endl;
	    return true;
        break;
		}
		else
		{
			  return false;
		}
	}
	
  
}
/*******************************************************************************/
char App::appType()
{
	cout<<endl;
	cout<<"Please Select Application Type "<<endl;
	cout<<"Games (G)"<<endl;
	cout<<"Entertainment (E)"<<endl;
	cout<<"News (N)"<<endl;
	cout<<"Utilities (U)"<<endl;
	cin>>app;
	return app;
}
/*******************************************************************************/
char AppDetails::type(){
}
void AppDetails::Display(char){
}
void AppDetails::details(){
}
char AppDetails::appPlatform()
{
	cout<<endl;
	cout<<"Please Choose A Platform Of Your App "<<endl;
	cout<<"Google (G) "<<endl;
	cout<<"Android (A) "<<endl;
	cout<<"Mac (M) "<<endl;
	cout<<"Nokia (N) "<<endl;
	cout<<"Apple (P) "<<endl;
	cin>>Platform;
	return Platform;
}
char AppDetails::show(char Platform)
{
	char m;
	if(Platform=='G')
	{
	cout<<" Google Compatible OS Apps are: "<<endl;
	cout<<endl;
	m=App::appType();
	
	}
	else if(Platform=='A')
	{
	cout<<" Android Compatible OS Apps are: "<<endl;
	cout<<endl;
	m=App::appType();

	}
	else if(Platform=='M')
	{
	cout<<" Mac Compatible OS Apps are: "<<endl;
	cout<<endl;
	m=App::appType();
	}
	else if(Platform=='P')
	{
	cout<<" Apple Compatible OS Apps are: "<<endl;
	cout<<endl;
	m=App::appType();
	}
	else if(Platform=='N')
	{
	cout<<" Nokia Compatible OS Apps are: "<<endl;
	cout<<endl;
	m=App::appType();
	}
	return m;
}

/*******************************************************************************/
char Game::type()
{
	cout<<"Please Select Player Mode Single(S) or Double(D) "<<endl;
	cin>>mode;
	return mode;
}
void Game::Display(char m)
{
	if(m=='S')
	{
	cout<<"Single Player Games Are: "<<endl;
	cout<<"Codes"<<endl;
	cout<<"122: Angry Birds"<<endl;
	cout<<"223: Snake Xenzia"<<endl;
	cout<<"342: Bow Man"<<endl;
	cout<<endl;
	cout<<"Each Game is of 2$"<<endl;
	cout<<"2$ Has Been Detected From your Credit Card"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;	
	
	}
	if(m=='D')
	{
	cout<<"Double Player Games Are: "<<endl;
	cout<<"Codes"<<endl;
	cout<<"156: Counter Strike"<<endl;
	cout<<"272: IGI 2 (Black Hole)"<<endl;
	cout<<"343: Need For Speed (UnderGround)"<<endl;
	cout<<"Each Game is of 2.2$"<<endl;
	cout<<"2.2$ Has Been Detected From your Credit Card"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;	
	}
}
/*******************************************************************************/
char Entertainment::type()
{
	cout<<"Which Category Films You Wants To Prefer To Download:"<<endl;
	cout<<"Comedy (C)"<<endl;
	cout<<"Thrill (T)"<<endl;
	cout<<"Drama (D)"<<endl;
	cout<<"Romantic (R)"<<endl;
	cin>>t;
	return t;
}
void Entertainment::Display(char t)
{
	if(t=='C')
	{
		cout<<           "Comedy Films Available Are"         <<endl;
		cout<<"Codes"<<endl;
		cout<<"521: Mr Bean Back In Action"<<endl;
		cout<<"254: Rush Hour 1"<<endl;
		cout<<"311: Mr Bean Returns"<<endl;
		cout<<"466: Rush Hour 2"<<endl;
		cout<<"Each Movie is of 4$"<<endl;
		cout<<"4$ Has Been Detected From your Credit Card"<<endl;
		cout<<"Thank You"<<endl;
		cout<<endl;	
	}
	if(t=='T')
	{
		cout<<           "Thrilling Films Available Are"         <<endl;
		cout<<"Codes"<<endl;
		cout<<"133: Physco"<<endl;
		cout<<"266: King Kong"<<endl;
		cout<<"327: Taxi Driver"<<endl;
		cout<<"490: Wizard Of oZ"<<endl;
		cout<<"Each Movie is of 4$"<<endl;
		cout<<"4$ Has Been Detected From your Credit Card"<<endl;
		cout<<"Thank You"<<endl;
		cout<<endl;	
	}
	if(t=='D')
	{
		cout<<           "Drama Films Available Are"         <<endl;
		cout<<"Codes"<<endl;
		cout<<"189: God Father"<<endl;
		cout<<"208: Fight Club"<<endl;
		cout<<"322: Inception"<<endl;
		cout<<"409: Angry Men"<<endl;
		cout<<"Each Movie is of 4$"<<endl;
		cout<<"4$ Has Been Detected From your Credit Card"<<endl;
		cout<<"Thank You"<<endl;
	}
	if(t=='R')
	{
		cout<<           "Romantic Films Available Are"         <<endl;
		cout<<"Codes"<<endl;
		cout<<"128: Titanic"<<endl;
		cout<<"662: The Note Book"<<endl;
		cout<<"083: Things I Hate About You"<<endl;
		cout<<"422: Gone With The Wind"<<endl;
		cout<<"Each Movie is of 4$"<<endl;
		cout<<"4$ Has Been Detected From your Credit Card"<<endl;
		cout<<"Thank You"<<endl;
	}
	
	
}
/*******************************************************************************/
char News::NewsType()
{
	cout<<endl;
	cout<<"Which Type Of News You Wanted to Listen or Download?"<<endl;
	cout<<"1:Sports (S)"<<endl;
	cout<<"2:Weather (W)"<<endl;
	cout<<"3:Politics (P)"<<endl;	
	cin>>type;
	return type;
};

char SportsNews:: type()
{
	cout<<endl;
	cout<<"Which Sports News Do You Wanted To Listen"<<endl;
	cout<<"Codes"<<endl;
	cout<<"561: Criket (C)"<<endl;
	cout<<"242: Hockey (H)"<<endl;
	cout<<"333: Foot Ball(F)"<<endl;
	cin>>choice;
	return choice;
}
void SportsNews:: Display(char t)
{
	if(t=='C')
	{
	cout<<"Pakistan Wons Asis Cup 2012 after Beating Bangladesh on a";
	cout<<"Thrilling Match"; 
	cout<<endl;	
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	}
	else if(t=='H')
	{
	cout<<"Pakistan win World Cup Hockey Tournament 5th Time in a Row "<<endl;
	cout<<endl;
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	
	}
	else if(t=='F')
	{
	cout<<"Manchester United lost their Tital When They face Pakistani Lions"<<endl;	
	cout<<endl;
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	
	}
}

char WeatherNews:: type()
{
	cout<<endl;
	cout<<"Which Areas Weather Information Do You Wanted To Listen"<<endl;
	cout<<"Codes"<<endl;
	cout<<"111: Pakistan ,Islamabd (S)"<<endl;
	cout<<"222: Chicago, Illinios (I)"<<endl;
	cout<<"333: Japan, Tokyo (Y)"<<endl;
	cin>>choice;
	return choice;
}
void WeatherNews:: Display(char t)
{
	cout<<endl;
	if(t=='S')
	{
	cout<<"Weather Will be bright, Sun shines with it fellow clouds carryng ";
	cout<<"Sand Strom"; 
	cout<<endl;	
	cout<<endl;
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	
	}
	else if(t=='I')
	{
	cout<<"Dark Day with wet Humanity "<<endl;
	cout<<endl;
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	
	}
	else if(t=='Y')
	{
	cout<<"Heavy Chance of Raining and Flood"<<endl;	
	cout<<endl;
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	
	}
}

char PoliticalNews:: type()
{
	cout<<endl;
	cout<<"Which Country Political News Do You Wanted To Listen"<<endl;
	cout<<"Codes"<<endl;
	cout<<"133: Pakista (P)"<<endl;
	cout<<"211: Istanbul (I)"<<endl;
	cout<<"333: Zurich (Z)"<<endl;
	cin>>choice;
	return choice;
}
void PoliticalNews:: Display(char t)
{
	if(t=='P')
	{
	cout<<"Pakistani foriegn representative (Hina Rabbani) says that we can't";
	cout<<" put our Trust on USA"; 
	cout<<endl;	
	cout<<endl;
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	
	}
	else if(t=='I')
	{
	cout<<"Hunger Strike by the Union of Staffs leads to the Discharge"; 
	cout<<"of Rights"<<endl;
	cout<<endl;
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	
	}
	else if(t=='Z')
	{
	cout<<"President USA shows their willingness to spend thier Holidays in Zurich"<<endl;
	cout<<" Preparations has been started"<<endl;	
	cout<<endl;
	cout<<"2.2$ Has Been detected From your Account for this News"<<endl;
	cout<<"Thank You"<<endl;
	
	}
}
/*******************************************************************************/
char Utilities::UtilityType()
{
	cout<<endl;
	cout<<"Which Type Of Utility You Wanted to Download?"<<endl;
	cout<<"1:Software (S)"<<endl;
	cout<<"2:Web (W)"<<endl;
	cout<<"3:Hacking (H)"<<endl;	
	cin>>type;
	return type;
};
/*******************************************************************************/
char Software:: type()
{
	cout<<endl;
	cout<<"Which Software You Wanted To Download"<<endl;
	cout<<"1:Browsing (B)"<<endl;
	cout<<"2:Computer (C)"<<endl;
	cout<<"3:AntiVirus(A)"<<endl;
	cin>>choice;
	return choice;
}
void Software:: Display(char t)
{
	if(t=='B')
	{
	cout<<"             Bowsing Softwares Available Are                 "<<endl;
    cout<<"Codes"<<endl;
	cout<<"221: Opera"<<endl;
    cout<<"236: FireFox"<<endl;
    cout<<"345: Safari"<<endl;
    cout<<"455: Chrome"<<endl;	
	cout<<endl;
	cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;
	}
	else if(t=='C')
	{
    cout<<"             Computer Softwares Available Are                 "<<endl;
    cout<<"Codes"<<endl;
	cout<<"134: Web Speeder"<<endl;
    cout<<"243: Disk Cleaner"<<endl;
    cout<<"366: Fragmentator"<<endl;
    cout<<"234: Games"<<endl;	
	cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;
	}
	else if(t=='A')
	{
    cout<<"             AntiVirus Softwares Available Are                 "<<endl;
    cout<<"Codes"<<endl;
	cout<<"41: Avira"<<endl;
    cout<<"22: Norton"<<endl;
    cout<<"31: Smart Dog"<<endl;
    cout<<"44: FASTIAN Cheetah"<<endl;	
	cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;
	}
}
/*******************************************************************************/
char Hacking:: type()
{
	cout<<endl;
	cout<<"Please Choose Type of Hacking"<<endl;
	cout<<"1:Black Hat (B)"<<endl;
	cout<<"2:White Hat (W)"<<endl;
	cout<<"3:Grey Hat (G)"<<endl;
	cin>>choice;
	return choice;
}
void Hacking:: Display(char t)
{
	cout<<endl;
	if(t=='B')
	{
	cout<<"             Black Hat Softwares Available Are                 "<<endl;
    cout<<"Codes"<<endl;
	cout<<"14: Door Breaker"<<endl;
    cout<<"22: Spy Craker"<<endl;
    cout<<"31: Cracking Cracker"<<endl;
    cout<<"44: FAST Cracker"<<endl;
    cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<endl;
	}
	else if(t=='W')
	{
	cout<<"             White Hat Softwares Available Are                 "<<endl;
    cout<<"Codes"<<endl;
	cout<<"111: Door Knocker"<<endl;
    cout<<"211: Freindly Spy"<<endl;
    cout<<"311: Cracking with Care"<<endl;
    cout<<"411: FAST Cracker"<<endl;
    cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;
	}
	else if(t=='G')
	{
		cout<<"             Grey Hat Softwares Available Are                 "<<endl;
    cout<<"Codes"<<endl;
	cout<<"661: Blue Dictionary"<<endl;
    cout<<"233: Password Paralizer"<<endl;
    cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;
	}
    
}
/*******************************************************************************/
char Web:: type()
{
	cout<<endl;
	cout<<"Please Choose Your Web Software"<<endl;
	cout<<"1:HTML 5 Developers Pro Version (H)"<<endl;
	cout<<"2:PHP (P)"<<endl;
	cout<<"3:UltraSurf (U)"<<endl;
	cin>>choice;
	return choice;
}
void Web:: Display(char t)
{
	cout<<endl;
	if(t=='H')
	{
	cout<<"             HTML 5 Developers Version Package includes              "<<endl;
    cout<<"Codes"<<endl;
	cout<<"10: Developing Toole"<<endl;
    cout<<"52: Animation"<<endl;
    cout<<"321: Graphics"<<endl;
    cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<endl;
	}
	else if(t=='P')
	{
	cout<<"           PHP Apps Are                "<<endl;
    cout<<"Codes"<<endl;
	cout<<"611: My SQL"<<endl;
    cout<<"311: Graphical Controller Interface"<<endl;
    cout<<"011: Cracking with Care"<<endl;
    cout<<"431: Data Storing"<<endl;
    cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;
	}
	else if(t=='U')
	{
		cout<<"             Ultra Surf                 "<<endl;
    cout<<"Codes"<<endl;
	cout<<"661: Web Hack"<<endl;
    cout<<"233: IP Distractor"<<endl;
    cout<<"1$ Has Been detected From your Account for using this Utility"<<endl;
	cout<<"Thank You"<<endl;
	cout<<endl;
	}
    
}

/*******************************************************************************/
void view (UserAppsDetail A[],int i)
{
	
		A[i].showOS();
		A[i].showType();
		A[i].showCategory();
		A[i].showsubCategory();
		A[i].showCode();
		A[i].showPrice();
}

void UserApp::CreateShowApps()
{
	cout<<"How Many char You wanted To Create?"<<endl;
	cin>>noOfApps;
	UserAppsDetail *A;
		
	A= new UserAppsDetail[noOfApps];//Dynamic Creation Of char

		for(int i=0;i<noOfApps;i++)
		{
			A[i].getOS();
			A[i].getType();
			A[i].getCategory();
			A[i].getsubCategory();
			A[i].getCode();
			A[i].getPrice();
			cout<<"Your App Has Been Created"<<endl;
		}
		cout<<endl;
		cout<<endl;
     char show,deletion;
     int i;
     cout<<"Do You Want To Show User Defined char (Y) or(N)"<<endl;
     cin>>show;
     if(show=='Y')
     {
     cout<<"Please Enter The Number of char You wanted us to show the details"<<endl;
     cin>> i;
     i=i-1;
	 cout<<"Your App Details Are"<<endl;
	view(A,i);
    }
	          
}

void UserAppsDetail::getOS()
{
	
	cout<<"Please Enter Application Platform"<<endl;
	cin>>Platform;
}

void UserAppsDetail::getType()
{
	cout<<"Please Enter Application Type"<<endl;
	cin>>typ;
}
void UserAppsDetail::getCategory()
{
	cout<<"Please Enter Application Category"<<endl;
	cin>>category;
}

void UserAppsDetail::getsubCategory()
{
	cout<<"Please Enter Application Sub-Category"<<endl;
	cin>>subCategory;
}
void UserAppsDetail::getPrice()
{
	cout<<"Please Enter Application Price in $"<<endl;
	cin>>price;
}
void UserAppsDetail::getCode()
{
	cout<<"Please Enter Application URC (Universal recognization Code)"<<endl;
	cin>>code;
}
///////////////////////////////////////////////////////////////
void UserAppsDetail::showOS()
{
	cout<<"Your Application Platform is: "<<Platform;
	cout<<endl;
}
void UserAppsDetail::showType()
{
	cout<<"Your Application Type is: "<<typ;
	cout<<endl;
}
void UserAppsDetail::showCategory()
{
	cout<<"Your Application Category is: "<<category;
	cout<<endl;
}
void UserAppsDetail::showsubCategory()
{
	cout<<"Your Application Sub-Category is: "<<subCategory;
	cout<<endl;
}
void UserAppsDetail::showPrice()
{
	cout<<"Your Application Price is: "<<price;
	cout<<endl;
}
void UserAppsDetail::showCode()
{
	cout<<"Your Application Code is:"<<code;
	cout<<endl;
}




/*******************************************************************************/
void show(AppDetails &s)
{
	char j;
	j=s.type();
	s.Display(j);
	
}
int main()
{
	
	char choice;
	char appType;
 	char j,k,l;
 	char counter;
	int i=0;
 	/*************************************************************************/
 	UserApp U;
 	//---------------------------------------------------------------------
	account_manager chk;
	UserDetails user[2];//created two User
	AppDetails app;
	Game game;
	Entertainment entertain;
	/**************************************************************************/
	News news;
	SportsNews sport;
	WeatherNews weather;
	PoliticalNews politics;
	/***************************************************************************/
	Utilities utility;
	Software software;
	Web web;
	Hacking hack;
	/*************************************************************************/
	
	while(choice!='e')
    {
		cout<<endl;
		cout<<"1:To create Account and see Default Apps press C"<<endl;
		cout<<"2:Exist User Press L to LogIn"<<endl;
		cout<<"3:To Create User Defined App press U"<<endl;
		cout<<"4:To Exit press e"<<endl;
		cin>>choice;
		cout<<endl;
			switch(choice)
			{
				case('C'):
				cout<<endl;	    	
				user[i].getDetails();
				cout<<endl<<" Your Account Details Are "<<endl;
				user[i].showDetails();
		    	cout<<endl<<" Your Account Has Been Created "<<endl;
				i++;
				appType=app.show(app.appPlatform());
				cout<<endl;
				if(appType=='G')
					{
					show(game);
					}
				else if(appType=='E')
					show(entertain);
				else if(appType=='N')
					j=news.NewsType();
					
				if(j=='S')
					show(sport);
				else if(j=='W')
					show(weather);
				else if(j=='P')
					show (politics);
					
				if(appType=='U')
					k=utility.UtilityType();
				if(k=='S')
					show(software);
				else if(k=='H')
					show(hack);
				else if(k=='W')
				show(web);
				break;
				
			
				case('L'):
				counter=chk.check(user);
				if(counter)
					{
					
					appType=app.show(app.appPlatform());
					cout<<endl;
				if(appType=='G')
					{
					show(game);
					}
				else if(appType=='E')
				{
					show(entertain);
				}
				else if(appType=='N')
				{
					l=news.NewsType();
				}
				if(l=='S')
				{
					show(sport);
				}
				else if(l=='W')
				{
					show(weather);
				}
				else if(l=='P')
				{
					show (politics);
				}
				else if(appType=='U')
				{
					l=utility.UtilityType();
				}
				if(l=='S')
				{
					show(software);
				}
				else if(l=='H')
				{
					show(hack);
				}
				else if(l=='W')
				{
					show(web);
				}	
					}
					else
					{
				cout<<"Wrong Password or UserName"<<endl;	
				break;
				}
			case('U'):
				U.CreateShowApps();
				break;
			}
	}
	
	getch();
	
}




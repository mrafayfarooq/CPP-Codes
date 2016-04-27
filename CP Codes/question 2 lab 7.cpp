#include<iostream>
#include<conio.h>
using namespace std;
class CarC
{
	protected:
		int tires;
		int engines;
		int tanks;
	public:
		void setTires(int t)
		{
			cin>>t;
			tires=t;
		}
		int getTires()
		{
			return tires;	
		}
		void setEngines(int e)
		{
			cin>>e;
			engines=e;
		}
		int getEngines()
		{
			return engines;	
		}
		void setTanks(int tank)
		{
			cin>>tank;
			tanks=tank;
		}
		int getTanks()
		{
			return tanks;	
		}
};

class Vehicle:public CarC
{
	protected:
		int doors;
		int seats;
		string color;
	public:
		void setDoors(int d)
		{
			cin>>d;
			doors=d;
		}
		int getDoors()
		{
			return doors;	
		}
		void setSeats(int s)
		{
			cin>>s;
			seats=s;
		}
		int getSeats()
		{
			return seats;	
		}
		void setColor(string c)
		{
			cin>>c;
			color=c;
		}
		string getColor()
		{
			return color;	
		}
		
};
class Car:public Vehicle
{
	protected:
		string model;
	public:
		void setModel()
		{
			string m;
		cin>>m;
		model=m;
		}
		string getModel()
		{	
		return model;
		}
};
class CarType :public Vehicle
{
	protected:
		string car_name;
		string type;
		float max_speed;
		float min_speed;
		int gears;
	public:
		void setName()
		{
			string n;
			cin>>n;
			car_name=n;
		}
		string getName()
		{
			return car_name;
		}
		void setType()
		{
			string t;
			cin>>t;
			type=t;
		}
		string getType()
		{
			return type;
		}
		void setMaxSpeed()
		{
			float m;
			cin>>m;
			max_speed=m;
		}
		float getMaxSpeed()
		{
			return max_speed;
		}
		void setMinSpeed()
		{
			float n;
			cin>>n;
			min_speed=n;
		}
		float getMinSpeed()
		{
			return min_speed;
		}
};
int main()
{
	CarType car;
	cout<<"Car Name :";
	car.setName();
	cout<<"Car Type :";
	car.setType();
	cout<<"Car Maximum Speed: ";
	car.setMaxSpeed();
	cout<<"Car Minimum Speed: ";
	car.setMinSpeed();
	cout<<"Car Model :";
	car.setModel();
	cout<<"Car Tires :";
	car.setTires();
	cout<<"Car Engine :";
	car.setEngines();
	cout<<"Car Tanks :";
	car.setTanks();
	cout<<"Car Doors :";
	car.setDoors();
	cout<<"Car Seats :";
	car.setSeats();
	cout<<"Car Color :";
	car.setColor("Black");
	
	cout<<"Detail Of "<<car.getName()<<" is "<<endl;
	cout<<"Car Type is "<<car.getType();
	cout<<endl;
	cout<<"Car Maximum Speed is "<<car.getMaxSpeed();
	cout<<endl;
	cout<<"Car Minimum Speed is "<<car.getMinSpeed();
	cout<<endl;
	cout<<"Car Model is "<<car.getModel();
	cout<<endl;
	cout<<"No of Tires "<<car.getTires();
	cout<<endl;
	cout<<"No of Engines "<<car.getEngines();
	cout<<endl;
	cout<<"No of Fuel Tanks "<<car.getTanks();
	cout<<endl;
	cout<<"No of Doors "<<car.getDoors();
	cout<<endl;
	cout<<"No of Seats "<<car.getSeats();
	cout<<endl;
	cout<<"Color is  "<<car.getColor();
	cout<<endl;
	getch();
}

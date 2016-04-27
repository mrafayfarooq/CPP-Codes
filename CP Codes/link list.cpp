/*k112257-M.Rafay Farooq
Program Mechanim:Different Types of operations on link list*/
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class nodeType
{
	public:
	nodeType *link;
	int value;
	void reversePrint(nodeType*);
	void forwardPrint(nodeType*);
};
void nodeType::reversePrint( nodeType *current)
{
	if(current!=NULL)
	{
	reversePrint(current->link);
	cout<<current->value<<" "<<endl;	
	}
}
void nodeType::forwardPrint( nodeType *current)
{

		cout<<current->value<<" "<<endl;		
		current=current->link;
		if(current->link!=NULL)
		{
		forwardPrint(current);
//		cout<<current->value<<" "<<endl;	

		}

	
}


int main()
{
	int x=0,search=0;
	nodeType *first=NULL, *last=NULL, *newNode , *p , *copyList , *sortedList , *firstNode ,
	*lastNode , reverse;
	ifstream infile;
	infile.open("linked.txt");
	if(!infile)
	{
		cout<<"File does not exist"<<endl;
		
	}
	
infile>>x;
while(x!=0)
{
	
		
		newNode=new nodeType;
		newNode->value=x;
		newNode->link=NULL;
	
	if(first==NULL)//list is empty
	{
	first=newNode;
	last=newNode;
	}
	else
	{
		last->link=newNode;
		
		last=newNode;
	}
	infile>>x;
}

	nodeType *current;
	current=first;
	while(current!=NULL)
	{
	cout<<current->value;
	cout<<endl;
	current=current->link;	
	}
//////Adding new node///////////
	newNode=new nodeType;
	newNode->value=420;
	newNode->link=first->link;
	first->link=newNode;
	cout<<"After Adding 420"<<endl;
	current=first;
	while(current!=NULL)
	{
	cout<<current->value;
	cout<<endl;
	current=current->link;	
	}
////////////////////////deleting////////////////////
	p=first->link;//p pointing towrads the adress of 420
	first->link=p->link; //first also pointed to the adress contained by 420 
						// so both 420 and fisrt are now ointing to the same adress/link
	delete p;
	
	cout<<"After deleting 420"<<endl;
	current=first;
	while(current!=NULL)
	{
	cout<<current->value;
	cout<<endl;
	current=current->link;	
	}
//////copying list////////////
	copyList=new nodeType;
	copyList->link=first->link;
	copyList->value=first->value;
	current=copyList;
	cout<<"After copying"<<endl;
while(current!=NULL)
{
	cout<<current->value<<endl;

	copyList=new nodeType;
	copyList->value=current->value;
	copyList->link=current->link;
	
	current=current->link;	
	
}
///Finding an element///////////
	cout<<"Enter an item to be Search"<<endl;
	cin>>search;
	current=first;
	bool found=false;
while(current!=NULL&&!found)
{
if(current->value==search)
{
found=true;
cout<<"Found"<<endl;
}
current=current->link;
}
cout<<"Not Found"<<endl;
	////Inserting the node on first
	cout<<"After Inserting Node on first End"<<endl;
	firstNode=new nodeType;
	firstNode->link=first;
	first=firstNode;
	firstNode->value=7;
	current=first;
	while(current!=NULL)
	{
	cout<<current->value;
	cout<<endl;
	current=current->link;	
	}
	//Inserting the on last node
	cout<<"After Inserting on Last"<<endl;
	lastNode=new nodeType;
	lastNode->value=4;
	lastNode->link=NULL;
	last->link=lastNode;
	lastNode=last;
	current=first;
		while(current!=NULL)
	{
	cout<<current->value;
	cout<<endl;
	current=current->link;	
	}
//Reversing printinf of list in a recursive manner
current=first;
cout<<"After Printing On reverse Order"<<endl;
reverse.reversePrint(current);
cout<<"After Printing On Forward Order"<<endl;
current=first;
reverse.forwardPrint(current);
	cout<<"Bubble Sort"<<endl;
	nodeType *prev , * next;
	current=first;
    prev=first;
    next=first->link;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6-i;j++)
        {
            if(current->value>next->value)
            {
                current->link=next->link;
                next->link=current;
              
                if(next!=NULL)//check whether final node is reached 
                    next=current->link;
                
            }
            else//just moved each node ptr by one position
            {
                prev=current;
                current=next;
                next=next->link;
            }
            
        }
        //For next iteration make the initial settings again
        current=first;
        prev=first;
        next=current->link;
    }
    
    //For display the sorted numbers
    current=first;
    while(current!=NULL)
    {
        cout<<current->value<<endl;
		current=current->link;
    }


getch();

	}

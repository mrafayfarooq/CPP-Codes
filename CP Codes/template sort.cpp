/*Dynamic Allocating of Array using TEmplate
Author-k112257-M.Rafay Farooq*/
#include<iostream>
#include<conio.h>
using namespace std;
template <class dynamic>
void DynamicArray(dynamic *array,int size)
{
     array=new dynamic[size];
     for(int i=0;i<size;i++)
     {
             cin>>array[i];
             cout<<endl;
     }
     for(int i=0;i<size;i++)
     {
             cout<<array[i]<<endl;
     }
     

}
int main()
{
    int *a;
    float *b;
    double *c;
    
    cout<<"Please Input Size of array"<<endl;
    int size;
    cin>>size;
    DynamicArray(a,size);
    DynamicArray(b,size);
    DynamicArray(c,size);
   
    getch();
}

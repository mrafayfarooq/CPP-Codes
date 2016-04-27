/*Author:k11-2257-M.Rafay Farooq
Program Mechanism: Do a binary Search usign recursive function*/

#include<iostream>
#include<conio.h>
using namespace std;
void binary_search(int A[], int key, int length)
{
  	int min=0;
	int max=length-1;
	int mid=0;
	
  if (max < min)
    // set is empty, so return value showing not found
   cout<<"Not Found";
  else
    {
      // calculate midpoint to cut set in half
      int mid = (min + max) / 2;
 
      // three-way comparison
      if (A[mid] > key)
        // key is in lower subset
        return binary_search(A, key,length-1);
      else if (A[mid] < key)
        // key is in upper subset
        return binary_search(A, key, length+1);
      else
        // key has been found
        cout<<mid;
    }
}
int main()
{
	int array[15]={1,6,7,8,9,10,12,12,14,56,87,89,100};
	binary_search(array,1,15);
	getch();
	
}


#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] ={{2,3,4},{5,6,7},{0,2,3}};  //initilization and declaration of array

    //traversal
   for(int i=0; i<3; i++)
   {
       for(int j=0; j<3; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<"\n";
   }
}
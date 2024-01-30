#include<iostream>
using namespace std;
int main()
{
    int size; //variable declaration
    int *arr = new int(size);

    cout<<"Enter the size for an array : "<<endl;
    cin>>size;

    cout<<"\n\n Enter the elements of array : "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nThe elements you have entered are:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<",";
    }
    delete arr;
    return 0; 
}
#include<iostream>
using namespace std;
void printarray(int arr[5]);
int main()
{
    int arr1[5]= {10,20,30,40,50};
    int arr2[5]= {100,200,300,400,500};

    printarray(arr1);
    printarray(arr2);
}

void printarray(int arr[5])
{
    cout<<"priting array elements\n";

    for(int i=0; i<5; i++)
    {
        cout<< arr[i] << "\n";
    }
}
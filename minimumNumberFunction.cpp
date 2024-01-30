#include<iostream>
using namespace std;
void printmin(int arr[5]);
int main()
{
    int arr1[5] = {20,30,45,67,43};
    int arr2[5] = {34,12,45,565,67};

    printmin(arr1);
    printmin(arr2);
}

void printmin(int arr[5])
{
    int min = arr[0];

    for(int i=0; i<5; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"minimum value is : "<<min <<"\n";
}
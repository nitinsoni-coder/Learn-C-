#include<iostream>
using namespace std;
void printmax(int arr[5]);
int main()
{
    int arr1[5] = {20,30,45,67,43};
    int arr2[5] = {34,12,45,565,67};

    printmax(arr1);
    printmax(arr2);
}

void printmax(int arr[5])
{
    int max = arr[0];

    for(int i=0; i<5; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    cout<<"maximum value is : "<<max <<"\n";
}
#include<iostream>
using namespace std;

class Account
{
   public:
     int acco;
     string name;
     static float rateOfinterest;

     Account(int acco, string name)
     {
         this->acco =acco;
         this->name =name;
     }

    void display()
    {
        cout<<acco<<" "<<name<<" "<<rateOfinterest<<endl;
    }
};

float Account::rateOfinterest = 4.5;

int main(void)
{
    Account a1 =Account(101,"nitin");
    Account a2 =Account(102,"ishu");
    a1.display();
    a2.display();
    return 0;
}
#include<iostream>
using namespace std;
class Account{
    public:
    float salary = 600000;
};
class programmer : public Account{
    public:
      float bonus = 700000;
};

int main(void)
{
   programmer p1;
   cout<<"salary :"<<p1.salary<<endl;
   cout<<"bonus : " <<p1.bonus<<endl;
   return 0;
}
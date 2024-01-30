#include<iostream>
using namespace std;
int main()
{
    char *names[5] = {"nitin",
                      "sachin",
                      "dinesh",
                      "ishu",
                      "kirti"};

    for(int i=0; i<5; i++)
    {
        std::cout<< names[i]<<std::endl;
    }
    return 0;
}
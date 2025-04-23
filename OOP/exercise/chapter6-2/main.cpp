#include <iostream>
#include<string.h>
#include <conio.h>
using namespace std;
class tollBoth
{


   int totalCar;
   double totalMoney;

public:
    tollBoth()
    {
        totalMoney=0;
        totalCar=0;
    }
    void payingCar()
    {
        totalCar++;
        totalMoney+=0.50;
    }
    void noPayCar()
    {
        totalCar++;

    }
    void display()
    {
        cout<<totalCar<<endl;
        cout<<totalMoney<<endl;
    }
};
int main()
{
    tollBoth t;
   // t.display();
    char ch;
    while(1)
    {
        cin>>ch;
        if(ch=="exit")
        {
            t.display();
            break;
        }
        else if(ch=='p'||ch=='P')
        {
            t.payingCar();
        }
        else if(ch=='N'||ch=='n')
        {
            t.noPayCar();
        }
        else
        {
            cout<<"enter valid character";
        }

    }

    return 0;
}

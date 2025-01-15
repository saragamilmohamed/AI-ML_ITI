#include <iostream>

using namespace std;
class Date
{
    int day;
    int month;
    int year;
public:

    void getDate(){char s; cin>>day>>s>>month>>s>>year;}
    void display(){cout<<day<<"/"<<month<<"/"<<year;}


};

int main()
{
    Date d;
    d.getDate();
    d.display();

    return 0;
}

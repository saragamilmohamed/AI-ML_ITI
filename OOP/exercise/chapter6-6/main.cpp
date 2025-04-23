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
enum etype { laborer, secretary, manager, accountant, executive, researcher };

class Emp
{
    int salary;
    int Enumber;
    etype emptype;
    Date d;

public:
    void getemployee(){
        cout<<"enter enumber: "<<endl;
        cin>>Enumber;
        cout<<"enter salary: "<<endl;
        cin>>salary;
        cout<<"get date: "<<endl;
        d.getDate();
        cout<<"enter employee type : "<<endl;
        int type;
        cin>>type;
        emptype=static_cast<etype>(type);}
    void putemployee(){
        cout<<"Number of Employee : "<<Enumber<<" Salary : "<<salary<<" date  : ";
        d.display();
        cout<<" Employee Type: ";

        switch (emptype) {
            case laborer: cout << "Laborer"; break;
            case secretary: cout << "Secretary"; break;
            case manager: cout << "Manager"; break;
            case accountant: cout << "Accountant"; break;
            case executive: cout << "Executive"; break;
            case researcher: cout << "Researcher"; break;
        }
        cout<<endl;
        }
};

int main()
{
    Emp e[3];
    for(int i=0;i<3;i++)
    {
        e[i].getemployee();
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        e[i].putemployee();
        cout<<endl;
    }

    return 0;
}

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

class emp
{
    int id;
    int age;
    char name[30];
    int salary;
public :
    emp()
    {
      id=0;
      age=30;
      strcpy(name,"no name");
      salary=3000;
    }
    void setId(int _id)
    {
        id=_id;
    }
    int getId()
    {
        return id;
    }
    void setAge(int _age)
    {
        age=_age;
    }
    int getAge()
    {
        return age;
    }
    void setName(char *_name)
    {
        strcpy(name,_name);
    }
    char* getName()
    {
        return name;
    }

    void print()
    {
         cout<<"id : "<<getId()<<" age : "<<getAge()<<" name : "<<getName()<<endl;
    }
    emp(int _id,char _name[])
    {
        id =_id;
        strcpy(name,_name);
        age=30;
        salary=3000;
    }
    emp(int _id,char _name[],int _age)
     {
         id=_id;
         strcpy(name,_name);
         age=_age;
         salary=3000;
     }
    emp(int _id,char _name[],int _age,int _salary)
     {
         id=_id;
         strcpy(name,_name);
         age=_age;
         salary=_salary;
     }
  ~emp()
  {
      cout<<"\n deconstructor";
  }

};
int main()
{
    emp e;
  /*  int id_;
    int age_;
    char name_[30];

    cin>>id_>>age_>>name_;
    e.setId(id_);
    e.setAge(age_);
    e.setName(name_);*/
    e.print();
    emp e1(10,"sara");
    e1.print();
    emp e2(11,"ahmed",35);
    e2.print();
    emp e3(12,"sama",36,5000);
    e3.print();



}

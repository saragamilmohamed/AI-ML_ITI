#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

class emp
{
    int id;
    int age;
    char name[30];
public :
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





};
int main()
{
    emp e;
    int id_;
    int age_;
    char name_[30];

    cin>>id_>>age_>>name_;
    e.setId(id_);
    e.setAge(age_);
    e.setName(name_);

    cout<<"id : "<<e.getId()<<" age : "<<e.getAge()<<" name : "<<e.getName()<<endl;

}

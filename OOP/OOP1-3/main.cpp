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

    emp *ptr  =new emp;
    int id_;
    int age_;
    char name_[30];

    cin>>id_>>age_>>name_;
    ptr->setId(id_);
    ptr->setAge(age_);
    ptr->setName(name_);

    cout<<"id : "<<ptr->getId()<<" age : "<<ptr->getAge()<<" name : "<<ptr->getName()<<endl;

  delete ptr;
}

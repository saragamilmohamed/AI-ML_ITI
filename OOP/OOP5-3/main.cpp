#include <iostream>
#include<cstring>
using namespace std;
class String
{
    char *name;
    int size;

public:
    String()
    {
        size=10;

        name=new char[size];
    }
    String(int _size)
    {
        size=_size;

        name = new char[size];
    }
    String(char* _name)
    {
        int s=strlen(_name);
        size=s+10;
        name=new char[size];
        strcpy(name,_name);

    }
    void setName(char* _name)
    {
        if(strlen(_name)+1>size)
        {
            delete [] name;
            size=strlen(_name)+10;
            name=new char[size];
        }
        strcpy(name,_name);
    }
    char *getName()
    {
        return name;
    }
    void print()
    {
        cout<<getName()<<endl;
    }
    String (const String& s)
    {
        size=s.size;
        name=new char(size);
        name=s.name;
    }
    String operator=(String &s)
    {
        size=size;
        name=new char(size);
        strcpy(name,s.name);
        return *this;
    }
    String operator+( const String& s)const
    {

        int x=strlen(s.name)+strlen(name)+1;
        String res(x);
        strcpy(res.name,name);
        strcat(res.name," ");
        strcat(res.name,s.name);
        return res;
    }

    ~String()
    {
        delete [] name;
    }




};

int main()
{
    String s1("ahmed");
    s1.print();
    String s2("sara");
    s1=s2;
    s1.print();

    String s3("Sara");
    String s4("Gamil");
    String s5=s3+s4;
    s5.print();


}

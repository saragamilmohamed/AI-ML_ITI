#include <iostream>
#include <string.h>
using namespace std;
class String
{
protected:
    static const int size=80;
    char str[size];

public:
    String()
    {
        strcpy(str,"");
    }
    String(char* s)
    {
        strcpy(str, s);
        str[size-1]='\0';
    }
    void display()
    {
        cout<<str<<endl;
    }

};
class Pstring:public String
{
public:
    Pstring(char * _s):String()
    {
        if(strlen(_s)>=size)
        {
            strncpy(str, _s,size-1);
            str[size-1]='\0';
            cout<<"please enter string to fit buffer"<<endl;
        }
        else
        {
            strcpy(str,_s);
        }
    }

};
int main()
{
    Pstring shortString("saroooooooooooooooooooooooooo");
    Pstring longString(" This string will surely exceed the width of the screen, which is what the SZ constant represents.");

    cout << "Short string: ";
    shortString.display();

    cout << "Long string: ";
    longString.display();
    return 0;
}

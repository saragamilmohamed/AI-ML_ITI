#include <iostream>
#include <cstring>
using namespace std;

class Publication {
    char title[100];
    float price;

public:

    Publication(const char* _title, float _price) {
        price = _price;
        strcpy(title, _title);
    }


    Publication() : price(0.0) {
        strcpy(title, "");
    }


    void setTitle(const char* _title) { strcpy(title, _title); }
    void setPrice(float _price) { price = _price; }
    float getPrice() const { return price; }
    const char* getTitle() const { return title; }


    void publicDisplay() const { cout << "Title: " << title << ", Price: $" << price << " "; }
};
class Sales
{
    float arr[3];
public:
    void getData()
    {
        cout<<"enter sales for last three months"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"enter sales for month "<<i+1<<":";

            cin>>arr[i];
        }
    }
    void putData()
    {
        cout<<"sales for last three months"<<endl;
        for(int i=0;i<3;i++)
        {

            cout<<"month"<<(i+1)<<":$" <<arr[i]<< endl;
        }
    }

};

class Book : public Publication,public Sales {
    int page_count;

public:

    Book(const char* _title, float _price, int _page_count) : Publication(_title, _price) {
        page_count = _page_count;
    }


    void setPageCount(int _page_count) { page_count = _page_count; }
    int getPageCount()  { return page_count; }


    void bookDisplay() const {
        Publication::publicDisplay();
        cout << "Page Count: " << page_count << endl;

    }
};


class Tape : public Publication,public Sales {
    float time;

public:

    Tape(const char* _title, float _price, float _time) : Publication(_title, _price) {
        time = _time;
    }

    void setTime(float _time) { time = _time; }
    float getTime() const { return time; }


    void tapeDisplay() const {
        Publication::publicDisplay();
        cout << "Time: " << time << " minutes" << endl;
    }
};

class Disk:public Publication
{
    enum diskTypes{CD,DVD};
public:
    diskTypes type;
        Disk(const char* _title, float _price, char c) : Publication(_title, _price) {
        setType(c);
    }

    void setType(char c)
    {
        if (c=='c' ||c=='C')
        {
            type=CD;
        }
        else if (c=='d' ||c=='D')
        {
           type=DVD;
        }

    }
    diskTypes getType()
    {
        return type;
    }

    void diskDisplay() const {
        Publication::publicDisplay();
        cout << ", Disk Type:" <<(type==CD?"CD":"DVD")<< endl;
    }

};

int main() {
    char t[100];
    float p;
    int pc;
    float tt;


    cout << "Enter Book Title: ";

    cin>>t;
    cout << "Enter Book Price: ";
    cin >> p;
    cout << "Enter Page Count: ";
    cin >> pc;

    Book b(t, p, pc);
     b.getData();
    cout << "\nBook Details:"<<endl;
    b.bookDisplay();
    b.putData();

    cout << "\nEnter Tape Title: ";
    cin.ignore();
    cin.getline(t, 100);
    cout << "Enter Tape Price: ";
    cin >> p;
    cout << "Enter Time (in minutes): ";
    cin >> tt;

    Tape t1(t, p, tt);
    t1.getData();
    cout << "\nTape Details:"<<endl;
    t1.tapeDisplay();
    t1.putData();


    cout << "\nEnter Disk Title: ";
    cin.ignore();
    cin.getline(t, 100);
    cout << "Enter Disk Price: ";
    cin >> p;
    cout << "Enter Disk Type (c for CD, d for DVD): ";
    char diskTypeChar;
    cin >> diskTypeChar;

    Disk d(t, p, diskTypeChar);
    cout << "\nDisk Details:" << endl;
    d.diskDisplay();
    return 0;
}


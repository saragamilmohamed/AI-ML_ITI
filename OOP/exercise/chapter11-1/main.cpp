#include <iostream>
#include <cstring>
using namespace std;

class Publication {
    string title;
    float price;

public:

    Publication(string _title, float _price) {
        price = _price;
        title= _title;
    }


    Publication() {
        title= "";
        price=0.0;
    }


    void setTitle(string _title) { title= _title; }
    void setPrice(float _price) { price = _price; }
    float getPrice()  { return price; }
    string getTitle() { return title; }

        virtual void getData() {
        cout << "Enter title: ";
        cin>>title;
        cout << "Enter price: ";
        cin >> price;
    }

    virtual void putData() const {
        cout << "Title: " << title << ", Price: " << price << " ";
    }


    void publicDisplay() const { cout << "Title: " << title << ", Price:  " << price << " "; }
};


class Book : public Publication {
    int page_count;

public:

    Book(string  _title, float _price, int _page_count) : Publication(_title, _price) {
        page_count = _page_count;
    }
    Book():Publication()
    {
        page_count=0;
    }


    void setPageCount(int _page_count) { page_count = _page_count; }
    int getPageCount()  { return page_count; }

    void getData()  {
        Publication::getData();
        cout << "Enter page count: ";
        cin >> page_count;
    }

    void putData() {
        Publication::putData();
        cout << "Page Count: " << page_count << endl;
    }


    void bookDisplay() {
        Publication::publicDisplay();
        cout << "Page Count: " << page_count << endl;
    }
};


class Tape : public Publication {
    float time;

public:

    Tape(string _title, float _price, float _time) : Publication(_title, _price) {
        time = _time;
    }
    Tape():Publication()
    {
        time=0.0;
    }

    void setTime(float _time) { time = _time; }
    float getTime() const { return time; }


    void getData()  {
        Publication::getData();
        cout << "Enter Time: ";
        cin >> time;
    }

    void putData()  {
        Publication::putData();
        cout << "time: " << time << endl;
    }

    void tapeDisplay()  {
        Publication::publicDisplay();
        cout << "Time: " << time << " minutes" << endl;
    }
};

int main() {
   /* char t[100];
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
    cout << "\nBook Details:"<<endl;
    b.bookDisplay();


    cout << "\nEnter Tape Title: ";

    cout << "Enter Tape Price: ";
    cin >> p;
    cout << "Enter Time (in minutes): ";
    cin >> tt;

    Tape t1(t, p, tt);
    cout << "\nTape Details:"<<endl;
    t1.tapeDisplay();*/

    Publication *ptr[5];
    int counter=0;
     char con;
    do
    {
        cout<<"Enter choice book or tape enter b/B for book or T/t for tape"<<endl;
        char c;
        cin>>c;

        if(c=='b'||c=='b')
        {
            ptr[counter]=new Book();
            ptr[counter]->getData();
            counter++;

        }
        else if(c=='T'||c=='t')
        {
            ptr[counter]=new Tape();
            ptr[counter]->getData();
            counter++;
        }
        cout<< "if u still wanna enter press Y/y "<<endl;

        cin>>con;
    }
    while(con=='Y' ||con=='y'&& counter<5);

    for(int i=0;i<counter;i++)
    {
        ptr[i]->putData();
        cout<<endl;
    }
        for(int i=0;i<counter;i++)
    {
         delete ptr[i];
    }


    return 0;
}

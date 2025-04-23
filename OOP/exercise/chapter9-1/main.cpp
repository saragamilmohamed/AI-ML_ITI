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


class Book : public Publication {
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


class Tape : public Publication {
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
    cout << "\nBook Details:"<<endl;
    b.bookDisplay();


    cout << "\nEnter Tape Title: ";
    cin.ignore();
    cin.getline(t, 100);
    cout << "Enter Tape Price: ";
    cin >> p;
    cout << "Enter Time (in minutes): ";
    cin >> tt;

    Tape t1(t, p, tt);
    cout << "\nTape Details:"<<endl;
    t1.tapeDisplay();

    return 0;
}

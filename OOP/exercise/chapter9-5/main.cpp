#include <iostream>
#include <cstring>
using namespace std;

class Employee {
protected:
    int id;
    char name[30];

public:
    Employee() {
        id = 1;
        strcpy(name, "no name");
    }
    Employee(int _id, const char* _name) {
        id = _id;
        strcpy(name, _name);
    }
    void setID(int _id) {
        id = _id;
    }
    void setName(const char* _name) {
        strcpy(name, _name);
    }
    void displayEmp() const {
        cout << "Emp ID: " << id << " Name: " << name ;
    }
};

class Employee2 : public Employee {
protected:
    double compensation;
    enum period { hourly, weekly, monthly };

public:
    period per;
    Employee2(int _id, const char* _name, double comp, char c) : Employee(_id, _name) {
        compensation = comp;
        setPeriod(c);
    }
    void setPeriod(char c) {
        if (c == 'h' || c == 'H') {
            per = hourly;
        } else if (c == 'w' || c == 'W') {
            per = weekly;
        } else if (c == 'm' || c == 'M') {
            per = monthly;
        }
    }
    void displayEMP2() const {
        Employee::displayEmp();
        cout << " Compensation: " << compensation << " Period: "
             << (per == hourly ? "Hourly" : per == weekly ? "Weekly" : "Monthly") ;
    }
};

class Manager : public Employee2 {
    char mgrName[30];

public:
    Manager(int _id, const char* name, double comp, char c, const char* _mgrName) : Employee2(_id, name, comp, c) {
        strcpy(mgrName, _mgrName);
    }
    void setMgrName(const char* _mgrName) {
        strcpy(mgrName, _mgrName);
    }
    void displayManager() const {
        displayEMP2();
        cout << " Manager Name: " << mgrName << endl;
    }
};
class Scientist : public Employee2 {
    char scName[30];

public:
    Scientist(int _id, const char* name, double comp, char c, const char* _scName) : Employee2(_id, name, comp, c) {
        strcpy(scName, _scName);
    }
    void setScName(const char* _scName) {
        strcpy(scName, _scName);
    }
    void displayScientist() const {
        displayEMP2();
        cout << "Scientist Name: " << scName << endl;
    }
};
class Laborer: public Employee2 {
    char labName[30];

public:
    Laborer(int _id, const char* name, double comp, char c, const char* _labName) : Employee2(_id, name, comp, c) {
        strcpy(labName, _labName);
    }
    void setLabName(const char* _labName) {
        strcpy(labName, _labName);
    }
    void displayLaborer() const {
        displayEMP2();
        cout << "Laborer Name: " << labName << endl;
    }
};

int main() {
    Manager m(12345, "John Doe", 75000, 'M', "General Manager");
    m.displayManager();
    Scientist s(12345, "John Doe", 75000, 'S', "General Scientist");
    m.displayManager();
    Laborer L(12345, "John Doe", 75000, 'L', "General Laborer");
    m.displayManager();
    return 0;

}

#include<string>
#include<iostream>
using namespace std;

class Device {
private:
    string name;
    string model;
    string version;
protected:
    Device(string nameArg, string modelArg, string versionArg) :name{ nameArg }, model{ modelArg }, version{versionArg} {
        cout << "Device instantiated" << endl;
    }
    ~Device() {
        cout << "Device Destructed" << endl;
    }
};

class Printer :virtual public Device{
public:
    Printer():Device("", "", "") {
        cout << "Printer instantiated" << endl;
    }
    ~Printer() {
        cout << "Printer Destructed" << endl;
    }
    virtual void print(string content) {
        cout << "print" << content << endl;
    }
};

class Scanner: virtual public Device {
public:
    Scanner() :Device("", "", "") {
        cout << "Scanner instantiated" << endl;
    }
    ~Scanner() {
        cout << "Scanner Destructed" << endl;
    }
    virtual void scan(string content) {
        cout << "Scan" << content << endl;
    }
};

class PrintScanner :public Printer, public Scanner{
public:
    PrintScanner(string n, string m, string v) : Device{ n, m, v } {
        cout << "PrinterScanner Initiated" << endl;
    }
    ~PrintScanner(){
        cout << "Printer destructed" << endl;
    }
};

class TaskManager {
public: 
    void invokePrintTask(Printer* printPtr, string content) {
        printPtr->print(content);
    }
    void invokeScanTask(Scanner* scanPtr, string content) {
        scanPtr->scan(content);
    }
};

int main() {
    PrintScanner hpPrintScanner("","","");
    TaskManager taskMgr;
    taskMgr.invokePrintTask(&hpPrintScanner, "doc.pdf");
    taskMgr.invokeScanTask(&hpPrintScanner,  "doc.pdf");
    return 0;
}
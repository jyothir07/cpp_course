#include<iostream>
#include<string>
using namespace std;
void f1(string arg) {
    arg = "hello";
}
void f2(string *arg){
// void f2(const string *arg){
//void f2(const string* const arg) {
    //    &arg="hello";
     //   string temp = "sds";
       // arg=*temp;
}
void f3(string& arg) {
    arg = "ref hello";
}
int main() {
    string data = "hi";
    f1(data);
    cout << data << endl;
    f2(&data);
    cout << data << endl;
    f3(data);
    cout << data << endl;
}
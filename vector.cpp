#include<iostream>
using namespace std;

class IntVector {
    int items[4];
    int size;
public:
    IntVector() : size(0) {
        cout << "IntVector object is created." << endl;
    }

    ~IntVector() {
        cout << "IntVector object is destroyed." << endl;
    }

    void push_back(int item) {
        if (size < 4) {
            items[size] = item;
            size++;
        }
        else {
            cout << "Vector is full. Cannot push more items." << endl;
        }
    }

    int operator[](int index) {
        if (index >= 0 && index < size) {
            return items[index];
        }
        else {
            cout << "Index out of bounds." << endl;
            return -1;
        }
    }

    friend ostream& operator<<(ostream& os, const IntVector& v);
};

ostream& operator<<(ostream& os, const IntVector& v) {
    os << "[";
    for (int i = 0; i < v.size; i++) {
        os << v.items[i];
        if (i != v.size - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

int main() {
    IntVector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    int item = v[3];
    cout << item << endl;
    cout << v << endl;
}
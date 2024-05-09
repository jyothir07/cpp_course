#include <iostream>
#include <string>
using namespace std;

class A {
public:
	virtual void M1() { cout << "A.M1()" << endl; } 
	void M2() { cout << "A.M2()" << endl; }
	A() {
		cout << "Const A" << endl;
	}
	virtual ~A() {cout << "Dest A" << endl;	}
};
class B :public A {
public:
	void M1() override { cout << "B.M1()" << endl; }
	void M2() { cout << "B.M2()" << endl; }
	virtual void M3() { cout << "B.M3()" << endl; }
	void M4() { cout << "B.M4" << endl; }
	B() {
		cout << "Const B" << endl;
	}
	~B() {
		cout << "Dest B" << endl;
	}
};
class C :public B {
public:
	void M1() { cout << "C.M1()" << endl; }
	void M3() override { cout << "C.M3()" << endl; }
	void M4() { cout << "C.M4()" << endl; }
	C() {
		cout << "Const C" << endl;
	}
	~C() {
		cout << "Dest C" << endl;
	}
};
int main() {
	A aObj;
	B bObj;
	C cObj;

	A* aPtr = &aObj;
	aPtr = &bObj;
	aPtr = &cObj;
	/*aPtr->M1(); // virtual call
	aPtr->M2(); // not virt

	B bObj;
	B* bPtr = &bObj;
	bPtr->M1(); // virtual
	bPtr->M2(); // not
	bPtr->M3(); // virt
	bPtr->M4(); // not

	aPtr = &bObj; // bcz b sub class of a
	aPtr->M1(); // vir
	aPtr->M2(); //non

	C cObj;
	cObj.M1(); // vir
	cObj.M2(); // non
	cObj.M3(); // vir
	cObj.M4(); //non

	aPtr = &cObj;
	aPtr->M1(); // vir
	aPtr->M2(); // non

	bPtr = &cObj;
	bPtr->M1(); // vir
	bPtr->M2(); // non
	bPtr->M3(); // vir
	bPtr->M4(); // non
	*/
}

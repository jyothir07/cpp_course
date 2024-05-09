#include <string>
using namespace std;

class Parent {
public:
	Parent() {
		cout << "Parent" << endl;
		p = 300;
	}
};
class Child :public Parent {
	int c;
	public:
	Child() : Parent() {
		cout << "Child" << endl;
		c = 100;
	}
};
class GrandChild :public Child {
	int gc;
public:
	GrandChild() :Child() {
		cout << "GrandChild" << endl;
	}
};
#include<string>
#include<iostream>
using namespace std;

class TextBox {
public:
	virtual void accept(string text) {
		cout << "base class" << endl;

	}
};

class NumericTextBox : public TextBox {
public:
	void accept(string text) override {
		cout << "Numeric class" << endl;
	}

};

class MaskedTextBox : public TextBox {
public:
	void accept(string text) override {
		cout << "Masked text class" << endl;
	}

};

int main()
{
	// 	TextBox nameTextBox;
	// 	nameTextBox.accept("Tom");
	NumericTextBox ageTextBox;
	// 	ageTextBox.accept("25");
	TextBox* basePtr = &ageTextBox;
	basePtr->accept("35");
	MaskedTextBox phoneNumberTextBox;
	basePtr = &phoneNumberTextBox;

	basePtr->accept("+91-123456789");
}
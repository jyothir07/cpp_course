#include <string>
using namespace std;
class Customer {
private:
	string name, address, pan, adhar, emailId, contactNumber;
	
public:
	Customer(string nameArg,
		string addressArg,
		string panArg,
		string adharArg
	) : name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg }{
		// this->name = nameArg;// avoid
	}
	Customer(string nameArg,
		string addressArg,
		string panArg,
		string adharArg,
		string phoneNuberArg
	) : name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg }, contactNumber{ phoneNuberArg }{
		// this->name = nameArg;// avoid
	}
	Customer(string nameArg,
		string addressArg,
		string panArg,
		string adharArg,
		string emailArg
	) : name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg }, emailId{ emailArg }{
		// this->name = nameArg;// avoid
	}
	Customer(string nameArg,
		string addressArg,
		string panArg,
		string adharArg,
		string phoneNuberArg,
		string emailArg
	) : name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg }, contactNumber{ phoneNuberArg }, emailId{emailArg}{
		// this->name = nameArg;// avoid
	}

};

int main() {
    Customer customerObj1{ "tom", "BLR", "ajsnkdn", "12343423412" };
    Customer customerObj2{ "tom", "BLR", "ajsnkdn", "12343423412", "94955858456"};
    Customer customerObj3{ "tom", "BLR", "ajsnkdn", "12343423412", "tgu@hml.com"};

    return 0;
}
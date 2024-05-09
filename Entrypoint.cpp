#include <string>
using namespace std;

class LocationModel {
private:
	std::string name;
	float coOrdnates;
public:
	static void dumpConvertor() {}

	string getName() {
		return this->name;
	
	}
	void setName(string value) {
		// this -> name = value
		this->name = value;
	}
};
class Converter {
public:
	void Convert(std::string filePath) {
		//logic
		//read csv
		//split each line wrt ,
		//represent line content
		// validate line
		// creat xml node
		// update xml
		// save xml
	}
};
int main() {
	// stack  objects
	// user defined data type
	LocationModel obj;
	obj.setName("BLR"); //location model::setName(&obj,
	obj.getName();
	//heap allocation
	LocationModel* ptr = new LocationModel();
	// pointer in stack
	ptr->setName("DEL");
	name = ptr->getName();
	return 0;

};
#include <string>
using namespace std;

class Laptop {
private:
	string modelName, color;
	string serialNumber;
	float weight;
	string hostOsType;
	int storageCapacity;

};

//compile time relationship or static relationship
class HPLaptop:public Laptop
{
};
class ZeLaptop
{
private:

};
class LenovoLaptop
{
private:
};

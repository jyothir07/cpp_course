class IEmployee{
public:
	//interface
	virtual void professional() = 0;

};
class IFamilyMember{
public:
	//interface
	virtual void casual() = 0;
	virtual void cranky() = 0;

};

//person fulfills(implements) IEmployee Contract
class Person {
	//default interface of the object
public:
	void casualBehavior() {}
	void professional() {}
	void cranky() {}
};

class officeContext {
public:
	void Enter(Person* obj) {
		obj->cranky();
		obj->casualBehavior();
		obj->professional();
	}
};

class familyContext {
public:
	void Enter(Person* obj) {
		obj->cranky();
		obj->casualBehavior();
		obj->professional();
	}
};

int main() {
	Person tom;
	familyContext fContext;
	officeContext oContext;
	fContext.Enter(obj:&tom);
	fContext.Enter(obj:&tom);
	Person harry;
	fContext.Enter(obj:&harry);
	fContext.Enter(obj:&harry);
}


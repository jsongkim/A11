#ifndef PROFESSORTYPE_H
#define PROFESSORTYPE_H

#include <iostream>
#include <string>
using namespace std;

class professorType : private personType{
	private:
	string employeeID;
	string department;
	string degree;

	public:
   //constructors
   professorType();
   //       fName, lName//
   professorType(string fName, string lName);
   // fName, lName, GPA, classification, id //
   professorType(string fName, string lName, string address, double height, string dob, char gender, string employeeID, string department, string degree);
   //setters
   void setEmployeeID(string);
   void setDepartment(string);
   void setDegree(string);
   //getters
   string getEmployeeID() const;
   string getDepartment() const;
   string getDegree() const;
   //overridden methods
   void print()  const; //override the parents' print method
   bool equals(const professorType &) const;

};

professorType::professorType() : personType(), employeeID(""), department(""), degree("") {}

professorType::professorType(string fName, string lName) : personType(fName, lName), employeeID(""), department(""), degree("") {}

professorType::professorType(string fName, string lName, string address, double height, string dob, char gender, string employeeID, string department, string degree) : personType(fName, lName, address, height, dob, gender), employeeID(employeeID), department(department), degree(degree) {}

// Setters
void professorType::setEmployeeID(string employeeID){
	this->employeeID = employeeID;
}
void professorType::setDepartment(string department){
	this->department = department;
}
void professorType::setDegree(string degree){
	this->degree = degree;
}

// Getters
string professorType::getEmployeeID() const{
	return employeeID;
}
string professorType::getDepartment() const{
	return department;
}
string professorType::getDegree() const{
	return degree;
}

void professorType::print() const {
	personType::print();
	cout << "Employee ID: " << employeeID << endl;
	cout << "Department: " << department << endl;
	cout << "Degree: " << degree << endl;
}

bool professorType::equals(const professorType &other) const {
	return (personType::equals(other) && (employeeID == other.employeeID) && (department == other.department) && (degree == other.degree));
}


#endif

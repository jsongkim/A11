#ifndef STUDENTTYPE_H
#define STUDENTTYPE_H

#include <iostream>
#include <string>
using namespace std;

class studentType : public personType{
	private:
	double gpa;
	string id;
	string classification;


	public:
   //constructors
   studentType();
   //       fName, lName//
   studentType(string fName, string lName);
   // fName, lName, GPA, classification, id //
   studentType(string fName, string lName, double gpa, string id, string classification);
   //setters
   void setGPA(double);
   void setID(string);
   void setClassification(string);
   //getters
   double getGPA() const;
   string getID() const;
   string getClassification() const;
   //overridden methods
   void print()  const; //override the parents' print method
   bool equals(const studentType &) const;

};

studentType::studentType() : personType(), gpa(0.0), id(""), classification("") {}

studentType::studentType(string fName, string lName) : personType(fName, lName), gpa(0.0), id(""), classification("") {}

studentType::studentType(string fName, string lName, double gpa, string id, string classification) : personType(fName, lName), gpa(gpa), id(id), classification(classification) {}


// Setters
void studentType::setGPA(double gpa){
	this->gpa = gpa;
}
void studentType::setID(string id){
	this->id = id;
}
void studentType::setClassification(string classification){
	this->classification = classification;
}

// Getters
double studentType::getGPA() const{
	return gpa;
}
string studentType::getID() const{
	return id;
}
string studentType::getClassification() const{
	return classification;
}

void studentType::print() const {
	personType::print();
	cout << "GPA: " << gpa << endl;
	cout << "ID: " << id << endl;
	cout << "Classification: " << classification << endl;
}

bool studentType::equals(const studentType &other) const {
	return (personType::equals(other) && (id ==other.id) && (gpa == other.gpa) && (classification == other.classification));
}


#endif

#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <iostream>
#include <string>
#include "personType.h"
using namespace std;

class personType {
	private:
   string fName;
   string lName;
   string address;
   double height;
   string dob;
   char gender;

	public:
   // Constructors
   personType();
	personType(string fName, string lName);
   personType(string fName, string lName, string address, double height, string dob, char gender);
   // Setters
   void setFName(string fName);
   void setLName(string lName);
   void setAddress(string address);
   void setHeight(double height);
   void setDOB(string dob);
   void setGender(char gender);
   // Getters
   string getFName() const;
   string getLName() const;
   string getAddress() const;
   double getHeight() const;
   string getDOB() const;
   char getGender() const;
   // Utility methods
   void print() const;
   bool equals(const personType& other) const;
};

personType::personType() : fName(""), lName(""), address(""), height(0.0), dob(""), gender('U') {}

// Parameterized constructor using only first and last name
personType::personType(string fName, string lName) {
    this->fName = fName;
    this->lName = lName;
	 this->address = "";
    this->height = 0.0;
    this->dob = "";
    this->gender = 'U';
}


// Parameterized constructor
personType::personType(string fName, string lName, string address, double height, string dob, char gender) {
    this->fName = fName;
    this->lName = lName;
    this->address = address;
    this->height = height;
    this->dob = dob;
    this->gender = gender;
}

// Setters
void personType::setFName(string fName) { this->fName = fName; }
void personType::setLName(string lName) { this->lName = lName; }
void personType::setAddress(string address) { this->address = address; }
void personType::setHeight(double height) { this->height = height; }
void personType::setDOB(string dob) { this->dob = dob; }
void personType::setGender(char gender) { this->gender = gender; }

// Getters
string personType::getFName() const { return fName; }
string personType::getLName() const { return lName; }
string personType::getAddress() const { return address; }
double personType::getHeight() const { return height; }
string personType::getDOB() const { return dob; }
char personType::getGender() const { return gender; }

// Print function
void personType::print() const {
    cout << "Name: " << fName << " " << lName << endl;
    cout << "Address: " << address << endl;
    cout << "Height: " << height << " inches" << endl;
    cout << "DOB: " << dob << endl;
    cout << "Gender: " << gender << endl;
    cout << "-----------------------------" << endl;
}

// Equals function
bool personType::equals(const personType& other) const {
    return (fName == other.fName &&
            lName == other.lName &&
            address == other.address &&
            height == other.height &&
            dob == other.dob &&
            gender == other.gender);
}

#endif

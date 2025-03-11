#include "personType.h"
#include "studentType.h"
#include "professorType.h"

// Notes for David and Kyle:
// The object creation is meant for the A11 assignment. If you are using this code for A8, A9, etc., it asks you to create different objects.
// Check the homework guidelines if you are going to use this code. 

int main(){

	 // Declaring one person
	 personType person1("John", "Doe", "123 Missionary St", 72.5, "09/15/2000", 'M');

	 // Declaring two students
	 studentType student1("Joseph", "Trebuchet", 3.6, "90239", "Student");
	 studentType student2("Jaden", "Catapult", 3.7, "90240", "Student");

	 // Delcaring two professors
	 professorType professor1("Haley", "River", "456 Cardinal St", 70.5, "09/09/2009", 'F', "0001", "Mathematics", "Electrical Engineering");
	 professorType professor2("Hailey", "Stream", "789 Pope St", 71.5, "08/08/2008", 'M', "0002", "Computer Science", "Aerospace Engineering");

    	// Printing all five individuals
    	cout << "Printing all five people:" << endl;
    	person1.print();
	cout << endl;
	student1.print();
	cout << endl;
	student2.print();
	cout << endl;
	professor1.print();
	cout << endl;
	professor2.print();
	cout << endl;

	// Checks  if the objects are equal.
	if(professor1.equals(professor2) == true){
		cout << "The two professors are the same." << endl;
	}
	else{
		cout << "The two professors are not the same." << endl;
	}

    return 0;


}

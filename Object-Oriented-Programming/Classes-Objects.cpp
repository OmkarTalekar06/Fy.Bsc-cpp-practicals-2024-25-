#include<iostream>
using namespace std;

// This is programme with class and Objects...

class Teacher{
	private:      			// This is an acess Specifier it has three types Public, Private, Protected...
	
		double salary;  
	
	public:				   // This is Public acess Specifier..
		
		string Name;	   // They are Input variables... 
		int age;
		string Sub;			
		
		void giveName(){		// This is an Function inside a class... 
			cout<<" Name is : "<<Name<<endl;
		}
		
		void giveAge(){
			cout<<" Age is : "<<age<<endl;
		}
		
		void giveSubject(){
			cout<<" Teaching Subject : "<<Sub<<endl;
		}
		
		Teacher(){			// This is Constructor for Initialization of Private variable
			salary = 15000;
		}
		
		void giveSalary(){		//Function Bypassing Private acess modifier
		
		// Giving Default Salary
			cout<<" Salary : "<<salary<<endl;
		}
		
		
};
int main(){
	
	
	// Declaring Name to class
	
	Teacher t1;
	
	// Declaring Values to Variables
	
	t1.Name = "Ashish";
	t1.age = 32;
	t1.Sub = "Science";
	
	// Printing Details
	
	t1.giveName();
	t1.giveAge();
	t1.giveSubject();
	t1.giveSalary();
	
	return 0;
}

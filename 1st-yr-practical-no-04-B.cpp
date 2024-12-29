#include<iostream>
using namespace std;

//  Illustration of Multiple Inheritance

class Person{
	public:
		void showPersoninfo(){
			cout<<"Name : Azad Shaikh."<<endl;
			cout<<"Age : 29."<<endl;
		}
};

class Academic{
	public:
		void showAcademicinfo(){
			cout<<"Course : Computer Science"<<endl;
			cout<<"Year : 2nd Yr"<<endl;
		}
};

class Student : public Person , public Academic{
	public:
	
	void showInfo(){
		cout<<"Student Id : 12345"<<endl;
		
	}
}; 

int main(){
	
	Student s1;
	s1.showPersoninfo();
	s1.showAcademicinfo();
	
	return 0;
}

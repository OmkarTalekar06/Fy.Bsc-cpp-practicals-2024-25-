#include<iostream>
#include<string>
using namespace std;

//Programme using classes and object

class student{
	private:
		string name;
		int roll_no;
		
	public:
		
		void setDetails(string n,int r){
			name = n;
			roll_no = r;
		}
		
		void displayDetails(){
			cout<<"Student Name: "<<name<<endl;
			cout<<"Roll Number: "<<roll_no<<endl;
		}
};

int main(){
	
	student s1;
	
	s1.setDetails("Aryan",01);
	s1.displayDetails();
	
	return 0;
}

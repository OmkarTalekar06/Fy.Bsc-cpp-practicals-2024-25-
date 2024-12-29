#include<iostream>
using namespace std;

// Illustration of Single Inheritance

class Vehicle{
	public:
		void startEngine(){
			
		cout<<"The Engine is Started."<<endl;
		
		}
};

class car : public Vehicle{
	public:
	void drive(){
		cout<<"The car is ready to Drive. "<<endl;
	}
};

int main(){
	
	car myCar;
	myCar.startEngine();
	myCar.drive();
	
	return 0;
}

#include<iostream>
using namespace std;

// Illustration of Multi-Level Inheritnce

class Appliance{
	public:
		void turnOn(){
			cout<<"Appliance is now on."<<endl;
		}
};

class washingMachine : public Appliance{
	public:
	void start(){
		cout<<"The Machine is now Washing."<<endl;
	}
};

class smartWashing : public washingMachine{
	public:
	void connect(){
		cout<<"Connected to Wi-Fi"<<endl;
	}
};

int main(){
	
	smartWashing a1;
	a1.turnOn();
	a1.connect();
	a1.start();
}

#include<iostream>
using namespace std;

// Illustration of Hierarchieal Inheritnce

class Shape{
	public:
	void displayShape(){
		cout<<"This is a Shape. "<<endl;
	}
};

class Circle : public Shape{
	public:
		void circle(){
			cout<<"This is a Circle. "<<endl;
		}
};

class Rectrangle : public Shape{
	public:
		void rectrangle(){
			cout<<"This is a Rectrangle. "<<endl;
		}
};

int main(){
	Circle c1;
	c1.displayShape();
	c1.circle();
	
	Rectrangle r1;
	r1.displayShape();
	r1.rectrangle();
	
	return 0;
}

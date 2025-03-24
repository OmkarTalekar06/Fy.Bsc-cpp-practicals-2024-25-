#include <iostream> // corrected the include directive
using namespace std;

//adding of two complex nos using class complex

class Complex{
	private:
		float real,img;
		
	public:
	
	Complex(float r=0,float i=0) : real(r), img(i) {}
	
	Complex add(const Complex &c){ // corrected the parameter type
		return Complex(real+c.real,img+c.img);
	}
	
	void display() const {
		cout<<real<<" + "<<img<<"i"<<endl;
	}
};

int main(){
	Complex c1(2.3,4.5),c2(1.2,3.4);
	Complex sum = c1.add(c2);
	
	cout<<"Sum of complex numbers :";
	sum.display();
	
	return 0;
}

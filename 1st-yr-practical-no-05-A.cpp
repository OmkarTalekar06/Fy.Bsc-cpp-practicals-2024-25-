#include<iostream>
using namespace std;

//friend function for adding two complex numbers

class complex{
	private:
		double real;
		double img;
		
	public:
		complex(double r =0.0,double i=0.0){
			real =r;
			img=i;
		}
		friend complex addComplex(complex c1,complex c2){
			return complex(c1.real+c2.real,c1.img+c2.img);
		}
		void display(){
			cout<<real<<" + "<<img<<"i"<<endl;
		}
};

int main(){
	complex c1(3.0,4.0);
	complex c2(2.0,1.0);
	
	cout<<"Complex number 1:"<<endl;
	c1.display();
	
	cout<<"Complex number 2:"<<endl;
	c2.display();
	
	complex sum = addComplex(c1,c2);
	
	cout<<"Sum of the Complex number is:"<<endl;
	sum.display();
	
	return 0;
}

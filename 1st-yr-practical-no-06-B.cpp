#include<iostream>
using namespace std;

//create a class geometry() containing method area(), volume() and also overload them

class Geometry{
	public:
		double area(double side){
			return side*side;
		}
		
		double area(double length, double width){
			return length * width;
		}
		
		double volume(double side){
			return side * side * side;
		}
		
		double volume(double length, double width, double height){
			return length * width * height;
		}
};

int main(){
	
	Geometry g;
	
	cout<<"Area of Square : "<<g.area(5.0)<<endl;
	cout<<"Area of Rectangle :"<<g.area(5.0,10.0)<<endl;
	cout<<"Volume of Square :"<<g.volume(3.0)<<endl;
	cout<<"Volume of Rectangle :"<<g.volume(3.0,4.0,5.0)<<endl;
	
	return 0;
}

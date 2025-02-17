#include<iostream>
using namespace std;

//friend function for adding two different distances

class Distance2;

class Distance1{
	private:
		int meters;
		int centimeters;
		
	public:
		Distance1(int m, int cm) : meters(m), centimeters(cm) {}
		
		friend void addDistances(const Distance1 &d1, const Distance2 &d2);
		
};
class Distance2{
	private:
		int meters;
		int centimeters;
		
	public:
		Distance2(int m, int cm) : meters(m), centimeters(cm) {}
		
		friend void addDistances(const Distance1 &d1, const Distance2 &d2);
};

void addDistances(const Distance1 &d1, const Distance2 &d2){
	int tmeters= d1.meters + d2.meters;
	int tcentimeters = d1.centimeters+d2.centimeters;
	tmeters += tcentimeters / 100;
	tcentimeters %= 100;
	cout<<"Sum of Distances :"<<tmeters<<" meters & "<<tcentimeters<<" Centimeters."<<endl;
}

int main(){
	Distance1 d1(3,50);
	Distance2 d2(2,75);
	
	addDistances(d1,d2);
	
	return 0;
}

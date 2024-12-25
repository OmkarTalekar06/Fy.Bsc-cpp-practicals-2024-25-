#include<iostream>
using namespace std;

//Value of a square,cone and rectrangle

int main(){
	float pi = 3.14;
	float s,r,h,w,l,vol;
	
	//Volume of a square
	cout<<"Volume of Square"<<endl;
	cout<<"Enter the value of sides: ";
	cin>>s;
	vol = s * s * s;
	cout<<"The Volume of Square is = "<<vol<<endl;

	
	//Volume of Cone
	cout<<"Volume of Cone"<<endl;
	cout<<"Enter the values of: ";
	cout<<"Radius = ";
	cin>>r;
	cout<<"Height = ";
	cin>>h;
	vol = pi * r * r * h / 3;
	cout<<"The Volume of Cone is = "<<vol<<endl;
	
	//Volume of Rectrangle
	cout<<"Volume of Rectrangle"<<endl;
	cout<<"Enter the values of: ";
	cout<<"Length = ";
	cin>>l;
	cout<<"Height = ";
	cin>>h;
	cout<<"width = ";
	cin>>w;
	vol = h * w * l;
	cout<<"The Volume of Rectrangle is = "<<vol<<endl;
	
	return 0;
}


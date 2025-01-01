#include<iostream>
using namespace std;

// Constructors and Destructors 

class Test{
	public:
	
	/* 
	This is an Constructor...
	   It has 3 types..
	   1.Default Constructor.
	   2.Parameterized Constructor.
	   3.Copy Constructor (not mentioned here).
	*/
	
	// Default Constructor...
	Test(){
		cout<<"This is an Constructor..."<<endl;
	}
	
	// Default Destructor...
	~Test(){
		cout<<"This is an Destructor..."<<endl;
	}
};

// Parameterized Constructor.

class addit{
	
	public:
	
	addit(int a,int b){
		cout<<" Sum of two Numbers : "<<a+b<<endl;
	}
};
int main(){
	
	// Test Class
	Test t1;
	
	//addit Class
	addit(5,4);
	
	return 0;
	
}

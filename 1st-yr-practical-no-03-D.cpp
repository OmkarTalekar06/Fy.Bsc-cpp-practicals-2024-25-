#include<iostream>
using namespace std;

// Demonstrate Function defination outside class
class Test{
	private:
		int num;
		
	public:
		void setNumber(int n);
		void showNumber();
};

void Test :: setNumber(int n){
	num = n; 
} 

void Test :: showNumber(){
	cout<<"The Number is: "<<num<<endl;
}
int main(){
	Test t;
	t.setNumber(25);
	t.showNumber();
	
	return 0;
}

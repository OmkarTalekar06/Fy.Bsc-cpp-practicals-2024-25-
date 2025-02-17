#include<iostream>
using namespace std;

//finding max of 2 numbers using friend f(x)

class Number1;
class Number2;

class Number1{
	private:
		int value;
		
	public:
		Number1(int val) : value(val) {}
		
	friend int findmax(const Number1 &n1, const Number2 &n2);
};

class Number2{
	private:
		int value;
		
	public:
		Number2(int val) : value(val) {}
		
		friend int findmax(const Number1 &n1, const Number2 &n2);
};

int findmax(const Number1 &n1, const Number2 &n2){
	if(n1.value > n2.value){
		return n1.value;
	}else{
		return n2.value;
	}
}

int main(){
	
	Number1 num1(43);
	Number2 num2(34);
	
	int max= findmax(num1,num2);
	
	cout<<"The Maximum of two number is :"<<max<<endl;
	
	return 0;
}

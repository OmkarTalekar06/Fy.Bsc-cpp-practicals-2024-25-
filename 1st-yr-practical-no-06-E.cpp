#include<iostream>
using namespace std;

//programme to generate fibonacci series using constructor

class fibonacci{
	private:
		int n;
		
	public:
		fibonacci(int num) : n(num){}
		
		void generateSeries(){
			int a=0, b=1, next;
			cout<<"Fibonacci series : "<<a<<" "<<b;
			
			for(int i=2;i<n;i++){
				next = a + b;
				cout<<" "<<next;
				a=b;
				b=next;
			}
			cout<<endl;
		}
};

int main(){
	int terms;
	cout<<"Enter the nos for series : ";
	cin>>terms;
	
	fibonacci fib(terms);
	fib.generateSeries();
	
	return 0;
}

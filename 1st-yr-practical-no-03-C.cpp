#include<iostream>
#include<cmath>
#include<string>
using namespace std;

// CLass Demo which contain 1.Readno(). 2.Factorial(). 3.Reverse(). 4.isPalindrome(). 5.isArmstrong(). where Readno() is Private: process

class Demo{
	
	private:
		int number;
		
		void Readno(){
			cout<<"Enter a number: ";
			cin>>number;
			
			
		}
	
	public:
		
		void Factorial(){
			Readno();
			int fact=1;
			for(int i=1;i<=number;++i){
				fact = fact * i;
			}
			cout<<"The Factorial of "<<number<<" is "<<fact<<endl;
		}
		
		void Reverse(){
			Readno();
			int reversed = 0 , temp = number;
			while (temp != 0){
				reversed = reversed * 10 +  (temp % 10);
				temp = temp / 10;
			}
			cout<<"The Reversed Number is"<<reversed<<endl;
		}
		
		void isPalindrome(){
			Readno();
			int reversed = 0 , temp = number;
			while (temp != 0){
				reversed = reversed * 10 +  (temp % 10);
				temp = temp / 10;
			}
			cout<<"The Reversed Number is"<<reversed<<endl;
			if( number == reversed){
				cout<<"The Number is a Palindrome. "<<endl;
			}
			else{
				cout<<"The Number is not a Palindrome. "<<endl;
			}
		}
		
		void isArmstrong(){
			Readno();
			int sum = 0, temp = number, digits = 0;
			
			while(temp != 0){
				digits++;
				temp = temp / 10;
			}
			
			temp = number;
			sum =0;
			while( temp != 0){
				int digit = temp % 10;
				sum += pow(digit, digits);
				temp = temp / 10;
			}
			if( sum == number){
				cout<<"The Number is an Armstrong Number."<<endl;
			}
			else{
				cout<<"The Number is not an Armstrong Number."<<endl;
			}
		}
		
};
int main(){
	Demo d1;
	
	d1.Factorial();
	d1.Reverse();
	d1.isPalindrome();
	d1.isArmstrong();
	
	return 0;
}

#include<iostream>
using namespace std;

//Find the prime numbers between 1 and n

bool isPrime(int num){
	if(num <= 1){
		return false;
	}
	for(int i=2;i*i<=num;++i){
		if(num%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	
	int n;
	
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"The prime numbers between 1 and "<<n<<" are ";
	
	for(int i=2;i<=n;++i){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
cout<<endl;

return 0;
}

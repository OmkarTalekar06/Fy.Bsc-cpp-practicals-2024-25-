#include<iostream>
#include<string>
using namespace std;

//Structure for bank employee to print name,account number,bank balance,deposit,withdrawl

class bank_emp{
	private:
		string name;
		int acc_no;
		double bank_balance,amount;
		
		
	public:
		
		void emp(string n,int acc,double bal){
			name = n;
			acc_no =acc;
			bank_balance = bal;
		}
		
		void displayDetails(){
			cout<<"Employee: "<<name<<endl;
			cout<<"Account no.: "<<acc_no<<endl;
			cout<<"Bank Balance: "<<bank_balance<<endl;
		}
		
		void deposit(double amount){
			bank_balance = bank_balance + amount;
			cout<<"Deposited: "<<amount<<endl;
			cout<<"Balance: "<<bank_balance<<endl;
		}
		
		void withdrawl(double amount){
		    
		    if(amount > bank_balance){
		    	cout<<"Insufficient Balance!"<<endl;
			}
			else{
					bank_balance = bank_balance - amount;
					cout<<"Withdrawn: "<<amount<<endl;
					cout<<"Balance: "<<bank_balance<<endl;
			}
			
		}
};

int main(){
	
	bank_emp e1;
	
	e1.emp("Ajay",1010,25000);
	e1.displayDetails();
	e1.deposit(5000);
	e1.withdrawl(2000);
	
	return 0;
}

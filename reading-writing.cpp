#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string data;
	
	ofstream outfile;
	outfile.open("afile.txt");
	
	cout<<"Writing to your file" << endl;
	cout<<"Enter your name"<<endl;
	 
	getline(cin, data);
	
	outfile<<data<<endl;
	outfile.close();
	
	ifstream infile;
	infile.open("afile.txt");
	
	cout<<"Reading from the file"<<endl;
	while(getline(infile, data)
	){
	cout<< data <<endl;
	}
	
	
	
	infile.close();
	return 0;
}

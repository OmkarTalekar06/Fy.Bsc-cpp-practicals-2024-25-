#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include<unordered_map>
using namespace std;

void write_l(){
	string data;
	
	ofstream outfile;
	outfile.open("afile.txt");
	   if (!outfile) {  // File error handling
        cerr << "Error opening file!" << endl;
        return;
    }
	cin.ignore();
	getline(cin, data);
	outfile<<data<<endl;
	outfile.close();
	
}

void read_l(){
	string data;
	
	ifstream infile;
	infile.open("afile.txt");
	while(getline(infile, data)){
		cout<<data<<endl;
	}
	infile.close();
}
void tim(){
time_t now = time(0);
tm *ti = localtime(&now);
cout<<"Time : "<<ti->tm_hour<<":"<<ti->tm_min<<endl;
}
int main(){
	unordered_map<string, int> menu = {
	{"-write", 1},
	{"-read", 2},
	{" ", 3}
	};
	string i;
	cout<<"Please enter the option for working with files"<<endl;
	cout<<" -write for writing\n -read for Reading "<<endl;
	cin>>i;
	switch(menu[i]){
		case 1:
			tim();
			cout<<"You have opened file and can start writeing"<<endl;
			cout<<endl;
			write_l();
			break;
		case 2:
			tim();
			cout<<"This file says :"<<endl;
			cout<<endl;
			read_l();
			break;
		default:
			cout<<"invalid"<<endl;
	}
}

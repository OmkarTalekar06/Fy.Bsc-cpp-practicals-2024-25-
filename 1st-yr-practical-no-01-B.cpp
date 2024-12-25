#include<iostream>
using namespace std;


//This is a programme to convert seconds int hrs and hrs into mins
int main(){
	//For secs in hrs
	float hrs,total;
	
	//For mins in secs
	int mins,secs;
	
	//Hours into seconds
	cout<<"Enter Time in seconds:"<<endl;
	cin>>total;
	hrs = total / 3600;
	cout<<"Conversion of hours into seconds is:"<<hrs<<" Hours"<<endl;
	
	//Minutes into Seconds
	cout<<"Enter Time in Minutes"<<endl;
	cin>>mins;
	secs = mins * 60;
	cout<<"Conversion of Minutes into Seconds is:"<<secs<<" Seconds"<<endl;
	
	return 0;
}

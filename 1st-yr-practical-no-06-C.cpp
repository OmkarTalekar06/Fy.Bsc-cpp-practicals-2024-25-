#include<iostream>
using namespace std;

//implimentation of static void and static functions

class staticDemo{
	private:
		static int count;
		
		public:
			
		staticDemo(){
			count++;
		}
		static void showCount(){
			cout<<"Number of objects created : "<<count<<endl;
		}
};

int staticDemo :: count=0;

int main(){
	staticDemo obj1,obj2,obj3;
	staticDemo :: showCount();
	return 0;
}

#include<iostream>
#include<cstdlib>
using namespace std;

//programme to overload new/delete operators in a class

class Demo{
	private:
		int value;
		
	public:
		
		Demo(int v) : value(v){
			cout<<"Constructor is called for the value :"<<value<<endl;
		}
		
		~Demo() { 
			cout<<"Destructor is called for the value :"<<value<<endl;
		}
		
		void* operator new(size_t size){ 
			cout<<"Custom new operator is called:"<<size<<endl;
			void* p = malloc(size); 
			return p; 
		}
		
		void operator delete(void* p){
			cout<<"custom delete operator is called"<<endl;
			free(p);
		}
};

int main(){
	
	Demo* obj = new Demo(42);
	delete obj;
	
	return 0; 
}

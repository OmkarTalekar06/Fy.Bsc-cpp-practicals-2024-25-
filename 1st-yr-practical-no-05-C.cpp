#include<iostream>
using namespace std;

//friend function for adding two matrix from 2 different classes  

class Matrix1;
class Matrix2;

class Matrix1{
	private:
		int mat[2][2];
		
	public:
		
		Matrix1(int a, int b, int c, int d){
			mat[0][0]=a;
			mat[0][1]=b;
			mat[1][0]=c;
			mat[1][1]=d;
			
		}
		
		friend void addMatrix(const Matrix1 &m1, const Matrix2 &m2);
};

class Matrix2{
	private:
		int mat[2][2];
		
	public:
		
		Matrix2(int a, int b, int c, int d){
			mat[0][0]=a;
			mat[0][1]=b;
			mat[1][0]=c;
			mat[1][1]=d;
		}
		
		friend void addMatrix(const Matrix1 &m1, const Matrix2 &m2);
};

void addMatrix(const Matrix1 &m1, const Matrix2 &m2){
	int result[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			result[i][j]=m1.mat[i][j]+m2.mat[i][j];
		}
	}
	
	cout<<"Sum of the matrix is :\n";
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	
	Matrix1 m1(1,2,3,4);
	Matrix2 m2(5,6,7,8);
	
	addMatrix(m1,m2);
	
	return 0;
}

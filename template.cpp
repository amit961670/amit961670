#include<iostream>
using namespace std;

template<typename T,typename U>

class btech{
	public:
		T name;
		U roll;
		 
		btech(T n,U r){
		
		  name=n;
		  roll=r;
	}
	 
	 void print(){
	 	cout<<"Name:"<<name<<endl;
	 	cout<<"Roll No:"<<roll<<endl<<endl;
	 }  
};
int main(){
	btech <string,int> obj("Amit",015);
	obj.print();
	
	btech <int,string> obj2(015,"kumar");
	obj2.print();
	
	btech <float,string> obj3(98.8f,"Ankit");
	obj3.print();
	
	return 0;
}

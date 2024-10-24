#include<iostream>
using namespace std;

template<typename T>

class btech{
	public:
		btech(T& a,T& b){
			T temp = a;
			a = b;
			b = temp;
		}
};


int main(){

int a=18,b=88;
cout<<a<<"\t"<<b<<endl;
btech <int> obj(a,b);
cout<<a<<"\t"<<b<<endl<<endl;

float c=13.4,d=67.6;
cout<<c<<"\t"<<d<<endl;
btech <float> obj2(c,d);
cout<<c<<"\t"<<d<<endl<<endl;

string e="Amit",f="kumar";
cout<<e<<"\t"<<f<<endl;
btech <string> obj3(e,f);
cout<<e<<"\t"<<f<<endl;


}

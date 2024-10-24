#include<iostream>
using namespace std;
class btech{
    public:
	int roll;
  void print(){
  cout<<"Roll:"<<roll<<endl;
   cout<<"address of obj:"<<this<<endl;
}
};
int main(){
btech obj;
obj.print();
cout<<"address of obj:"<<&obj<<endl<<endl;

btech* obj2= new btech;
obj2->print();
cout<<"address of obj:"<<obj2<<endl;
return 0;
}

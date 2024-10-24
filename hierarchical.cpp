#include<iostream>
using namespace std;
 class teacher{
  public:
    teacher(){
       cout<<"I am teacher class-a";
}
};
class A2:public teacher{
  public:
A2(){
     cout<<"i am btech 2a-";
}
};
class B2:public teacher {
    public:
c(){
cout<<"i am teacher of class 2B"<<endl;
}
};
int main(){
    B2 obj;
return 0;
}    

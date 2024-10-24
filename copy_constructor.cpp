#include<iostream>
using namespace std;
 class btech{
   public:
    int roll;
      float cgpa;
      int age;
       
    btech(){
    roll=90;
    age=90;
     cgpa=7.0;
}
    void print(){
   cout<<"roll:"<<roll<<endl;
     cout<<"cgpa: "<< age<<endl;
cout<<"cgpa:"<<cgpa<<endl;
}
btech( btech& obj){
age=32;
cgpa=9.5;
roll=85;
}
};
int main(){
btech chinki;
chinki.print();

btech minki = chinki;
minki.print();

return 0;
}

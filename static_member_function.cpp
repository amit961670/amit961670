#include<iostream>
using namespace std;
class btech{
public:
//int roll;
static int nfan;
   void print(){
cout<<"i am print methof:\n";
cout<<"Roll:"<<roll<<endl;
cout<<"N-FAN:"<<nfan<<endl;
}
static void event(){
cout<<"i am event methof:\n";
cout<<"Roll:"<<roll<<endl;
cout<<"N-FAN:"<<nfan<<endl;
}
};
int btech::roll=47;
int btech::nfan=78;
int main(){
btech obj;
//obj.event;
btech::event;
return 0;
}

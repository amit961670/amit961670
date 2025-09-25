#include<iostream>
using namespace std;
class student{
	private:
		char name[24];
		int age;
		long int roll_no;
	public:
	    void read_data();
	    void print_data();
		
};
void student::read_data(){
	cout<<"Enter The Name: "<<endl;
	cin>>name;
	cout<<"Enter The Age: "<<endl;
	cin>>age;
	cout<<"Enter The Roll No.: "<<endl;
	cin>>roll_no;
}
void student::print_data(){
	cout<<"Name is "<<name<<endl;
	cout<<"Age is "<<age<<endl;
	cout<<"Roll No. is "<<roll_no<<endl;
}
int main(){
	student s;
	s.read_data();
	s.print_data();
	return 0;
}

#include<iostream>
using namespace std;
class person{
	private:
		int pid=101;
		char name[10]="raj";
		public:
	     void show(){
		cout<<"person class";
		cout<<"\n pid"<<pid;
		cout<<"\n name"<<name;
		
			}
	 };
	 int main(){
	 	person p1;
	 	p1.show();
	 	person*pi=new person;
	 	p1.show();
	 	return 0;
	 }

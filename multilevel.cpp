#include<iostream>
using namespace std;

class person
{

public:
int height,weight;
void talk()
{
	cout<<"you are inside the talk"<<endl;
	cout<<"height:"<<height<<endl;
	
}

void walk()
{
	cout<<"you are inside the walk"<<endl;
	cout<<"weight:"<<weight<<endl;
}
};


class doctor:public person
{	public:
	
};//derived class
class footballer:public doctor
{	public:
	
};//derived class


int main()
{
	
	footballer f1;
	
	
	f1.height=150;
	f1.weight=50;
	f1.talk();
	f1.walk();
}

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

class animal
{

public:

	void eat()
	{
		cout<<"you are inside the animal eat"<<endl;
	}

};

class doctor:public person
{	public:
	
};//derived class
class footballer:public animal,public doctor
{	public:
	
};//derived class


int main()
{
	
	footballer f1;
	
	
	f1.height=150;
	f1.weight=50;
	f1.talk();
	f1.walk();
	f1.eat();
}

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

private:
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

protected:
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
};//base class

class doctor:public person
{	public:
	
};//derived class
class footballer:private person
{	private:
	
};//derived class
class runner:protected person
{	protected:
	
};//derived class

int main()
{
	doctor d1;
	footballer f1;
	runner r1;
	
	d1.height=150;
	d1.weight=50;
	d1.talk();
	d1.walk();

	f1.height=150;
	f1.weight=50;
	f1.talk();
	f1.walk();

	r1.height=150;
	r1.weight=50;
	r1.talk();
	r1.walk();	

}
























































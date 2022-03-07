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
	
	void doc()
	{
		cout<<"inside the doctor"<<endl;
	}
	
};//derived class
class footballer:public person
{	
public:
	void foot()
	{
		cout<<"inside the football"<<endl;
	}
	
};//derived class

class hybrid:public doctor,public footballer
{

public:


};

int main()
{
	
	hybrid f1;
	
	
	//f1.height=150;
	//f1.weight=50;
	//f1.talk();
	//f1.walk();
	f1.doc();
	f1.foot();
	
}

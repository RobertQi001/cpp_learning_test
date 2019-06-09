#include<iostream>
using namespace std;
class person
{
	
public:
	void input()
	{
		cout << "name" << " gender(1 for male and 2 for female)" << " age:";
		cin >> name >> s >> age;
	}
	void display()
	{
		
		cout << name << " " <<s <<" "<< age<<endl;
	}
private:
	char name[20];
	int s;							
	int age;
};
class student:public person
{
public:
	void input()
	{
		person::input();
		cout << "number1" << " class" << " grades:";
		cin >> number1 >>  c >> grades;
	}
	void display()
	{
		person::display();
		cout << number1 << " " <<  c <<" "<< grades<<endl;
	}
private:
	char number1[20];
	int c, grades;
};
class teacher:public person
{
public:
	void input()
	{
		person::input();
		cout << "number2" << " calss" << " college:";
		cin >> number2 >> c >> co;
	}
	void display()
	{
		person::display();
		cout << number2 << " " << c <<" "<< co << endl;
	}
private:
	char number2[20];
	char c[20];
	char co[20];
};
void main()
{
	student s1;
	s1.input();
	s1.display();
	student s2;
	s2.input();
	s2.display();
	teacher t1;
	t1.input();
	t1.display();
	teacher t2;
	t2.input();
	t2.display();
}
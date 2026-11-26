#include<iostream>
using namespace std;

class Person
{
public:
virtual void walk()
{
cout<<"don't like walking"<<endl;
}
};

class Student: public Person
{
public:
void walk()
{
cout<<"i like walkin very much"<<endl;
}
};

int main() {
Person *ptr;
Student s;
ptr=&s;
ptr->walk();

return 0;
}

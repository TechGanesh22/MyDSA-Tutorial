#include<iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
	private:
	int age;
    public:
	void display(){
		cout<<age<<" "<<rollNumber;
	}
	int getAge(){
		return age;
	}

};

int main(){
    // Create objects statically
	Student s1;
	Student s2;

	Student s3, s4, s5;

	// s1.age = 24;
	cout<<"S1 age is :"<<s1.getAge()<<endl;
	s1.rollNumber = 101;

	// cout << s1.age << endl;
	cout << s1.rollNumber << endl;
	s1.display();

	cout<<endl<<"S2 age is :"<<s2.getAge()<<endl;
	s2.display();

	// s2.age = 30;


	// Create objects dynamicaaly
	Student *s6 = new Student;
	cout<<"S6 age is :"<<(*s6).getAge()<<endl;
	// (*s6).age = 23;
	(*s6).rollNumber = 104;
	(*s6).display();

	// s6 -> age = 23;
	s6 -> rollNumber = 104;
	s6->display();

    return 0;
}
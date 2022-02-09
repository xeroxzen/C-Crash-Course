#include <iostream>

using namespace std;


struct StudentDetails{
	string name;
	string sex;
	int age;
	double marks;
	
};


void studentDetails(StudentDetails student1){
	cout <<"Name: " << student1.name << endl;
	cout <<"Marks: " << student1.marks << endl;
	cout <<"Sex: " << student1.sex << endl;
	cout <<"Age: " << student1.age << endl;
	cout << "*******************************" <<endl;

//	return studentDetails(StudentDetails student1);
}

int main(){
	
	StudentDetails student1, student2, student3, student4, student5;
	
	student1.name ="Andile Mbele";
	student1.age = 22;
	student1.sex = "male";
	student1.marks = 97;
	
	student2.name ="Nikiwe";
	student2.age = 20;
	student2.sex = "female";
	student2.marks = 100;
	
	student3.name ="Tsitsi";
	student3.age = 19;
	student3.sex = "male";
	student3.marks = 97;	
	
	student4.name ="Naledi";
	student4.age = 19;
	student4.sex = "male";
	student4.marks = 18;	
	
	student5.name ="Michael";
	student5.age = 20;
	student5.sex = "male";
	student5.marks = 90;		
				
	
	studentDetails(student1);
	studentDetails(student2);
	studentDetails(student3);
	studentDetails(student4);
	studentDetails(student5);
	
	return 0;
}
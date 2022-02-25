#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream students("students.txt")
	
	if(students.open()){
		string studentDetails;
		
		while(getline, (students, studentDetails)){
			cout << studentDetails << "\n";
		}
		
		cout <<"Unable to open the file" << endl;
	}
	students.close();
	
	return 0;
}
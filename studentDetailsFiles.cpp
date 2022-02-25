#include <iostream>
#include <fstream>
#include <string>
//#include <fstream/ifstream>

using namespace std;

int main(){
	
	string studentDetails;
	fstream students("students.txt", ios::in);
	
	if(!students){
		cout <<"Unable to open the file" << endl;
	}
	else{
		while (!students.eof()){
		
			getline(students,studentDetails);
			cout<<studentDetails << endl;
			}
		}
	students.close();
	
	return 0;
}
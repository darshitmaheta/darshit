#include <iostream>
using namespace std;

class student
{

public:
    string name;
    int age;

    void setdetails (string studentname,int studentage){
    name =studentname;
    age =studentage;
    }

    void displaydetails(){
    cout << "student name :" << name << endl;
    cout <<"age:" << age << endl;
    }
};
 int main(){
 student s1;
 s1.setdetails("john doe",20);
 s1.displaydetails();

 return 0;
 }


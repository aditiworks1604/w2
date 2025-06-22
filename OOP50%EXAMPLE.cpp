//INHERITANCE BASIC//

#include<iostream>
#include<string>
using namespace std;

class person{  //PARENT CLASS//

private:
  string name;
  int age;
public:

  person(){ //DEFAULT CONSTRUCTOR OF PARENT CLASS//
    name="default";
    age=0;
  }

  person(string name,int age){  //PARAMETERIZED CONSTRUCTOR OF PARENT CLASS//
    this->name =name;
    this->age =age;
  }

  void display(){ //FUNCTION//
    cout<<"THE NAME IS ---"<<name <<endl;
    cout<<"THE AGE IS---"<<age <<endl;
  }

  void display(string msg){ // function overloading with one parameter and the previous having 0 parameter//
    msg="CUSTOM MESSAGE TO SAY HI ADITI";
    cout<<"CUSTOM MESSAGE---"<<msg<<endl;
  }
};

class student :public person{  //child class//
 
private:
  int rollnum;
  float marks;

public:
  student(){  //default constructor of child class//
    cout<<"I AM DEFAULT CONSTRUCTTOR OF STUDENT CLASS"<<endl;
  }

  student(string name ,int age, int rollnum,float marks) : person(name,age){ //constructor calling from child class of parent//
    this->marks=marks;
    this->rollnum=rollnum;
  }

  void display(){ //function overriding//
    person::display(); // calling base class display
    cout<<"THE ROLL NUMBER IS ---"<<rollnum<<endl;
    cout<<"THE MARKS ARE ---"<<marks<<endl;
  }
};

class graduatestudent:public student{ //child class 3 student class is parent//
  
private:
  string specialisation;
  int year;

public:
  graduatestudent(string name ,int age ,int rollnum,float marks,string specialisation,int year):student(name,age,rollnum,marks){ //parameterized constructor for child class 2//
    this->specialisation=specialisation;
    this->year=year;
  }

  void display(){
    student::display();  // calling parent display to print all inherited data
    cout<<"THE SPECIALISATION DONE BY STUDENT IN---"<<specialisation<<endl;
    cout<<"THE YEAR OF GRADUATION IS --"<<year<<endl;
  }
};


int main(){

  graduatestudent g1("aditi",21,1604,99.2,"AI/ML",2026);
  g1.display();
  g1.person::display("anything");

  return 0;
}

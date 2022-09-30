//~~~~~~~~~~~~~~~~~`````````GET & SET FUNCTION !!`````````````~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

// Creating CLASS !!
class student {

public :              // Access modifiers..
int rollnumber ;         // Data members ,properties & functions of class..

private :
int age ;

public :
void display(){
    cout << "Age:" << age << " " << "Roll number:" << rollnumber << endl;
}

int getage(){
    return age ;
}

void setage( int a ){
    age = a ;
}

void setrollnumber ( int r) {
    rollnumber = r ;
}
};

int main() {
    

// Creating OBJECTS !!
  student s1;
  student *s2 = new student ;
  
  // GET FUNCTION..     [used to read private properties..]
  cout << s1.getage() << endl;
  cout << s2 -> getage() << endl;
   
   // SET FUNCTION...[used to edit,update or change any private properties..]
   s1.setage( 20) ;
   s2 -> setage ( 24 ) ;

   s1.setrollnumber( 101) ;
   s2 -> setrollnumber ( 201 ) ;
   
   // Printing the output..
  s1.display() ;
  s2 -> display() ;

}
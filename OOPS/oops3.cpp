//~~~~~~~~~~~~~~~~~~``````CONSTRUCTORS````````~~~~~~~~~~~~~


#include<iostream>
using namespace std;

// Creating CLASS !!
class student {

public :                                      // Access modifiers..
int rollnumber ;                              // Data members ,properties & functions of class..

private :
int age ;

public :
// Default Constructer...

student () {                                  // default constructer does not take any argument.
                                              // initialize the properties with garbage values..

cout << " Constructer 1 called !! " << endl ;

}

 // Parametrized Constructer...

 student ( int r ) {                          // PC takes arguments ..
                                              // initialize properties with the values passed bt user..
cout << " Constructer 2 called !!" << endl ;
  rollnumber = r ;     

 }

 student ( int a, int r){                    // "THIS" is a keyword or a pointer which stores the address of current object.

cout << " Constructer 3 called !!" << endl ;
  this -> age = a ;
  this -> rollnumber = r ;

 }

void display(){
    cout << "Age:" << age << " " << "Roll number:" << rollnumber << endl;
}
};

int main(){

student s1 ;
s1.display();

student s2 ;
s2.display();

student *s3 = new student ;
s3 -> display();

 cout << " Parametrized Constructer Demo" << endl;
 student s4( 10 ) ;
 s4.display();

 student *s5 = new student( 101 ) ;
 s5 -> display();

student s6( 20 , 1002 ) ;
s6.display();

return 0;

}
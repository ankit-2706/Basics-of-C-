//~~~~~~~~~~~~~~~~~~``````INBUILT CONSTRUCTORS````````~~~~~~~~~~~~~


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
 
 ~student(){                               // Destructor basically delocate the object memory...
     cout << " Detructor called " << endl ;
 }
 

void display(){
    cout << "Age:" << age << " " << "Roll number:" << rollnumber << endl;
}
};

int main(){

    student s1( 10, 1001 );
    cout << "S1:" ;
    s1.display() ;

// COPY CONSTRUCTOR ..                  // CC creates copies..
                                        // CC performs somewhat like this --->>>       // s2.age = s1.age 
                                                                                      //  s2.rollnumber = s1.roolnumber  
    student s2( s1 ) ;
    cout << " S2:" ;
    s2.display() ;

// Printing Dynamically11

student *s3 = new student( 20 , 2001) ;
cout << "S3:" ;
s3 -> display() ;

student s4( *s3 ) ;
cout << " S4:" ;
s4.display();

student *s5 = new student( *s3) ;
cout << "S5:" ;
s5 -> display() ;

student *s6 = new student( s1 ) ;
cout << " S6:" ;
s6 -> display() ;

delete s3 ;
                          // for delocating the dynamically based properties so that destructor can be called.

//--------------------------*******************------------------------

// COPY ASSINGMENT OPERATOR..

student s1 ( 22 , 2002 ) ;
student s2 ( 33 , 3003 ) ;
student *s3 = new student( 44 , 4004 ) ;

 s2 = s1 ;                             //CAO performs somewhat like this --->>>       // s2.age = s1.age 
 *s3 = s1 ;                                                                          //  s2.rollnumber = s1.roolnumber
 s2 = *s3 ; 

 cout << " S1: " ;                                                                          
 s1.display();

 cout << " S2: " ;
 s2.display();

 cout << " S3: " ;
 s3 -> display();

 delete s3 ;                           // for delocating the dynamically based properties so that destructor can be called.               

return 0 ;
}



/*---------------------------*************************----------------
 
 PLAYING WITH CONSTRUCTORS...

student s1 ;        --->>     "DEFAULT CONSTRUCTOR"..(Concstructor 1 called !!)

student s2( 101 ) ; --->>     " PARAMETRIZED CONSTRUCTOR"..(Constructor 2 called !!)

student s3( 20 , 102 ) ; --->>  " PARAMETRIZED CONSTRUCTOR"..( Constructor 3 called !!)

student s4( s3 ) ;   ---->>     " COPY CONSTRUCTOR"

s1 = s2 ;         ---->>        "  COPY ASSINGMENT OPERATOR"

student s5 = s4 ;  ----->>     " COPY CONSTRUCTOR"     
                                 "JB BHI ESA HOGA TO COPY CINSTRUCTOR CALL HO JAYEGA, COPY ASSINGMENT OPERATOR NHI" 
                     
same as --->>>

student s5( s4 ) ;

 }
     */


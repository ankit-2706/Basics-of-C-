//~~~~~~~~~~~~~~~~~~~~~````````INITIALIZATION LIST`````````` `~~~~~~~~~~~~~~~

#include<iostream>                                 //CONSTANT data-members ko initialise krne ke liye krte h use!!                                       
using namespace std;

class student {                                    // we can make constant object also !!
                                                //constant object can call only const function !!
public :
       int age ;
       int  const rollnumber ;
  
  //Constructor...

    student ( int a , int r ) :  rollnumber ( r ) , age( a ) {            // SYNTAX : student( int r ) : rollnumber( r) {  }
       //  rollnumber = r ;                                                                            [ name of property jisko ]
       //  age = a ;                                                                                   jisko intialise krna hai!                                                       
    } 
void print () {

    cout << " Age : " << " " << age << endl ;
    cout << " Rollnumber : " << " " << rollnumber << endl ;

}

};

int main(){
   int r , a ;
   cout << " Enter Age of the student :" << endl ;
   cin >> a ;
   cout << " ENter Rollnumber of the student: " << endl;
   cin >> r ;
 student s1 ( a , r ) ;
 s1.print () ;
 
    return 0;
}
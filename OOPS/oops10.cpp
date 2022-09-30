//~~~~~~~~~~~~~~~~~~~~~```````STATIC MEMBER`````````~~~~~~~~~~~~~

#include<iostream>
using namespace std;

class Student {

public :
       int age ;                  // non - static property..
      int rollnumber ;            // total no. of student present..

    static int totalstudents ;     // Static property..

//now we need to increase value of totalstudent by +1..
// calling constructer

Student () {

totalstudents ++ ;

}

};

int Student :: totalstudents = 0 ;       // SYNTAX--->> how to 'INITIALIZE' static property.. (INITIALIZATION os static property always outside class )


int main(){
    
    Student s1 ;
    s1.totalstudents = 20 ;

    Student s2 ;
    cout << s2.totalstudents << endl ;             //loically incorrect..but shows output.

    cout << Student :: totalstudents << endl ;          //SYNTAX -->> how to 'ACCESS' static property..
                                                         // logically corect..
   
    // Student s1;
    // Student s2 , s3 , s4 , s5 ; 
    // cout << Student :: totalstudents << endl ;                                                          
    return 0;
}
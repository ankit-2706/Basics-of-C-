//~~~~~~~~~~~~~~~~~~~```````SHALLOW COPYING/ DEEP COPYING`````````````~~~~~~~~~~~~~~~

#include<iostream>
#include<cstring>
using namespace std;

class student {

int age ;
char *name ;

public :

student ( int age , char *name ) {
    
    this -> age = age ;
    // SHALLOW COPY...
   // this -> name = name ;

   //DEEP COPYING -->> COPYING WHOLE ARRAY!!

   this -> name = new char [ strlen( name) + 1 ] ;
  strcpy ( this -> name , name ) ;
}

void display() {
    
    cout << " Name:" << name << " " << "Age:" << age << endl ;

}

};

int main(){
    
    char name [] = "Ankit" ;
    student s1 ( 20 , name ) ;
    s1.display() ;

    name [ 4 ] = 'y' ;                  //SHALLOW COPYING -->> "Jb bhi ham array pass krte hain ,instead of copying whole array
                                                            // vo 0th element the address copy ho jata hai "    
    student s2 ( 22 , name ) ;
    s2.display() ;                                      // isliye s1 & s2 ke naam me koi changes nhi hua..jo s2 ka naam tha vohi s1 me gaya.
    s1.display() ;

    return 0;
}
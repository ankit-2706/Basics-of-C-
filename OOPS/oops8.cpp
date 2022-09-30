//~~~~~~~~~~~~~~~~~``````````COPY CONSTRUCTER``````````````~~~~~~~~~~~~~~~~~

#include<iostream>
#include<Cstring>
using namespace std;

class Student {
private :
int age ;

public :
char *name ;

Student ( char *name , int age ) {

this -> age = age ;
// shallow copy
 // this -> name = name ; 

 //Deep copy..

 this -> name = new char [ strlen( name ) + 1 ] ;
 strcpy ( this -> name , name ) ;

}

// COPY CONSTRUCTER..

Student ( Student const &s ) {        //pass by reference..

    this -> age = s.age ;

    // this -> name = s.name ....//SHALLOW COPY

    // DEEP COPY..

    this -> name = new char [ strlen( s.name) + 1] ;
    strcpy ( this -> name , s.name ) ;
}

void display (){

    cout << " Name : " << name << endl;
    cout << " Age : " << age << endl;
}

};

int main(){

    char name [ ] = " abcd " ;
    Student s1 ( name , 20 ) ;
    s1.display () ;
    
    Student s2 ( s1 ) ;

    s2.name[ 0 ] = ' x ' ;
    s1.display () ;
    s2.display () ;

    //   Student s2 ( name , 24 ) ;
    // s2.name [ 0 ] = ' e ' ;
  
    // s1.display( ) ;
    // s2.display( ) ;

    return 0;
}
//~~~~~~~~~~~~~~~~~~~~```````DYNAMIC ARRAY CLASS```````````~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

class DynamicArray {

 private :
         int *data ;
         int nextindex ;
         int size ;

public :


// Creating Constructr..

 DynamicArray  () {

       data = new int [ 5 ] ;
       nextindex = 0 ;
       size = 5 ;
 }

 // Creating Constructor for Deep copy..for correct output of copy constructor..

//  DynamicArray ( DynamicArray const &d ) {
//     // SHallow copy ..

// //    this -> data = d.data ;
// //     this -> nextindex = d.nextindex ;
// //      this -> size = d.size
 
//  // Deep copy ..

//  this -> data = new int [ d.size ] ;
 
//  for ( int i = 0 ; i < d.nextindex ;  i ++  ) {
//     this -> data [ i ] = d.data [ i ] ;

//  }

//  }
   

//    void operator= ( DynamicArray const &d ){
//      this -> data = new int [ d.size ] ;
 
//  for ( int i = 0 ; i < d.nextindex ;  i ++  ) {
//     this -> data [ i ] = d.data [ i ] ;

//    }

//    } 
 

//  void add ( int i ){

// if( nextindex == size ){

//     data [ nextindex ] = element ;
//     nextelement ++ ;

// }

 // Creating function for  Adding element to  Array...

void add ( int element ) {

if( nextindex == size ) {
    int *newdata = new int[ 2 * size ] ;       // Creating double size array ...

    for ( int i = 0 ; i < size ; i ++ ) {
        newdata [ i ] = data [ i ] ;

    }

    delete [ ] data ;
    data = newdata ;
    size *= 2 ;
}
 data [ nextindex] = element ;
 nextindex ++ ;

}

// Creating function to take index no. from user to  give corresponding number..

int get ( int i ) {

if ( i < nextindex ) {
    return data [ i ] ;
}
else {
    return -1 ;

}

}

// Creating function to to take index no. & elemnet from user and to place the entered no. at the entered  index no.....

void add ( int i , int element ) {

    if ( i < nextindex ) {
       data [ i ] = element ;
    }

    else if ( i == nextindex ) {
        add ( element ) ;
        }

        else {
            return ;
        }
}

// Creating functionn to print the output ..


void print () {

    for ( int i = 0 ; i < nextindex ; i++) {
        cout <<  " " <<  data [ i]  ;
    }

      cout << endl ;

  }




};

int main () {

DynamicArray d1 ;
// using ADD ( element ) function..

d1.add ( 10 ) ;
d1.add ( 20 ) ;
d1.add ( 30 ) ;
d1.add ( 40 ) ;
d1.add ( 50 ) ;
d1.add ( 60 ) ;
d1.add ( 70) ;
d1.print () ;


d1.print () ;

DynamicArray d2( d1 ) ; // Creates Shallow copy .. for deepp copy ,create your Constructor..

d1.add ( 0 , 100 ) ;
d1.print () ;
 d2.print  () ;

DynamicArray d3 ;

d3 = d1 ;            // Copy assingment operator also creates Shallow copy..Create another constructor for deep copy..

d1.add ( 0 , 100 ) ;
d3.print () ;

DynamicArray d4 ;

d4 = d1 ;
d4.print () ; 

cout << endl ;

d1.add ( 7, 0 ) ;


//using get function..

cout << d1.get ( 6 ) << " ";
cout << d1.get ( 5) << " ";
cout << d1.get ( 4 ) << " ";
cout << d1.get ( 3 ) << " ";
cout << d1.get ( 2 ) << " ";
cout << d1.get ( 1 ) << " ";
cout << d1.get ( 0 ) << " ";
cout << d1.get ( 7 ) << " ";

return 0 ;

}































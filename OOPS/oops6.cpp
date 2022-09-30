//~~~~~~~~~~~~~~~~~~~~~~~````````COMPLEX CLASS`````````~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

class Complex {

private :
        int real_number ;
        int imaginary_number ;

public :
       Complex ( int real , int imag ){

           real_number = real ;
           imaginary_number = imag ;

       }
       
    void print () {

        cout << real_number << " + " << imaginary_number <<"i"<< endl; 
    }

     void add ( Complex const &c2 ) {

      int x_real =  ( real_number ) + ( c2.real_number ) ; 
      int y_imag =  (  imaginary_number ) + ( c2.imaginary_number ) ; 

     int real_number = x_real ;
     int imaginary_number = y_imag ;     
       print() ;     }


} ;

int main (){
    int real1 , imag1 , real2 , imag2 ;

    cout << "Enter 1st complex number :" << endl ;
    cin >> real1 >> imag1 ;

    cout << "Enter 2nd complex number :" << endl ;
    cin >> real2  >> imag2 ;

   Complex c1( real1 , imag1 ) ;
   Complex c2( real2 , imag2 ) ;

  cout << "Two complex numbers are : " << endl ;

   c1.print ();
   c2.print ();

   c1.add( c2) ;
   c1.print (  ) ;

return 0 ;

}
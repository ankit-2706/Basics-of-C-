//~~~~~~~~~~~~~~`````````OPERATOR OVERLOADING...`````````````

#include<iostream>
using namespace std;

class fraction {

private :
        int numerator ;
        int denominator ;

public :
       fraction( int numerator , int denominator ){

           this -> numerator = numerator ;
           this -> denominator = denominator ;

       }

    void print () {

        cout << this -> numerator << " / " << this -> denominator << endl; 

    }

      void simplify ( ) {
          
          int gcd = 1 ;
          int j = min( this -> numerator , this -> denominator ) ;

          for ( int i = 1 ; i <= j ; i++ )
          {
              if ( this -> numerator % i == 0 && this -> denominator % i == 0 )
              {
                  gcd = i ;
              }

          }

           this -> numerator = this -> numerator / gcd ;
           this -> denominator = this -> denominator / gcd ;

     }
      
    // void add ( fraction  const &f2 ) {
     
     // Adding 2 fractions by ' + ' operator.....

         fraction operator+ ( fraction  const & f2 ){                        //SYNTAX..

         int lcm =  ( this -> denominator ) * ( f2.denominator ) ;
         int x = lcm / ( this -> denominator ) ;
         int y = lcm / ( f2. denominator ) ;
         int num = x * ( this -> numerator ) + ( y * f2.numerator ) ;

        //  this -> numerator = num ; 
        //  this -> denominator = lcm ;

        fraction fNew ( num , lcm );
        fNew.simplify () ;
        return fNew ;
                 
     }

    // void multiply ( fraction  const &f2 ) {

// Multiplying 2 fractions by ' * ' operator.....

    fraction operator* ( fraction  const & f2 ){                        //SYNTAX..
    
    // this -> numerator   =  ( this -> numerator ) * ( f2.numerator ) ;
    // this -> denominator =  ( this -> denominator ) * ( f2.denominator ) ;

    int n =  ( numerator ) +  ( f2.numerator ) ;
    int d = ( denominator ) + ( f2.denominator ) ;

    fraction fNew ( n , d ) ;
    fNew.simplify () ;
    return fNew ;

     }

     // Check whether 2 fractions are equal or not...
     // by  using ' == ' operator ....

     bool operator== ( fraction & f2 ){
        return (  this -> numerator == f2.numerator && this ->  denominator == f2.denominator  );

     }
     

    // OVERLOADING ' ++ ' OPERATOR..( Pre - increment !! ) 
    
    fraction &operator++ () {
     
     numerator = numerator + denominator ;
     simplify () ;
     return *this ; 

    }


     };


    int main(){



    fraction f1 ( 10 , 2 ) ;
    fraction f2 ( 15 , 4 ) ;
    
    
    // f1.add( f2 ) ;
    // f1.print () ;
    // f2.print () ;

    // cout << endl;

    // f1.multiply( f2 ) ;
    // f1.print () ;

     fraction f3 = f1 + f2 ;                    // not imp  period 
     f3.print () ;           

     fraction f5 = f1 * f2 ;
     f5.print ();

     if ( f1 == f2 )
     {
        cout << " EQUAL " << endl ;

     }
     else 
     {

             cout << " NOT EEQUAL" << endl; 

     }
      
    //   fraction f6 = ++f1 ;
    //   f6.print () ;

      fraction f7 = ++(++f1) ;
      
      f1.print () ;
      f7.print () ;

    return 0;
}
     
      



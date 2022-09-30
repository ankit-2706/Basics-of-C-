//~~~~~~~~~~~~~~~~~~~`````````CLASS & OBJECTS !! `````````````````~~~~~~~~~~~~~~

using namespace std;

// Creating CLASS !!
class student {

  public :              // Access modifiers..
int rollnumber ;         // Data members ,properties & functions of class..
int age ;

};

class product {

private :
 int ID;

 public :
 float weight ;
 char name ;

};

int main(){
// Creating OBJECT Statically !!

 student s1;              
 student s2;          // Creating objects...
 student s4, s5 ;

 // Creating OBJECT dynamically !!

 student *s6 = new student ;               // similar to ..[int *p = new int ;]...Class is UDDT..therefore replacing int by student..

// Setting up the values to the properties (Statically) !! 

   s1.age = 24 ;
   s1.rollnumber = 101;

   s2.age = 30 ;
   s2.rollnumber = 201;

   // To print value of any properties (Statically)!!

    cout << "S1 AGE:" << s1.age << endl; 
   cout << "S1 ROLLNUMBER:" << s1.rollnumber << endl;

    cout << endl ;

   cout << "S2 AGE:" << s2.age << endl; 
   cout << "S2 ROLLNUMBER:" << s2.rollnumber << endl;

       cout << endl ;

  // To access dynamically based properties !! 
     
    (*s6).age = 25 ;           // derefernce..
    (*s6).rollnumber = 104 ; 
      
      // OR

    s6 -> age = 25 ;
    s6 -> rollnumber = 104 ;

    // To print value of any properties(Dynamically) !!

    cout << "S6 AGE:" << (*s6).age << endl ;
    cout << "S6 ROLLNUMBER:" << (*s6).rollnumber << endl ; 
       
return 0;
}
   
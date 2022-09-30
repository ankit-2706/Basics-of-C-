//~~~~~~~~~~~~~~~~~`````````RETURNING SUBSEQUENCES OF ANY STRING``````````~~~~~~~~

#include<iostream>
using namespace std;

int subs( string input , string output[] ) {
    if( input.empty()){             //BASE CASE
        output[0]=" ";       
        return 1;
    }
    string smallstring = input.substr(1);                
    int smalloutputsize = subs( smallstring , output );        //RECURSIVE CALL
    for( int i = 0 ; i< smalloutputsize ; i++){
        output[ i + smalloutputsize ] = input[0] + output [i];       //SMALL  CALCULATION
    }
    return 2* smalloutputsize ;

}
int main(){
    string input;
    cout << " Enter your string"<< endl;
    cin >> input ;
    string output [1000];
    int count= subs( input , output );
    for( int i= 0 ; i < count ; i++){
        cout << output[i] << endl;
    }

    return 0;
}

//SEQUENCES MEANS NO OF POSSIBLE WAYS ...
// NUMBER OF SEQUENCES = 2^n ....where n= no. of character in a string...


// JUST PRINTING SUBSEQUENCES...

// #include<iostream>
// using namespace std;
// void print_subs(string input,string output){
//   if(input.length()==0){
//     cout << output << endl;
//     return;
//   }

//   print_subs(input.substr(1),output);
//   print_subs(input.substr(1),output+input[0]);
// }
// int main(){
//   string input;
//   cout << "ENter your string:" << endl;
//     cin >> input;
//   string output="";
//   print_subs(input,output);
//   return 0;
// }
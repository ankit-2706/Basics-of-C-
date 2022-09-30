#include<iostream>
// using namespace std;

// string getstring( int d ){
//     if( d==2 ){
//         return "abc";
//     }
//     if( d==3 ){
//         return "def";
//     }
//     if( d==4 ){
//         return "ghi";
//     }
//     if( d==5 ){
//         return "jkl";
//     }
//     if( d==6 ){
//         return "mno";
//     }
//     if( d==7 ){
//         return "pqrs";
//     }
//     if( d==8 ){
//         return "tuv";
//     }
//     if( d==9 ){
//         return "wxyz";
//     }
//     return " ";
// }

// int keypad( int input , string output[]){
//     if( input==0){                        //BASE CASE;
//         output[0]=" ";
//         return 1;
//     }

//     int lastdigit = input%10;
//     int smallnumber = input/10;
//     int smalloutputsize = keypad( smallnumber , output );         //RECURSIVE CALL;
//     string options = getstring( lastdigit );

//     for( int i=0; i< options.length()-1 ; i++ ){                    
//         for( int j=0; j<smalloutputsize ; j++ ){                            
//             output[ j + (i+1)*smalloutputsize] = output[j];               //MAKING COPY OF THE ARRAY.
//         }
//     }

//     int k=0;
//      for( int i=0; i< options.length() ; i++ ){
//         for( int j=0; j<smalloutputsize ; j++ ){
//             output[k] = output[k] + options[i];                          // ADDING EACH CHAR OF LAST DIGIT TO THE ARRAY..
//             k++;
//         }
// }
//       return smalloutputsize*options.length();
// }

// int main(){
//     int input ;
//     cout << "Enter the number:" << endl;
//     cin >> input;
//     string output[1000];
//     int count= keypad( input , output );
//     for( int i = 0 ; i < count ; i++){
//         cout << output[i] << endl;
//     } 
//     return 0;
// }

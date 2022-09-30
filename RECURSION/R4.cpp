//~~~~~~~~~~~~~~~````````COUNT THE DIGIT``````````~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int count( int n){
    if(n<10){
        return 1;
    }
    
    if(n>=10){
        int output= 1+count( n/10);
        return output;
    }

}
int main(){
    int n;
    cout << " Enter number"<< endl;
    cin >>n;
   cout <<  count(n);

    return 0;
}
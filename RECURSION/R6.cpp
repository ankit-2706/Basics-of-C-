//~~~~~~~~~~~~~~~~~~~~~````````TO CHECK IF ARRAY SORTED OR NOT?`````````````~~~~~~~~~~~~~

#include<iostream>
using namespace std;
bool is_sorted2(int x[],int size){
    if(size==0 || size==1){
        return true;
    }

    bool is_smalleroutput= is_sorted2(x+1 , size-1);
    if(!is_smalleroutput){
        return false;
    }
    if(x[0]>x[1]){
        return false;
    }
    else{
        return true;
    }

}
int main(){
    int size,x[100];
    cout << "Enter the size of array:" ;
    cin >> size;
    for(int i=0;i<size;i++){
        cout << " Enter the elements at x["<< i <<"] : " ;
        cin >> x[i];
    }
    cout << is_sorted2(x,size);
    return 0;
}
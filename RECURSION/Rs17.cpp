//~~~~~~~~~~~~~~~~~~````QUICK SORT``````~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

int partition ( int a[], int si, int ei ){                 //THIS FUNCTION WILL MAKE PARTITION AND GIVE US UPDATED ARRRAY WITH NO AT ITS CORRECT PLACE.
    int pivot = a[si];
    int countsmaller = 0;
    for( int i= si+1; i<=ei; i++ ){
        if( a[i]<= pivot ){
            countsmaller++;                              //GIVES NO.<X..
        }
    }
    int pivotIndex = countsmaller + si ;
    a[si] = a[ pivotIndex];
    a[ pivotIndex]= pivot ;                          //SWAPING FIRST NUMBER WITH ITS CORRECT INDEX ELEMENT..
    
     int i = si;
     int j = ei;                                   // COMPARING Ith & Jth elements whether they are placed in correcct position wrt x,
     while( i<pivotIndex && j>pivotIndex){          //if not ,then swaping those elements 
       if( a[i]<=pivot){                            //if placed correctly, then moving to next number.
        i++;
        }
       else if( a[j]>pivot){
        j--;
        }
        else{
            int temp = a[i];
            a[i]=a[j];                      //SWAPING...since not placed correctly..
            a[j]=temp;
            i++; j--;
        }
     }
      return pivotIndex ;
}

 void quick_sort( int a[], int si, int ei ){
    if( si>=ei){                               //BASE CASE..
        return;
    }
    
    int pi = partition( a, si, ei );            //SMALL CALCUALTION..
    quick_sort( a, si, pi-1 );                  //RECURSIVE CALL..
    quick_sort( a, pi+1, ei );

}

int main(){
    
    int a[100],si,ei;
    cout<<"Enter starting index :"<< endl;
    cin >> si;
    cout<<"Enter ending index :"<< endl;
    cin >> ei;
    for( int i= si; i<=ei ; i++){
    cout << "Enter the element at a["<< i << "]: ";
    cin >> a[i];
    }
    quick_sort( a , si , ei );
    for( int i= si; i<=ei ; i++){
        cout << a[i] <<" ";
    }
    return 0;
}
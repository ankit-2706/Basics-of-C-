//~~~~~~~~~~~~~~~~~`````````MERGE SORT`````````~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

void merge( int x[] , int si , int mid , int ei ){             //FUNCTION TO MERGE TWO SORTED ARRAY..
    
    int n1 = mid-si + 1 ;
    int n2 = ei-mid ;

    int a[n1];             // CREATING TEMP..ARRAYS..
    int b[n2];

    for( int i=0; i<n1; i++ ){
        a[i]=x[ si+i ];             // COPYING THE ELEMENTS IN ARRAY A..
    }
    for( int i=0; i<n2; i++ ){        // COPYING THE ELEMENTS IN ARRAY B..
        b[i]=x[ mid+1+i ];
    }

    int i=0;                          // FOR RESULTANT ARRAY..
    int j=0;
    int k=si;

    while( i<n1 && j<n2 ){
        if( a[i] < b[j] ){           //COMPARING THE TWO SORTED ARRAY & THEN PLACING ELEMNETS IN OUTPUT ARRAY..
            x[k]= a[i];
            k++; i++;
        }
        else{
            x[k]= b[j];
            k++; j++;
        }
    }

    while( i<n1 ){                         
        x[k]= a[i];
         k++; i++;
    }
    while( j<n2 ){
        x[k]= b[j];
            k++; j++;
    }
}

void merge_sort( int x[], int si , int ei){                //FUNCTION TO SORT TWO ARRAY..
    if( si >= ei){       //BASE CASE
        return;        
    }
     
     if( si < ei ){
       
    int mid = (si + ei)/2 ;
    merge_sort( x , si , mid ) ;        //RECURSIVE CALL
    merge_sort( x , mid+1 , ei ) ;

    merge( x , si , mid , ei );
     }
     

}

int main(){
    int x[100],si,ei;
    cout<<"Enter starting index :"<< endl;
    cin >> si;
    cout<<"Enter ending index :"<< endl;
    cin >> ei;
    for( int i= si; i<=ei ; i++){
    cout << "Enter the element at x["<< i << "]: ";
    cin >> x[i];
    }
    merge_sort( x , si , ei );
    for( int i= si; i<=ei ; i++){
        cout << x[i] <<" ";
    }
    return 0;
}
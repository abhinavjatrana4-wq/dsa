// You are given an integer n. You need to return the number of digits in the number.
// The number will have no leading zeroes, except when the number is 0 itself.
 



#include<iostream>
using namespace std ;

int countdigit(int n ){
     int count = 0 ;
    for(int i = 0 ; i = n ; i++){
        n = n / 10 ; 
        count++;
    }
    cout<<"the number of digit is : " ; 
    return count ;
}

int main(){
    cout<<countdigit(5);

   
}
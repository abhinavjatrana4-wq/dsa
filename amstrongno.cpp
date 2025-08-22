#include<iostream>
using namespace std ;

int main(){
int n ;
cout<<"enter the number : " ; 
cin>>n ;

int sum = 0 ;
int dup = n ; 

while(n > 0){
  int ld = n % 10 ;
  sum = sum + (ld * ld * ld );
  n = n /10 ; 

}
if(dup == sum ) cout<<"yes it is a amstrong number " ; 
else cout<<"no  it is not a amstrong number " ; 


}
#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout<<"enter the number ";
    cin>>n ;

    int revNum = 0 ;

int dup = n ;

while(n>0){
    int lastdigit = n % 10 ;
    revNum = (revNum * 10 ) + lastdigit;
    n = n / 10 ;
}
  if(revNum == dup ){
    cout<<"yes ";
  }
  else{
    cout<<"no" ; 
  }
}
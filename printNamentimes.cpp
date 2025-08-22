#include<iostream>
using namespace std ;

void printName(int i , int n ){
    if(i>n){
        return;
    }
    cout<<"abhinav"<<endl ;
    printName(i + 1 ,n); 
}

int main(){
    int n ;
    cout<<"enter the number " ; 
    cin>>n;

    printName(1 , n );

}
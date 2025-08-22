#include <iostream>
using namespace std;
// through paramter 
// void sumofNdigit(int i, int sum)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     sum = sum + i;
//     sumofNdigit(i - 1, sum);
// }

// int main()
// {
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     sumofNdigit(n, 0);
//     return 0;
// }

// through function ;
int sum(int i ){
    if (i == 0 ){
        return 0;
    }
    return i + sum(i-1);
}

int main(){
    int  i ;
    cout<<"enter the number :  " ;
    cin>>i ;

   cout<<sum(i);
    return 0 ;
}
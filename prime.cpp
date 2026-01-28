#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the value  : ";
    cin>>n;
    if(n==1){
        cout<<"Prime number";
        return 0;
    }
    
    for(i=2; i<n; i++){
       if(n%i==0){
        break;
       }
    }
    if(n==i){
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }
}
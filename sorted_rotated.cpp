#include<iostream>
using namespace std;
int main(){
    int arr[6] = {4 , 6 , 7, 8, 1 , 2};
    int size = 6;
    int count = 0 ;
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
             count = count+1;
        };
    }
    if(count <= 1){
        cout<<"True";
    }else{
        cout<<"false";
    }
    
    
}
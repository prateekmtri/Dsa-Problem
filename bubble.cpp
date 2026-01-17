#include<iostream>
using namespace std;
int main(){
    int i,j;
    int arr[6] = {10, 5 , 3 , 3 , 6 , 1};
    for(j=0; j<6; j++){
        for(i=0; i<5; i++){
            if(arr[i] >  arr[i+1]){
                swap(arr[i] , arr[i+1]);
            }
        }
    }
    for(i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}
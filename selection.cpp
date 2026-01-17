#include<iostream>
using namespace std;
int main(){
    int arr[6] = {10, 8, 2 , 3 , 1 , 4};
    int i;
    for(int j=0; j<6; j++){
        int index = j;
        for(i=j+1; i<6; i++){
          if(arr[index] > arr[i]){
            index = i;
          }  
        };
        swap(arr[index] , arr[j]);
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}
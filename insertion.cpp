#include<iostream>
using namespace std;
int main(){
    int i,j;
    int arr[6] = {5, 3, 5, 6 , 9, 1};
    for(j=1; j<6; j++){
        for(i=j; i>0; i--){
          if(arr[i]<arr[i-1]){
            swap(arr[i] , arr[i-1]);
          }
          else
          break;  
        }   
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}
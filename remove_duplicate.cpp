#include<iostream>
using namespace std;

int main(){
    int arr[8] = {3 , 4 , 5, 5, 6, 7 , 7 , 8};
    int size = 8;  

    
    for(int i = 0; i < size - 1; i++){
        if(arr[i] == arr[i+1]){
            // shift left
            for(int j = i; j < size - 1; j++){
                arr[j] = arr[j+1];
            }
            size--;   
            i--;      
        }
    }

    int k = size;   

    cout << "k (number of unique elements) = " << k << endl;

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

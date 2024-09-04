#include <iostream>
using namespace std;

int binarySearchIterative(int low,int high, int value, int arr[]){
    while(left <= right){
        int mid = (low + high)/2;
        // edge case
        if(arr[mid] == value){
            return mid;
        }
        else if(arr[mid] > value){
            high = mid - 1;
        }
        else if(arr[mid] < value){
            low = mid + 1;
        }
    }
    return - 1;
}

int main(){
        int arr[7] = {1,2,4,5,6,7,8};
        int n  = sizeof(arr)/sizeof(arr[0]);
        int low = 0;
        int high = n-1;
        int result = binarySearchIterative(low, high, 8, arr);
        cout<< result;



    return 0;
}
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

// class BinarySearch{
//     int n;
//     vector<int> arr = {0};
// public:
//         BinarySearch(int n, int arr[]){
//             this -> n = n;
//             for(int i = 0; i < n; i++){
//                 this -> arr.emplace_back(arr[i]);
//             }
//         }


//         void binarySearch(int value){
//             n = arr.size();
//             int left = arr[0];
//             int right = arr[n-1];
//             int mid = (left + right)/2;


//             for(int i = 0; i<n; i++){
//                 if(mid == value){
//                     cout<< value;
//                     return;
//                 }
//                 else if (value > mid)
//                 {
//                     binarySearch()
//                 }
                

//             }
//         }

// };
// 1 2 4 8 9 
// recursive approach
// and also have iterative appraoch

        int binarySearch(int left, int right, int value, int arr[]){
            if(left <= right){
                int mid = (left + right) / 2;

                if(arr[mid] == value){
                    return value;
                }
                else if(value > arr[mid]){
                    return binarySearch(mid+1, right, value, arr);

                }
                else if(value < arr[mid]){
                    return binarySearch(left, mid-1, value, arr);
                }
            }

            return -1;
    }


int main(void){
    int arr[] = {1,2,4,8,9};
    int n  = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = n-1;
    // cout << arr[n-1];
    int value = 6;
    int result = binarySearch(left, right, value, arr);
    cout<<"Testing";
    cout<< result;

    // system("pause");
    return 0;
}
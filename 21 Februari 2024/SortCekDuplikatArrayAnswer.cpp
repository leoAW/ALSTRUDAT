#include <iostream>
using namespace std;

bool checkDuplicate(int arr[]){
    int arrLength = 4;
    for(int i = 0; i < arrLength; i++){
        for(int j = i + 1; j < arrLength; j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main(void){
    int arrA[] = {2, 1, 3, 1};
    cout << checkDuplicate(arrA);
}

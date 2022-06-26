#include<iostream>
using namespace std;

void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

bool linearSearch(int arr[], int size, int k ) {
    print(arr,size);
    //base case
    if(size == 0) 
        return false;

    if(arr[0] == k) {
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr+1, size-1, k );
        return remainingPart;
    }
}

int main() {

    int arr [5] ;
    int size = 5;
    int key ;
    cout << "Input your array elements:\n";
    for(int i =0 ; i<=size -1 ; i++){
        cin>>arr[i];
    }
    cout << "Element to be searched : ";
    cin>> key ;
    bool ans = linearSearch(arr, size, key);

    if(ans ){
        cout << "Present " << endl;
    }
    else{
        cout << "absent " << endl;
    }

    return 0;
}
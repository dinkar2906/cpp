#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4};
    // int arr2[]; // this is wrong
    int *arr2 = new int[5]();
    arr2[1]=11;
    arr2[4]=54;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<" ";
    }
    

    return 0;
}
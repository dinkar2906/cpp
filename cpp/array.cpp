#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4}; 
    int arr3[4]={1,2,3,4}; 
    
    // int arr2[]; // this is wrong
    int *arr2 = new int[5]();//initializes all values to zero
    arr2[1]=11;
    arr2[4]=54;
    for (int i = 0; i < 9; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    delete[] arr2;
    // Use delete for single objects.
    // Use delete[] for arrays allocated with new[].
    // If you use delete instead of delete[] on an array, only the first element of the array may be deallocated, 
    // leading to undefined behavior

    //2d array;
    int twodarr[][3]={{1,2,3},{2,2,2}};
    int twodarr2[2][3]={{1,2,3},{2,2,2}};

    int rows=3;
    int cols=4;
    int **array=new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        array[i]=new int[cols];
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

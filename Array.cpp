#include<iostream>
using namespace std;
// Linear seraching function
int linearserach(int search[], int sz, int target){
    for (int i = 0; i <sz; i++)
    {
        if (search[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main(){
// basic arrya syntax and using it like storing and acessing it
    int marks[] = {45, 23, 56, 74, 92};
    cout<<marks[2]<<endl;
    cout<<marks[4]<<endl;
    marks[4] = {45};
    cout<<marks[4]<<endl;
// 1. finind largest and smallest number using array and loops
    int size=5;
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    int num[size] = {12, 34, -2, -1, 36};
    for (int i = 0; i <size; i++)
    {
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);
    }
    cout<<"Smallest number is "<<smallest<<endl;
    cout<<"Largest number is "<<largest<<endl;
// 2. Search Operation for target = 8
    int target = 8;
    int sz=5;
    int search[] = {1, 2, 5, 8, 80};
    cout<<linearserach(search, sz, target)<<endl;
// 3. Reversing array digits
    int sz3 = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int start=0;
    int end=sz3-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i <sz3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
// Find the sum of all elements
    int size1 = 5;
    int sum[] = {1,2,3,4,5};
    int sum1 = 0;
    for (int i = 0; i < size1; i++)
    {
        sum1 = sum1 + sum[i];
    }
    cout<<"Sum of this array = "<<sum1<<endl;
// Count even and odd elements
    int size2 = 7;
    int evenodd[] = {1,2,3,4,5,6,7};
    int counteven = 0,countodd = 0;
    for (int i = 0; i < size2; i++)
    {
        if (evenodd[i]%2==0)
        {
            counteven++;
        }
        else if (evenodd[i]%2!=0)
        {
            countodd++;
        }
    }
    cout<<"Total Even numbers = "<<counteven<<endl;
    cout<<"Total Odd numbers = "<<countodd<<endl;
// Find the index of a given element
    int index[] = {1,4,5,8,3,2};
    int element;
    cout<<"Which element index do you want : ";
    cin>>element;
    for (int i = 0; i < 6; i++)
    {
        if (index[i]==element)
        {
            cout<<"Index of "<<element<<" = "<<i<<endl;
        }
    }
//  Sorting array
    int size = 6;
    int array[] = {3,2,5,7,1,9};
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i]>array[j])
            {
                swap(array[i],array[j]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
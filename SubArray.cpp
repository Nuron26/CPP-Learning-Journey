#include<iostream>
using namespace std;
int main(){
// SubArray Max Sum via brute force method
    int n=7;
    int array[n] = {1,2,3,4,5,6,7};
    int maxsum = INT8_MIN;
    for (int i = 0; i <n ; i++)
    {
        int currsum = 0;
        for (int j = i; j <n ; j++)
        {
            currsum += array[j];
            maxsum = max(currsum,maxsum);
        }
    }
    cout<<maxsum<<endl;
// Using Kadane's ALgorithm to solve maxnumber array sum
    int sizee = 7;
    int arrayy[sizee] = {3,-4,5,4,-1,7,-8};
    int currentsum=0;
    int maximumsum = INT8_MIN;
    for (int i = 0; i <n; i++)
    {
        currentsum+=arrayy[i];
        maximumsum = max(maximumsum,currentsum);
        if (currentsum<0)
        {
            currentsum=0;
        }  
    }
    cout<<maximumsum;
}
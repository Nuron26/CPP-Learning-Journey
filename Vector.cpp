#include<iostream>
#include<vector> //we use this header file to get vector in our code because vector is a STL
#include<algorithm> // Required for sort function
using namespace std;
int main(){
// vector representation or basic syntax
    // vector<int> vec;
// first digit tells us about vector size and second its all values
    // vecotr<int> vec(3,0);
    vector<int> vec = {1,2,3,4,5,6};
// basic syntax of for each loop
// It will print us all vector values and val doesn't repsent the place but the place value itself
    for (int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
// Their are some fuctions in vectors we use to perform some task which we repeat many times
    vector<int> vec2;
    cout<<"size = "<<vec2.size()<<endl;//we are printing size of a empty vector
    vec2.push_back(23);//using push_back funciton to pushing or adding some values of a existing vector
    vec2.push_back(34);
    vec2.push_back(56);
    vec2.push_back(76);
    vec2.push_back(67);
    cout<<"Capacity of vector after pushing = "<<vec2.capacity()<<endl;//capacity of vector get double whenever we push a value in it only when it size is not able to store that value
    cout<<"size after pushing back some values = "<<vec2.size()<<endl;
    for (int val : vec2){
        cout<<val<<" ";
    }
    cout<<endl;
    vec2.pop_back();//it is used to deleted tha last value of the vector
    cout<<"after popping back = "<<vec2.size()<<endl;
// printing values after popping back last value or deleting last value
    for (int val : vec2){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<vec2.front()<<" front value"<<endl;//use to print frist or front value of the vector
    cout<<vec2.back()<<" back value"<<endl;//use to print last value of the vector it will not print pushed 67 in empty vec because we have already popped that
    cout<<vec2.at(0)<<" value at 0"<<endl;//use to print the particular a place value in a vector
    cout<<vec2.at(2)<<" value at 2"<<endl;
// Finind unique value in a vector
    //in this we are using bitwise operators to solve this question
    vector<int> vec3 = {1,2,1,4,5,3,5,3,2};
    int xr=0;
    for (int val:vec3){
        xr = xr^val;
    }
    cout<<xr<<endl;
// Create a vector, insert N values, and print its elements.
    vector<int> vector4 = {1,2,3,4,5,6,7};
    int SIZE = vector4.size();
    vector<int> vector5;
    for (int i = 0; i <SIZE ; i++)
    {
        vector5.push_back(vector4[i]);
    }
    for (int val:vector5)
    {
        cout<<val<<" ";
    }
    cout<<endl;
// Pair sum brutte force method
    vector<int> vector6 = {2,7,11,15,4,5,3,8};
    int size2 = vector6.size();
    int target1 = 10;
    for (int i = 0; i < size2; i++)
    {
        for (int j = i+1; j < size2; j++)
        {
            if (vector6.at(i)+vector6.at(j)==target1)
            {
                cout<<"( "<<i<<" "<<j<<" )"<<endl;
                cout<<"( "<<vector6.at(i)<<" "<<vector6.at(j)<<" )"<<endl;
                break;
            }
        }  
    } 
// Pain sum Optimal method only for sorted array
    vector<int> vector7 = {2,4,7,11,15};
    int size3 = vector7.size();
    int start2 = 0;
    int end2 = size3-1;
    int target2 = 18;
    for (int i = start2; i <=end2; i++)
    {
        if (vector7.at(start2)+vector7.at(end2)>target2)
        {
            end2--;
        }
        else if (vector7.at(start2)+vector7.at(end2)<target2)
        {
            start2++;
        }
        else if (vector7.at(start2)+vector7.at(end2)==target2)
        {
            cout<<start2<<","<<end2<<endl;
        }
    }
// Majority element in this question majority element will be always in array
    vector<int> vector8 = {1,2,2,1,1};
    int size4 = vector8.size();
    for (int i = 0; i < size4; i++)
    {
        int occurence = 1;
        for (int j = i+1; j < size4; j++)
        {
            if (vector8.at(j)==vector8.at(i))
            {
                occurence++;
            }
        }
        if (occurence>size4/2)
            {
                cout<<vector8.at(i);
            }
    }
// Majority Element optimal method
    vector<int> vector9 = {1,2,2,1,1};
    int size5 = vector9.size();
    sort(vector9.begin(),vector9.end());
    int ans = vector9[0];
    int count2 = 1;
    for (int i = 1; i < size5; i++)
    {
        if (vector9[i]==vector9[i-1])
        {
            count2++;
        }
        else
        {
            count2=1;
            ans = vector9[i];
        }
        if (count2>size5/2)
        {
            cout<<ans<<endl;
        }
    }
// Moore's Voting Algorithm for Majority Element
    vector<int> vector10 = {1,2,2,1,1};
    int size6 = vector10.size();
    int freq = 0 , ans = 0;
    for (int i = 0; i < size6; i++)
    {
        if (freq==0)
        {
            ans=vector10[i];
        }
        else if (ans == vector10[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout<<ans<<endl;
}
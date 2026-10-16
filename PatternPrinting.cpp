#include<iostream>
using namespace std;
int main(){
// taking input of no of rows and cols and making a pattern with it by using for loop
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter number of colums : ";
    cin>>n;
    for (int i = 1; i <=m; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
// printing square in a pattern of given numbers
    int x;
    cout<<"Enter number of colums : ";
    cin>>x;
    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j <=x; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
// alphabet square
    int b;
    cout<<"Enter side for the square : ";
    cin>>b;
    for (int i = 1; i <=b; i++)
    {
        for (int j = 1; j <=b; j++)
        {
            char h= char(j+64);
            cout<<h<<" ";
        }
        cout<<endl;
    }

// we will now make Traingles
    int c;
    cout<<"Enter number of colums : ";
    cin>>c;
    for (int i = 1; i <=c; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
// dimond pattern
    int d=4;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d-i; j++)
        {
        cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
        cout << "*";
        }
    cout << endl;
    }
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2*(d-i-1)+1; j++)
        {
            cout << "*";
        }
    cout << endl;
    }
}
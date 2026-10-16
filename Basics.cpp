#include<iostream>

using namespace std;

int main(){
    cout<<"Revision"<<endl;
      
    int x = 5, y = 2;// variable or we can say containers
    cout<<x<<endl;// will print 5
    cout<<y<<endl;// will print 2

    cout<<x+y<<endl;// will print 7

    x = x + 5;// updation of x to 10
    y = y + 2;// updation of y to 4

    cout<<x<<endl;// will print 10
    cout<<y<<endl;// will print 4

    cout<<x-y<<endl;// will print 6

    x++;// post increment
    y--;// post increment

    cout<<x<<endl<<y<<endl;// will print 11 than 3

    float _x = 1.5, _y =2.5;// variable or container to store real numbers

    cout<<_x<<endl<<_y<<endl;// will print 1.5 than 2.5
    cout<<_x+_y<<endl;// will print 4

    cout<<"Enter a Number";
    float a;// we have make a container of a
    cin>>a;//with this we can give any input value
    cout<<"Square of this Number is";
    cout<<a*a<<endl;// will give sqaure of our input number

    int x_ = 8;
    int y_ = 3;
    cout<<x_%y_<<endl;// % is a modulus operater will give remainder of 8/3

    char ch;// used to store any character even numbers in ""
    cin>>ch;
    cout<<(int)ch<<endl;//the value is typecasted means changed into type int and will print the chac ASCII value
// ASCII values are particular values assigned to every character and if we command a ASCII
//  value than typecast into character it will that character related to ASCII value    


}
#include<iostream>
using namespace std;
int main(){
    // Even Odd number recoginition
    int x;
    cout<<"Enter a Number :";
    cin>>x;
    if (x%2==0)//in bracket we have put condition
    { 
        cout<<"Even Number"<<endl;// here put code we have to print or do something else
    }
    if (x%2!=0)
    {
        cout<<"Odd Number"<<endl;
    }
// we have do two condition to print two different things or we have give else command to print different thing
// using curly bracket the code will pe the part of the particular function
    // Even Odd number recoginition method 2 using else
    int n;
    cout<<"Enter 2nd number :";
    cin>>n;
    if (n%2==0)
    {
        cout<<"Even Number"<<endl;
    }
    else//it is used for other than conditon given in "if"
        cout<<"Odd Number"<<endl;
    //Profit, Loss recoginition
    int cp;
    cout<<"Enter Cost Price :";
    cin>>cp;
    int sp;
    cout<<"Enter Selling Price :";
    cin>>sp;
    if (cp<sp)// ager ye condition to esa print hoga
    {
        cout<<"Profit"<<endl;
    }
    else if (sp<cp)//vera ager ye condition to esa print hoga
    {
        cout<<"Loss"<<endl;
    }
    else//dono conditon mai se kuch nahi toh esa print hoga
    {
        cout<<"No profit no loss"<<endl;
    }
//we will find area and perimeter of rectangle and will put condition on them
    int l;
    cout<<"Enter Lenght :";
    cin>>l;
    int b;
    cout<<"Enter Breadth :";
    cin>>b;
    int area = l*b;
    int perimeter = 2*(l+b);
    if (area>perimeter)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
//if we want to give two condition for one thing then use "&&" means and
    //we will check weather the input number is 3 digit or not
    int D;
    cout<<"give number to check :";
    cin>>D;
    if (D>99 && D<1000)//we can also write like 99<D<1000 but we used this just for &&
    {
        cout<<"its a 3 digit number"<<endl;
    }
    else{
        cout<<"its not a 3 digit number"<<endl;
    }
//we will take 3 numbers as input and will check weather they can be sides of triangle or not
    //we also use "||" as or to give two condition but its okay if only one of them is correct 
    int tri;
    int TRI;
    int tria;
    cout<<"Give 1st digit :";
    cin>>tri;
    cout<<"Give 2nd digit :";
    cin>>TRI;
    cout<<"Give 3rd digit :";
    cin>>tria;
    if ((tri+TRI)>tria && (tri+tria)>TRI && (TRI+tria)>tri)
    {
        cout<<"Yes these can be the sides of a triangle"<<endl;
    }
    else{
        cout<<"No these can't be the sides of a triangl"<<endl;
    } 
//we will take 3 positive integers and will print greatest of them
    //we will use nested if else in this means we will use if-else within if-else itself
    int _a;
    int _b;
    int _c;
    cout<<"enter 1st digit :";
    cin>>_a;
    cout<<"enter 2nd digit :";
    cin>>_b;
    cout<<"enter 3rd digit :";
    cin>>_c;
    if (_a>_b)
    {
        if (_a>_c)
        {
            cout<<_a<<" is the greatest"<<endl;
        }
        else{
            cout<<_c<<" is the greatest"<<endl;
        }
    }
   else{
    if (_b>_c)
    {
        cout<<_b<<" is the greatest"<<endl;
    }
    else{
        cout<<_c<<" is the greatest"<<endl;
    }
   }
}
#include<iostream>
using namespace std;
int main(){
// 1. Print numbers from 1 to N.
    int N;
    cout<<"enter a number : ";
    cin>>N;
    for (int i = 1; i <=N; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
// 2. Print numbers from N down to 1.
    for (int i = N; i >=1; i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
// 3. Print all even numbers from 1 to N.
    cout<<"Even Numbers : ";
    for (int i = 1; i <=N; i++)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
// 4. Print all odd numbers from 1 to N.
    cout<<"Odd Numbers : ";
    for (int i = 1; i <=N; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
// 5. Print multiples of K from 1 to N.
    int K;
    cout<<"Enter K : ";
    cin>>K;
    cout<<"Multiples of K are : ";
    for (int i = 1; i <=N; i++)
    {
        if (i%K==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
// 6. Find the sum of numbers from 1 to N.
    int sum = 0;
    for (int i = 1; i <=N; i++)
    {
        sum = sum + i;
    }
    cout<<"Sum of nubmers = "<<sum<<endl;
// 7. Find the sum of all even numbers from 1 to N.
    int sumeven = 0;
    for (int i = 1; i <=N; i++)
    {
        if (i%2==0)
        {
            sumeven = sumeven + i;
        }
    }
    cout<<"Sum of even numbers = "<<sumeven<<endl;
// 8. Print the multiplication table of a given number.
    int table;
    cout<<"Enter number for table : ";
    cin>>table;
    cout<<"Multiplication table of "<<table<<" = ";
    for (int i = table; i <=table*10; i = i + table)
    {
        cout<<i<<" ";
    }
    cout<<endl;
// 9. Count how many numbers from 1 to N are divisible by 3.
    cout<<"Number multiple of 3 = ";
    for (int i = 1; i <=N; i++)
    {
        if (i%3==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
// 10. Find the sum of numbers between A and B, inclusive.
    int A;
    int B;
    cout<<"Enter first number : ";
    cin>>A;
    cout<<"Enter second number : ";
    cin>>B;
    cout<<"Sum btw A and B = ";
    int sumbtw = 0;
    for (int i = A; i <=B; i++)
    {
        sumbtw = sumbtw + i;
    }
    cout<<sumbtw;
    cout<<endl;
// 11. Find N factorial.
    int RESULT = 1;
    cout<<"Factorial = ";
    for (int i = N; i >=1; i--)
    {
        RESULT = RESULT * i;
    }
    cout<<RESULT;
    cout<<endl;
// 12. Calculate A raised to power B using a loop, without pow().
    int POW = 1;
    cout<<"A raised to Power B = ";
    for (int i = 1; i <=B; i++)
    {
        POW = POW * A;
    }
    cout<<POW<<endl;
// 13. Count the digits in a positive integer.
    int DIGIT;
    cout<<"Enter a Number : ";
    cin>>DIGIT;
    cout<<"Number of Digits = ";
    int count = 0;
    while (DIGIT>0)
    {
        DIGIT = DIGIT/10;
        count++;
    }
    cout<<count;
    cout<<endl;
// 14. Find the sum of the digits of a positive integer.
    int digit1;
    cout<<"Enter a number : ";
    cin>>digit1;
    int lstdigit;
    int sumdigit = 0;
    cout<<"Sums of all digits = ";
    while (digit1>0)
    {
        lstdigit = digit1%10;
        digit1 = digit1/10;
        sumdigit = sumdigit + lstdigit;
    }
    cout<<sumdigit<<endl;
// 15. Reverse the digits of an integer.
    int digit2;
    cout<<"Enter a number : ";
    cin>>digit2;
    cout<<"Reverse = ";
    int result = 0;
    int lastdigit;
    while (digit2>0)
    {
        lastdigit = digit2%10;
        digit2 = digit2/10;
        result = (result*10) + lastdigit;
    }
    cout<<result<<endl;
// 16. Check whether a number is a palindrome.
    int digit3;
    cout<<"Enter a Number : ";
    cin>>digit3;
    int lst;
    int n = digit3;
    int reverse = 0;
    while (digit3>0)
    {
        lst = digit3%10;
        digit3 = digit3/10;
        reverse = (reverse*10) + lst;
    }
    if (reverse == n)
    {
        cout<<n<<" is a Palindrome Number"<<endl;
    }
    else
    {
        cout<<n<<" is not a Palindrome Number"<<endl;
    }
// 17. Check whether a number is prime.
    int number;
    cout<<"Enter a Number : ";
    cin>>number;
    int prime = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number%i==0)
        {
            prime++;
        }
    }
    if (prime<=2)
    {
        cout<<number<<" is a Prime Number";
    }
    else
    {
        cout<<number<<" is not a Prime Number";
    }
    cout<<endl;
// Print all factors of a number.
    int digit4;
    cout<<"Enter a Number : ";
    cin>>digit4;
    cout<<"Factors of "<<digit4<<" = ";
    for (int i = 1; i <=digit4; i++)
    {
        if (digit4%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
// Count the factors of a number.
    int number1;
    cout<<"Enter a Number : ";
    cin>>number1;
    int prime1 = 0;
    for (int i = 1; i <= number1; i++)
    {
        if (number1%i==0)
        {
            prime1++;
        }
    }
    cout<<"Number of Factors = "<<prime1<<endl;
// Find the GCD of two positive integers using a loop.

// 
}
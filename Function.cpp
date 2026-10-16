#include<iostream>
using namespace std;
int nCr(int n,int r){
    long long int factn=1;
    long long int factr=1;
    long long int factncr=1;
    long long int a = n-r;
    long long int ncr;
    for (long long int i = n; i>0; i--)
    {
        factn=factn*i;
    }
    for (long long int l = r; l>0; l--)
    {
        factr=factr*l;
    }
    for (long long int k = a; k>0; k--)
    {
        factncr=factncr*k;
    }
    ncr=factn/(factr*factncr);
    cout<<"nCr is "<<ncr<<endl;
    return 0;
}
int main(){
    nCr(10,2);
    nCr(20,4);
}    
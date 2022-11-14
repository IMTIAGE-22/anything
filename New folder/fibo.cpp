#include <bits/stdc++.h>
#include<fstream>
#define ll unsigned long long int
using namespace std;
ll cnt1,cnt2;

void fib1(ll n,ll term1,ll term2)
{
    if(n==0){cnt1++; return ;}
    cout<<term1<<" "; cnt1++;
    fib1(n-1,term2,term1+term2);
    cnt1++;
}
void fib2(ll n)
{
   ll i,arr[n+1];
   arr[1]=0;  cnt2++;
   arr[2]=1;  cnt2++;
   cout<<arr[1]<<" "<<arr[2]<<" "; cnt2++;
   for(i=3; i<=n; i++)
   {
       arr[i]=arr[i-1]+arr[i-2]; cnt2++;
       cout<<arr[i]<<" "; cnt2++;
   }
}

int main()
{
    system("color f0");
    ll n,term1=0,term2=1;
    cout<<"Enter number of terms you want to print: ";
    ifstream input;
    input.open("fibonacci.txt");
    input>>n;
    cout<<n;
    cout<<"\nFirst "<<n<<" terms of fibonacci numbers(using Recursion) are:\n";
    fib1(n,term1,term2);
    cout<<endl;

    cout<<"\nFirst "<<n<<" terms of fibonacci numbers(using Iteration) are:\n";
    fib2(n);
    cout<<endl;
    input.close();
    cout<<"\nRecursion procedure takes "<<cnt1<<"steps\n";
    cout<<"Iteration procedure takes "<<cnt2<<"steps\n";
}


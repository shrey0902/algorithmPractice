#include<iostream>
using namespace std;

int fact(int n)
{
if(n==0)
return 1;
int big = n* fact(n-1);
return big;



}


int main ()
{
int n ;
cout<<"input a number: ";
cin>>n;
int answer= fact(n);

cout<<"The factorial of "<<n<<" is "<<answer;


}
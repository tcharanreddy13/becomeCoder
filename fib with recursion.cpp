#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
	int n;
	cin>>n;
	int x=fib(n);
	cout<<x;
	return 0;
}

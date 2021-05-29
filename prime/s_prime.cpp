#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,count=0;
	cin>>x;
	for(int i=2;i<(x/2);i++){
		if(x%i==0){
			count++;
		}
	}
	if(count>=1){
		cout<<"Not Prime";
	}
	else{
		cout<<"Prime";
	}
	return 0;
}

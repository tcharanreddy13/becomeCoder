#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[n],flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				flag++;
				break;
			}
		}
	}
	if(flag==0){
		cout<<"Given array is sorted.";
	}
	else{
		cout<<"Given array is not sorted!";
	}
	return 0;
}

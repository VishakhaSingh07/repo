#include<bits/stdc++.h>
using namespace std;

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r",stdin);
	// freopen("output.txt", "w",stdout);
	// #endif
	//abcdefghijklmnopqrstuvwxyz

	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if((a[i-1]-a[i])>0){
			sum=sum+(a[i-1]-a[i]);
		}
	}
	cout<<sum;
	
	cout<<"Hey there , how are you?"



	return 0;
}

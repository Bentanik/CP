#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int n;
	cin>>n;
	while(n--){
		int N, M;
		cin>>N>>M;
		if(N<=M) cout<<N;
		else cout<<2*N-M;
		cout<<"\n";
	}
	return 0;
}
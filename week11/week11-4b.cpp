//part2
#include <iostream>
using namespace std;
int f(int n){	//BoPiFa
	int ans=0;
	while(n>0){
		ans+=n%10;
		n=n/10;
	}
	return ans;
}
int main()
{
	int n;
	while(cin >> n){
		if(n==0) break;
		n=f(f(f(n)));	//part3
		cout << n << "\n";
	}
}
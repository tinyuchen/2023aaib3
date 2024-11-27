#include <iostream>
using namespace std;
int main()
{
	int T,N,a[1000];
	cin >> T;
	for(int t=1;t<=T;t++){
		char c,c1;
		cin >> c >> c1 >> N;
		
		for(int i=0;i<N*N;i++) cin >> a[i];
		
		int bad=0;
		for(int i=0;i<N*N;i++){
			if(a[i] != a[N*N-1-i] || a[i]<0) bad=1;
		}
		
		if(bad==0) cout << "Test #" << t << ": Symmetric.\n";
		else cout << "Test #" << t << ": Non-symmetric.\n";
	}
}
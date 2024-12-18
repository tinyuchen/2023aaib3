//not finish
#include <iostream>
#include <string>	//(line 6)
using namespace std;
int main()
{
	string hello;
	int t=1;
	while(cin >> hello){
		if(hello == "#") break;
		
		
		cout << "Case " << t << ": ENGLISH\n";
		t++;
	}
}
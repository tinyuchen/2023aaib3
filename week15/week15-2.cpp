//finish
#include <iostream>
#include <string>	//(line 6)
using namespace std;
int main()
{
	string hi;
	int t=1;
	while(cin >> hi){
		if(hi == "#") break;
		cout << "Case " << t << ": ";
		if(hi=="HELLO") cout<<"ENGLISH\n";
		else if(hi=="HOLA") cout<<"SPANISH\n";
		else if(hi=="HALLO") cout<<"GERMAN\n";
		else if(hi=="BONJOUR") cout<<"FRENCH\n";
		else if(hi=="CIAO") cout<<"ITALIAN\n";
		else if(hi=="ZDRAVSTVUJTE") cout<<"RUSSIAN\n";
		else cout<<"UNKNOWN\n";
		t++;
	}
}
///week03���Ҹ��D�ءG���c�ȺɡA���L�k����C
///�]�� range-based for �j�� �����b C++11 (2011�~����)�~��ΡC
///�p�G�ϥ� C++98 ((1998�~����C++) �|�L�k���T�sĶ�A����|���~�A�j��X���ӡC
///CodeBlocks 17.12 �� Setting-Compiler �Ĳ�2�� -std=c++11�A

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c:s){
		if(c!='2') cout << c;
	}
	cout << "\n";
}

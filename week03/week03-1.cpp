///week03的考試題目：除惡務盡，但無法執行。
///因為 range-based for 迴圈 必須在 C++11 (2011年之後)才能用。
///如果使用 C++98 ((1998年版的C++) 會無法正確編譯，執行會錯誤，迴圈出不來。
///CodeBlocks 17.12 裡 Setting-Compiler 勾第2個 -std=c++11，

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

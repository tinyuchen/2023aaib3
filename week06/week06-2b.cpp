///CPE �ĤG�D UVA 10107 - What is the Median?
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int now;
    while(cin >> now){
        a.push_back(now);
        int N = a.size();
        if(N%2==1) cout << a[N/2] << endl;
        else cout << (a[N/2-1]+a[N/2])/2 << endl;
        ///cout << now;
    }
}
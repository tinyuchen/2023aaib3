///�iSTL vector�j
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>a; ///���Y�ۦp�B�i�ܧ���ת��}�C
    a.push_back(30);
    a.push_back(20);
    a.push_back(10);
    for(int i=0;i<3;i++){
        cout << a[i] << "\n";
    }
    sort(a.begin(),a.end()); ///�p��j�Ʀn
    for(int i=0;i<3;i++){
        cout << a[i] << " ";
    }
}

///�ǲ߸�Ƶ��c struct vs. class ��Ӭ�
#include <iostream>
#include <string>   ///���FCat�ߪ��W�r
using namespace std;
///struct Node {};      ///������������ C�y�������c
///class Cat {};
struct Node {
    int val;
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1;
    cat1.name="cattie";
    Node node;
    node.val=1;
}

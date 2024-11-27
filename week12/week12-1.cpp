///學習資料結構 struct vs. class 對照看
#include <iostream>
#include <string>   ///為了Cat貓的名字
using namespace std;
///struct Node {};      ///都有分號結尾 C語言的結構
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

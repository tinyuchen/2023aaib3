#include <iostream>
using namespace std;
int main()
{
    int n =12345;
    cout << "原本的n是：" << n << "\n\n";

    cout <<"剝下最右邊的皮：" << n%10 << "\n";
    n/=10;
    cout <<"n變小了。現在是：" << n << "\n\n";

    cout <<"剝下最右邊的皮：" << n%10 << "\n";
    n/=10;
    cout <<"n變小了。現在是：" << n << "\n\n";

    cout <<"剝下最右邊的皮：" << n%10 << "\n";
    n/=10;
    cout <<"n變小了。現在是：" << n << "\n\n";

    cout <<"剝下最右邊的皮：" << n%10 << "\n";
    n/=10;
    cout <<"n變小了。現在是：" << n << "\n\n";

    cout <<"剝下最右邊的皮：" << n%10 << "\n";
    n/=10;
    cout <<"n變小了。現在是：" << n << "\n\n";
}

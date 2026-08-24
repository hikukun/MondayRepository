#include <iostream>
using namespace std;

int main(void)
{
    //変数宣言
    int a = 0;
    //ポインターでaのアドレスを取得
    int* p = &a;
    //aを表示する
    cout << "aの初期値: " << a << endl;
    //pからaの内容を変更
    *p = 10;
    //aを表示する
    cout << "aの変更後の値: " << a << endl;

    return 0;
}
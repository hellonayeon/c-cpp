#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "두 수를 입력하라 >> ";
    cin >> num1 >> num2;

    int res = (num1 > num2) ? num1 : num2;
    cout << "큰 수 = " << res;
}
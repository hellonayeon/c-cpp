#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char password[11];
    cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;

    while(true) {
        cout << "암호: ";
        cin >> password;

        if(strcmp(password, "C++") == 0) {
            cout << "프로그램을 정상 종료합니다." << endl;
            break;
        }
        else {
            cout << "암호가 틀렸습니다." << endl;
        }
    }
}
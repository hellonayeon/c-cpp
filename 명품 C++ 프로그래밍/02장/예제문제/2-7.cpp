#include <iostream>
#include <string>
using namespace std;

int main() {
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "를 부른 가수는?";
    cout << "(힌트: 첫 글자는 " << elvis[0] << ")?" << endl;

    getline(cin, singer);
    if(singer == elvis) {
        cout << "맞았습니다.";
    }
    else {
        cout << "틀렸습니다. " + elvis + "입니다." << endl;
    }
}
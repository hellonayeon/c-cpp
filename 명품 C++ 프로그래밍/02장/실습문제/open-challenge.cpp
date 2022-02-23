#include <iostream>
#include <string>
using namespace std;

int main() {
    string res1, res2;

    cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << '\n';
    
    
    cout << "로미오" << " >> ";
    cin >> res1;

    cout << "줄리엣" << " >> ";
    cin >> res2;

    if ((res1 == "가위" && res2 == "보") || (res1 == "바위" && res2 == "가위") || (res1 == "보" && res2 == "바위")) {
        cout << "로미오가 이겼습니다." << endl;
    }
    else if ((res2 == "가위" && res1 == "보") || (res2 == "바위" && res1 == "가위") || (res2 == "보" && res1 == "바위")) {
        cout << "줄리엣이 이겼습니다." << endl;
    }
    else {
        cout << "비겼습니다." << endl; 
    }
}
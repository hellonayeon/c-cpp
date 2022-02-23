#include <iostream>
using namespace std;

int main() {
    
    cout << "5 개의 실수를 입력하라 >> ";
    
    float max = 0.0;
    for (int i=0; i<5; i++) {
        float num;
        cin >> num;

        if (num > max) {
            max = num;
        }
    }

    cout << "제일 큰 수 = " << max << endl;
}
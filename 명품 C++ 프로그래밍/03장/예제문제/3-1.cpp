#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    double getArea();
};

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main()
{
    Circle donut; // 클래스 크기의 메모리가 할당
    donut.radius = 1;
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}
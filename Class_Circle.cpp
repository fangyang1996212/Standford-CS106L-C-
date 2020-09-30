// 了解封装的第一层含义：将属性和行为作为一个整体，表现生活中的事物
#include<iostream>
using namespace std;

const double pi = 3.14;

class Circle{
public:
    // 属性
    double r;
    
    // 行为
    double calculate_perimeter(){
        return 2*pi*r;
    }
};

int main(){
    Circle c1;
    c1.r = 2;
    cout << "圆的周长为： " <<c1.calculate_perimeter() << endl;
}

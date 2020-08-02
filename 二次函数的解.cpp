//  make_pair 的意思:
//  Creators (a.k.a. make_X) allows you to create
//  aggregate structures without ever figuring out the types.

#include <iostream>
#include <math.h>
using namespace std;

pair<bool, pair<double, double>> quadratic(int a, int b, int c)
{
    double D = b*b - 4*a*c;
    pair<double, double> blank;
    if(D < 0) return make_pair(false, blank);
    
    pair<double, double> answer = make_pair((-b - sqrt(D)) / (2*a), (-b + sqrt(D)) / (2*a));
    return make_pair(true, answer);
}

int main()
{
    int a, b, c;
    cout<<"Please input constant：";
    cin>>a >> b >> c;
    
    auto [found, solutions] = quadratic(a, b, c);
    
    if(found)
    {
        auto [x1, x2] = solutions;
        cout<<"Solutions: "<<x1 <<' '<<x2 <<endl;
    }else{
        cout<<"no solution!" <<endl;
    }
}

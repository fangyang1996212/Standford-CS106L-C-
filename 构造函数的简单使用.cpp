#include <iostream>
#include<stdio.h>
using namespace std;

struct StudentIfo{
    int id;
    char gender;
    
    //定义不初始化的构造函数
    StudentIfo(){};
    
    //定义初始化一个参数的构造函数
    StudentIfo(int _id): id(_id){};
    StudentIfo(char _gender): gender(_gender){};
    
    //定义初始化两个参数的构造函数
    StudentIfo(int _id, char _gender): id(_id),gender(_gender) {};
};

int main(){
    StudentIfo a;
    a.id = 2019;
    StudentIfo b(123,'M');
    StudentIfo c(99);
    StudentIfo d('F');
    
    printf("%d %c",a.id,b.gender);
    printf("\n");
    
    return 0;
}

/******************* C++ 实现 *****************************/
//#include<iostream>
//#include<string>
//#include<vector>
//#include <fstream>
//#include <algorithm>
//#include "Stack.hpp"
//using namespace std;
//
//class StudentIfo{
//public:
//    StudentIfo(){};
//    StudentIfo(int id): _id(id){};
//    //StudentIfo(int id, string name): _id(id),_name(name){};
//    
//private:
//    int _id;
//    string _name;
//};
//
//int main(){
//    StudentIfo fy;
//    StudentIfo yf(12);
//    StudentIfo jack(12, "abc");
//}


#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Stack{
public:
    bool push(const string&);
    bool pop(string &elem);
    bool peek(string &elem); //查看栈顶元素
    void print(vector<string> _stack);
    
    bool empty();
    bool full();
    
    int size(){return _stack.size();} // 在类里面定义，所以size（）为内联函数
    
private:
    vector<string> _stack;
};

inline bool
Stack::empty(){
    return _stack.empty();
}

inline bool
Stack::full(){
    return _stack.size() == _stack.max_size(); // 把当前元素个数和底层vector设计的所能容纳的最大元素个数比较
}

#endif /* Stack_hpp */

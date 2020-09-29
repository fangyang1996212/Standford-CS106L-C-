
#include "Stack.hpp"
#include <string>
#include <vector>

bool Stack::push(const string &elem){
    if(full()) // 栈满则不能进栈啦！
        return false;
    
    _stack.push_back(elem);
    return true;
}

bool Stack::pop(string &elem) // 删除值为 elem 的元素
{
    if(empty())
        return false;
    
    elem = _stack.back(); // 用栈顶元素值去覆盖 elem 元素所在空间的值，相当于删除了 elem
    _stack.pop_back(); // 删除栈顶元素
    return true;
}

bool Stack::peek(string &elem)
{
    if(empty())
        return false;
    elem = _stack.back();
    return true;
}

void Stack::print(vector<string> elem)
{
    for(int i=0; i < elem.size(); i++)
       {
           cout << elem[i] << endl;
       }
}

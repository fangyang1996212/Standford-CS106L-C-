#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include <algorithm>
#include "Stack.hpp"
using namespace std;


int main(){
    Stack st;
    string str;
    
    cout << "Please enter a series of strings.\n";
    while (cin >> str && !st.full()) {
        if(str == "quit") //输入quit终止入栈
            break;
        st.push(str);
    }
    
    if(st.empty()){
        cout << '\n' << "The Stack is empty!" <<endl;
    }
    
    //st.print(st);
    cout << "There are now " << st.size() << " elements in Stack." << endl;
    
    st.pop(str);
    cout << "\nAfter pop :\n"
        <<"There are now " << st.size() << " elements in Stack.\n" << endl;
    
    return 0;
}

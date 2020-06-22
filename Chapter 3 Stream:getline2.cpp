// 减少代码 Clunky

#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream capitals("/Users/apple/Desktop/C++ Project/Standford Project/Standford C++/world-capitals.txt");
    
    if (!capitals.is_open()) {
        cerr << "Cannot find the file world-capitals.txt" << endl;
        return -1;
    }
    
    string capital, country;
    
    while (getline(capitals, capital) && getline(capitals, country)) {
        
        if (capitals.fail()) break;
        cout << capital << " is the capital of " << country << endl;
    }
}

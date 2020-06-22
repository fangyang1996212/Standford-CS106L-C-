//  暴力解法，代码很笨重 Clunky
//  一行行的读取数据，读取首都名，国家名

#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream capitals("/Users/apple/Desktop/C++ Project/Standford Project/Standford C++/world-capitals.txt");
    
    if (!capitals.is_open()) {
        cerr << "Cannot find the file world-capitals.txt" << endl;
        return -1;
    }
    while (true) {
        string capital, country;
        getline(capitals, capital);
        getline(capitals, country);
        
        if (capitals.fail()) break;
        
        cout << capital << " is the capital of " << country << endl;
    }
}

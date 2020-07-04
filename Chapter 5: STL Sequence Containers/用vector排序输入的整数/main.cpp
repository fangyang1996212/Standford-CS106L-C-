//
//  main.cpp
//  Standford_C++
//
//  Created by FY on 2020/6/25.
//  Copyright © 2020 WH-JS. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "function_declare.h"
using namespace std;

string GetLine();
int GetInteger();

const int kNumValues = 10;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> values;
    
    for(int i=0; i<kNumValues; ++i)
    {
        cout<< "Enter another value: ";
        int val = GetInteger();
        
        values.push_back(val);
        
    }
    SelectionSort(values);
    for (size_t i = 0; i < kNumValues; ++i)
        cout << values[i] << endl;
 
    return 0;
}

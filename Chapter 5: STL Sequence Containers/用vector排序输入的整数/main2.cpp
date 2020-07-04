// 方法2，用了STL的迭代器 v.insert()

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "function.hpp"
using namespace std;

string GetLine();
int GetInteger();
size_t InsertionIndex(vector<int>& v, int toInsert);

const int kNumValues = 10;

int main() {
     vector<int> values;
     /* Read the values. */
     for (int i = 0; i < kNumValues; ++i) {
         cout << "Enter an integer: ";
         int val = GetInteger();
         
         /* Insert the element at the correct position. */
        values.insert(values.begin() + InsertionIndex(values, val), val);
     }
     /* Print out the sorted list. */
     for (size_t i = 0; i < values.size(); ++i)
            cout << values[i] << endl;
 }


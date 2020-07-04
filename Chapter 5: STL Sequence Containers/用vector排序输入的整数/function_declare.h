

#ifndef function_declare_hpp
#define function_declare_hpp

#include<iostream>
#include<vector>
using namespace std;

string GetLine();
int GetInteger();
size_t GetSmallestIndex(vector<int>& v, size_t startIndex);
void SelectionSort(vector<int>& v);
size_t InsertionIndex(vector<int>& v, int toInsert)；

#endif 

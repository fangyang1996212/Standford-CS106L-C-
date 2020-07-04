#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;


string GetLine() {
    string result;
    getline(cin, result);
    return result;
}


int GetInteger() {
    while(true) { // Read input until user enters valid data
    stringstream converter;
    converter << GetLine();
    /* Try reading an int, continue if we succeeded. */
    int result;
    if(converter >> result) {
        char remaining;
        if(converter >> remaining) // Something's left, input is invalid
            cout << "Unexpected character: " << remaining << endl;
        else
            return result;
    } else
        cout << "Please enter an integer." << endl;
        
        cout << "Retry: ";
    }
}


size_t GetSmallestIndex(vector<int>& v, size_t startIndex) {
        size_t bestIndex = startIndex;
        for (size_t i = startIndex; i < v.size(); ++i)
            if (v[i] < v[bestIndex])
                bestIndex = i;
    
      return bestIndex;
 }


void SelectionSort(vector<int>& v) {
       for (size_t i = 0; i < v.size(); ++i) {
            size_t smallestIndex = GetSmallestIndex(v, i); // We'll write this
                                                           // function momentarily
           
            swap (v[i], v[smallestIndex]);
       }
}


size_t InsertionIndex(vector<int>& v, int toInsert) {
    for(size_t i = 0; i < v.size(); ++i)
        if (toInsert < v[i])
        return i;
    return v.size();
}


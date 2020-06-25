#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

void DrawTriangle(int height, char c)
{
    for(int i=0; i<height; ++i)
    {
        cout<<setfill(' ')<<setw(height-i)<<"";
        cout<<setfill(c)<<setw(2*i+1)<<""<<endl;
    }
}

int main() {
    
    DrawTriangle(9, '#');
    
}

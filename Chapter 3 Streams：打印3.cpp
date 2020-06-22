// 对 PrintBody的改进，利用 while(input>>intValue>>doubleValue)来遍历整个文件，当读取完毕的时候退出循环.
// 不要用 while(!input.fail()) ,因为程序关心流读取，至少会循环一次，而不是读文件为空或者读取完就立马终止

#include<iostream>
#include<fstream>
using namespace std;
//const int LINE_NUM = 4;
const int COLUMN_NUM = 3;
const int COLUMN_WIDTH = 20;

void PrintHeader()
{
  for(int column=0; column<COLUMN_NUM-1; ++column)
  {
    cout<<setfill('-')<<setw(COLUMN_WIDTH)<<""<<"-+-";  // 注意这里的一个trick，setw(20)后面是“”表示没有字符，所以这二十个宽度都用‘-’来填充
  }
  cout<<setw(COLUMN_WIDTH)<<""<<setfill(' ')<<endl;
}

void PrintBody()
{
  ifstream input("/Users/apple/Desktop/C++ Project/Standford Project/Standford C++/table-data.txt");
  
  int intValue;
  double doubleValue;
  int i=0;
  
  while(input>>intValue>>doubleValue)
  {
    cout<<setw(COLUMN_WIDTH)<<++i<<" | ";
    cout<<setw(COLUMN_WIDTH)<<intValue<<" | ";
    cout<<setw(COLUMN_WIDTH)<<doubleValue<<endl;
  }
}

int main()
{
  PrintHeader();
  PrintBody();
  return 0;
}

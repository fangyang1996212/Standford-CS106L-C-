// 暴力法画出
// --------------------+----------------------+---------------------
//                   1 |                  137 |              2.71828
//                   2 |                   42 |              3.14159
//                   3 |              7897987 |                1.608
//                   4 |                 1337 |            0.0110101


#include<iostream>
#include<fstream>
using namespace std;

const int COLUMN_NUM = 3;
const int LINE_NUM = 4;
const int COLUMN_WIDTH = 20;

// 打印 --------------------+----------------------+---------------------
void PrintHeader()
{
  for(int column=0; column<COLUMN_NUM-1; ++column)
  {
    for(int i=0; i<COLUMN_WIDTH; ++i)
    {
      cout<<'-';
    }
    cout<<"-+-";
    
  }
  
  for(int i=0; i<COLUMN_WIDTH; ++i)
  {
    cout<<'-';
  }
  cout<<endl;
}

void PrintBody()
{
  ifstream input("打开文件的绝对路径");
  
  for(int i=0; i<LINE_NUM; ++i)
  {
    int intValue;
    double doubleValue;
    input>>intValue>>doubleValue;
      
    cout<<setw(COLUMN_WIDTH)<<i+1<<" | "; // setw(20)的意思是加后面的（i+1）这个数字一共占20个字符。
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

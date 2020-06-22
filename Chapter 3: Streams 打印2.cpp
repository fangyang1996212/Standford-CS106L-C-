// 利用 setfill，改进 PrintHeader（）函数，注意 setfill 有‘永恒性’（permanently），要用 setfill(' ') 来取消。

#include<iostream>
#include<fstream>

const int LINE_NUM = 4;
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
  ifstream input("打开文件的绝对路径");
  
  for(int i=0; i<LINE_NUM; ++i)
  {
    int intValue;
    double doubleValue;
    
    input>>intValue>>doubleValue;
    
    cout<<setw(COLUMN_WIDTH)<<i+1<<" | ";
    cout<<setw(COLUMN_WIDTH)<<intValue<<" | ";
    cout<<setw(COLUMN_WIDTH)<<doubleValue<<endl;;
  }
}

int main()
{
  PrintHeader();
  PrintBody();
  return 0;
}

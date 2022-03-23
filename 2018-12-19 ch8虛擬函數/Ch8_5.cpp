#include <iostream.h>
#include "ch8_5.h"
void display(School& s);
int main()
{
 Student stu1( "蔡承宏","電子工程","FPGA", "金門大學" ,"網球社" );
 Student stu2( "李東穎","電機工程", "計算機工程","中興大學" ,"桌球社" );
 display(stu1);
 display(stu2);
 cout<<"\n";
 system("pause");
 return 0;
}
void display(School& s)
{
 s.show();
} 

#include <iostream.h>
#include "ch8_5.h"
void display(School& s);
int main()
{
 Student stu1( "���ӧ�","�q�l�u�{","FPGA", "�����j��" ,"���y��" );
 Student stu2( "���F�o","�q���u�{", "�p����u�{","�����j��" ,"��y��" );
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

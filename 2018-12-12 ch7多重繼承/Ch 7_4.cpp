#include <iostream.h>
#include "ch7_4.h"
int main()
{
 Student_EE stu1("蔡承宏","110510216","s110510216@student.nqu.edu.tw","理工學院",98,99,99,99,100);
 Student_AC stu2("余河天","801014","msn0459789123@gmail.com","理工學院",90,91,87,92,97);
 cout <<"\n登錄後的學生資料顯示.....";
 cout <<"\n\n第一位電子科學生.....";
 stu1.showdata();
 cout <<"\n\n第一位機械科學生.....";
 stu2.showdata();
 cout<<"\n";
 system("pause");
 return 0;
} 

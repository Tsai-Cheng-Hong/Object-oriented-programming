#include <iostream.h>
#include "ch7_4.h"
int main()
{
 Student_EE stu1("���ӧ�","110510216","s110510216@student.nqu.edu.tw","�z�u�ǰ|",98,99,99,99,100);
 Student_AC stu2("�E�e��","801014","msn0459789123@gmail.com","�z�u�ǰ|",90,91,87,92,97);
 cout <<"\n�n���᪺�ǥ͸�����.....";
 cout <<"\n\n�Ĥ@��q�l��ǥ�.....";
 stu1.showdata();
 cout <<"\n\n�Ĥ@������ǥ�.....";
 stu2.showdata();
 cout<<"\n";
 system("pause");
 return 0;
} 

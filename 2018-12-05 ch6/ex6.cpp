#include <iostream>
#include "ex6.h"
using namespace std;
int main()
{
 cout << "\n���u��ƿ�J....." ;       //
 Manager a1;              //¾��
 a1.getdata();
 Salesman a2;            //�~�Z
 a2.getdata();
 Operator a3;               //�u�� 
 a3.getdata();
 cout << "\n���u������.......";
 a1.showdata();                        //
 a2.showdata();
 a3.showdata();
 cout<<"\n";
 system("pause");
 return 0;
}


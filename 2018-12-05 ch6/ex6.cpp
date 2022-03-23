#include <iostream>
#include "ex6.h"
using namespace std;
int main()
{
 cout << "\n員工資料輸入....." ;       //
 Manager a1;              //職稱
 a1.getdata();
 Salesman a2;            //業績
 a2.getdata();
 Operator a3;               //工時 
 a3.getdata();
 cout << "\n員工資料顯示.......";
 a1.showdata();                        //
 a2.showdata();
 a3.showdata();
 cout<<"\n";
 system("pause");
 return 0;
}


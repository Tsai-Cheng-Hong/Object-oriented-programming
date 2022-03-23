#include <iostream.h>
#include "ch9_2.h"
int main()
{
 Complex a(3.0,4.0);
 Complex b(2.0,1.0);
 Complex c;
 cout<<"\n第一個複數=";
 a.showdata();
 cout<<"\n第二個複數=";
 b.showdata();
 cout<<"\n相加結果...";
 c=a+b;

c.showdata();
 cout<<"\n相減結果...";
 c=a-b;
 c.showdata();
 cout<<"\n相乘結果...";
 c=a*b;
 c.showdata();
 cout<<"\n相除結果...";
 c=a/b;
 c.showdata();
  cout<<"\n共軛結果...";
 c=a%b;
 c.showdata();
 cout<<"\n";
 system("pause");
 return 0;
}


#include <iostream.h>
#include "ch9_2.h"
int main()
{
 Complex a(3.0,4.0);
 Complex b(2.0,1.0);
 Complex c;
 cout<<"\n�Ĥ@�ӽƼ�=";
 a.showdata();
 cout<<"\n�ĤG�ӽƼ�=";
 b.showdata();
 cout<<"\n�ۥ[���G...";
 c=a+b;

c.showdata();
 cout<<"\n�۴�G...";
 c=a-b;
 c.showdata();
 cout<<"\n�ۭ����G...";
 c=a*b;
 c.showdata();
 cout<<"\n�۰����G...";
 c=a/b;
 c.showdata();
  cout<<"\n�@�m���G...";
 c=a%b;
 c.showdata();
 cout<<"\n";
 system("pause");
 return 0;
}


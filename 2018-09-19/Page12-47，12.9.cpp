#include <iostream>
#include <cstdlib>
using namespace std;
class CRect
{
   public:
      int width;
      int height;
      double weight;
      void set(double wg)
      {
          weight=wg;
      }
      void set(int w,int h)
      {
         height=h;
         width=w;
      }
      void set(double wg,int w,int h)
      {
         height=h;
         width=w;
         weight=wg;
      }
      void show()
      {
      	cout << "輸入高度=" <<endl;
      	 cin>>height;
      	cout << "輸入寬度=" <<endl;
      	 cin>>width;
      	cout << "輸入重度=" <<endl;
      	 cin>>weight;
         cout << "高度=" << height << endl;
         cout << "寬度=" << width << endl;
         cout << "重度=" << weight<< endl;
      }
};

int main(void)
{
   CRect A,B,C;
   int height,width,weight;
   A.set(height);
   A.set(width);
   A.set(weight);
   cout<< "A:" << endl;
   A.show();
   
   B.set(height);
   B.set(width);
   B.set(weight);
   cout << endl << "B:" << endl;
   B.show();
   
   C.set(height);
   C.set(width);
   C.set(weight);

   cout << endl << "C:" << endl;
   C.show();
   system("PAUSE");
   return 0;
}


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
      	cout << "��J����=" <<endl;
      	 cin>>height;
      	cout << "��J�e��=" <<endl;
      	 cin>>width;
      	cout << "��J����=" <<endl;
      	 cin>>weight;
         cout << "����=" << height << endl;
         cout << "�e��=" << width << endl;
         cout << "����=" << weight<< endl;
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


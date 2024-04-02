#include<iostream>
using namespace std;
class a
{
      public:
             int a1,b1;
             void get()
             {
                  cout<<"Enter the values of a & b";
                  cin>>a1>>b1;
                  }
};
class b:public a
    {
               public:
                      void mul()
                      {
                           cout<<"Multiplication is:"<<a1*b1;
                           }
};
int main()
{
    b b1;
    b1.get();
    b1.mul();
    return 0;
}                                           


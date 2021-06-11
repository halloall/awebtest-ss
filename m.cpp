#include <iostream>
using namespace std;
int func ()
{
    return sizeof(bool);

}
int main ()
{
   cout << func() << endl; // 输出 Hello World
   return 0;
}

#include<iostream.h>
using namespace std;
class A
{
    private:
    int x,y;
    public:
    friend void setdata();
};
void setdata()
{
    A.o;
    o.x=10;
    o.y=20;
    cout<<"x"<<o.x<<endl;
    cout<<"y"<<o.y<<endl;
}
int main()
{
    setdata();
    return 0;
}

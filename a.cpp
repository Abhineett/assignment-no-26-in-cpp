#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
public:
    void setData(int x,int y)
    {

        a=x;
        b=y;
    }
    void add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        cout<<temp.a<<"+"<<temp.b<<"!";




    }
    void showData()
    {

        cout<<a<<"+"<<b<<"!"<<endl;
    }


};
int main()
{
    int a,b;
    int c,d;
    cin>>a>>b;
    cin>>c>>d;
    complex c1,c2;
    c1.setData(a,b);
    c1.showData();
    c2.setData(c,d);
    c2.showData();
    c1.add(c2);





    return 0;

}

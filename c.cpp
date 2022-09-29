#include<iostream>
using namespace std;
class cube
{
    int s;
public:
    void setside(int a)
    {

        s=a;
    }
    void volume()
    {
        cube temp;
        temp.s=s*s*s;
        cout<<temp.s;



    }
    cube
    {


    }




};
int main()
{
    int a;
    cin>>a;
    cube c1;
    c1.setside(a);
    c1.volume();


    return 0;
}

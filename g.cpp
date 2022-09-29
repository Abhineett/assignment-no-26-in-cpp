#include<iostream>
using namespace std;
class staticCount
{
public:

    static int n=0;

    void display()
    {
        cout<<n;

        n++;
    }




};
int main()
{
    staticCount c1;
    for(int i=1;i<4;i++)
    {

        c1.display();
    }

    return 0;
}

#include<iostream>
using namespace std;
class counter
{
    int count;
public:
    counter()
    {
        count=0;


    }
    void inc_count()
    {

        count++;
    }
    int getcount()
    {

        return count;
    }




};
int main()
{
    counter c1;
    cout<<c1.getcount();
    c1.inc_count();
    cout<<endl;
    cout<<c1.getcount();


    return 0;
}

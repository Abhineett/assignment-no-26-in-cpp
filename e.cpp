#include<iostream>
using namespace std;
class date
{

    int a,b,c;
public:
    date()
    {
        a=13;
        b=05;
        c=2022;


    }
    void display()
    {
        cout<<a<<"|"<<b<<"|"<<c;


    }
};
int main()
{
    date d1;
    //int d,m,y;
    d1.display();


    return 0;
}


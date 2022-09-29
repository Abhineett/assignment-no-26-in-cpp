#include<iostream>
using namespace std;
class time
{
 int h,m,s;
 public:
     void setTime(int H,int M,int S)
     {
        h=H;
        m=M;
        s=S;

     }
     void showTime()
     {
         cout<<h<<"hour"<<" "<<m<<"minute"<<" "<<s<<"second"<<endl;



     }
     void add(time t)
     {
         time temp;
         temp.h=h+t.h;
         temp.m=m+t.m;
         temp.s=s+t.s;
         cout<<temp.h<<" "<<temp.m<<" "<<temp.s;


     }


};
int main()
{
    int hour,minu,sec;
    cin>>hour>>minu>>sec;

    time t1,t2;
    t1.setTime(t2);
    t1.showTime();
    t2.setTime(hour,minu,sec);
    t2.showTime();
    t1.add(t2);



}

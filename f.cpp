#include<iostream>
using namespace std;
class student
{
    int rollnum;
    char nam[20];
    int fee;
public:

    student()
    {
      cout<<"Enter roll number=";
      cin>>rollnum;
      cout<<endl;
      cout<<"Enter name=";
      cin>>nam;
      cout<<endl;
      cout<<"enter fee=";
      cin>>fee;

    }
    void display()
    {
        cout<<"rollnumber="<<rollnum;
        cout<<endl;
        cout<<"name="<<nam;
        cout<<endl;
        cout<<"fee="<<fee;

    }


};
int main()
{
    student s1;
    s1.display();

    return 0;
}

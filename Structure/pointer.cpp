#include<iostream>
using namespace std;

struct demo{
    int age;
    string name;

    void show()
    {
        cout<<age<<" "<<name<<endl;
    }
};

int main()
{
    demo a,b;
    demo *p;

    a.name="jatin";
    a.age=25;

    b.name="Shubham";
    b.age=40;
    b.show();

    p=&a;
    p->age=10;
    p->show();
    a.show();
}
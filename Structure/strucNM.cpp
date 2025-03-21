// #include<iostream>
// using namespace std;

// struct student {
//     int roll;
//     string name;
//     char grade;
// };

// int main()
// {

//     student s;
//     s.roll=101;
//     s.name="jatin";
//     s.grade='A';

//     cout<<s.roll<<" "<<s.name<<" "<<s.grade;
// }



#include<iostream>
using namespace std;

struct student {
    private:
    int contract;
    public:
    string name;
    char grade;

    void rollno(int x)
    {
        contract=x;
    }

    void show()
    {
        cout<<contract<<" "<<name<<" "<<grade<<endl;
    
    }
};

int main()
{
    student f;
    f.rollno(74839);
    f.name="Harsh";
    f.grade='A';
    f.show();

    student m;

    m.name="vivek";
    m.grade='A';
    m.show();
}


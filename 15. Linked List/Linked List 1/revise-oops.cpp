#include <bits/stdc++.h>
using namespace std;
    class student
        {
            public:
            string name;
            int rno;
            int marks;
            student(string name,int rno,int marks)
                {
                    this->name=name;
                    this->marks=marks;
                    this->rno=rno;
                }
        };
    void change(student* s)
        {
            s->name="maruf";
        }    
    int main()
        {
            student* s=new student("Shuvo",22,80);
            cout<<s->name<<endl;
            change(s);
            cout<<s->name<<endl;
        }
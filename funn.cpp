#include<iostream>
using namespace std;

void student(string name,int sci,int eng,int maths)
{
    cout <<"enter the student name "<<name<<"\n";
    cout <<"enter the student science marks"<<sci<<"\n";
    cout <<"enter the student english marks"<<eng<<"\n";
    cout <<"enter the student maths marks"<<maths<<"\n";

      int total=sci+eng+maths;
        cout << "total marks is"<<total<<"\n";

        int avg=total/3;
        cout << "average of student"<<avg<<"\n";

        if(avg>50)
        {
            cout <<" student pass";
        }
        else
        {
            cout << "student fail";

        }
}

int main()
{
    string name;
    int a,b,c,i;
    for(i=1;i<=2;i++)
    {
    cout << "enter the student name =";
    cin >> name;
    cout << "enter the science marks =";
    cin >> a;
    cout << "enter the student english name =";
    cin >> b;
    cout << "enter the mathes marks =";
    cin >> c;
        student(name,a,b,c);  
    }  
}
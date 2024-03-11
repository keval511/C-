#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int idno;
    int maths;
    int science;
    int ss;
        void create(string a,int b,int c,int d,int e){
        name=a;
        idno=b;
        maths=c;
        science=d;
        ss=e;
        }
        void get(){
            cout<<name<<"\t";
            cout<<idno<<"\t";
            cout<<maths<<"\t";
            cout<<science<<"\t";
            cout<<ss<<"\t";

            int total=maths+science+ss;
            cout<<total<<"\t";  
            int avg=total/3;
            cout<<avg<<"%\t";
            if(90<avg)
            {
                cout<<"A+ GRADE"<<"\n";
            }
            else if(80<avg)
            {
                cout<<"A GRADE"<<"\n";
            }
            else if(70<avg)
            {
                cout<<"B GRADE"<<"\n";
            }
            else if(60<avg)
            {
                cout<<"C GRADE"<<"\n";
            }
            else if(50<avg)
            {
                cout<<"D GRADE"<<"\n";
            }
            else if(33<avg)
            {
                cout<<"PASS"<<"\n";
            }
            else
            {
                cout<<"FAIL"<<"\n";
            }
        }
};
int main()
{
    student s[10];
    int i,n,l,m,o,p,y,num;
    string k;
    cout<<"enter the num loop";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        cout<<"enter the name of student name";
        cin>>k;
        cout<<"enter the student id no";
        cin>>l;
        cout<<"enter the student maths marks";
        cin>>m;
        cout<<"enter the student science marks";
        cin>>y;
        cout<<"enter the student ss marks";
        cin>>o;
        
    
     s[i].create(k,l,m,y,o);
}

cout<<"sname"<<"\t";
cout<<"id no"<<"\t";
cout<<"maths"<<"\t";
cout<<"science"<<"\t"<<" ";
cout<<"ss"<<"\t";
cout<<"total"<<"\t";
cout<<"avg"<<"\t";
cout<<"grade"<<"\n";

cout<<"............................................................................."<<"\n";
cout<<"............................................................................."<<"\n";
for(int j=1;j<=num;j++)
{
    s[j].get();
}
}
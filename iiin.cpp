#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int m;
    int eng;
    int ss;
     student(string a,int b,int c,int d){
        name=a;
        m=b;
        eng=c;
        ss=d;
    
    }
    
    void get(){
        cout<<"student name ="<<name<<"\n";
        
        cout<<"student maths marks ="<<m<<"\n";
        
        cout<<"student eng marks ="<<eng<<"\n";
        
        cout<<"student ss marks ="<<ss<<"\n";
        
    
        int ans=(m+eng+ss);
        cout<<"total="<<ans<<"\n";
        int pr=ans/3;
        cout<<"pr is="<<pr<<"\n";
        
         if(90<pr)
        {
            cout<<"a+ grade"<<"\n";
        }
        else if(80<pr)
        {
            cout<<"a grade"<<"\n";
        }
        else if(70<pr)
        {
            cout<<"b grade"<<"\n";
        }
        else if(50<pr)
        {
            cout<<"c grade"<<"\n";
        }
        else if(33<pr)
        {
            cout<<"pass"<<"\n";
        }
    }
};

int main()
{
    int n;
    cout<<"enter the n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    string a;
    int b,c,d;
    cout<<"enter the name=";
    cin>>a;
    cout<<"enter the maths marks=";
    cin>>b;
    cout<<"enter the eng marks=";
    cin>>c;
    cout<<"enter the ss marks=";
    cin>>d;

    if(b<100 && c<100 && d<100){

    student s1(a,b,c,d);
     s1.get();
    }
    else{
        cout<<"error";
    }
}
}
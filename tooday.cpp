#include<iostream>
using namespace std;
class student{
    public:
    int idno;
    string name;
    int m;
    int eng;
    int ss;
     void create(string a,int b,int c,int d){
       
        name=a;
        m=b;
        eng=c;
        ss=d;
    }
    
    void get(){
        cout<<name<<"\t";
        
        cout<<m<<"\t";
        
        cout<<eng<<"\t";
        
        cout<<ss<<"\t";
        
    
        int ans=(m+eng+ss);
        cout<<ans<<"\t";
        int pr=ans/3;
        cout<<pr<<"\t";
        
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
        else 
        {
            cout<<"pass"<<"\n\n";
        }
    }
};

int main()
{
    string k;
    int m,b,c,d,n,i;
    cout<<"enter the n=";
    // cin>>n;
    int j,l;
    student s[5];



        for(int j=1;j<=2;j++)
        {

    cout<<"enter the name=";
    cin>>k;
    cout<<"enter the maths marks=";
    cin>>b;
    cout<<"enter the eng marks=";
    cin>>c;
    cout<<"enter the ss marks=";
    cin>>d;
    s[j].create(k,b,c,d);
            }    

        
        cout<<"sname"<<"\t";
        cout<<"maths"<<"\t";
        cout<<"eng"<<"\t";
        cout<<"ss"<<"\t";
        cout<<"total"<<"\t";
        cout<<"pr"<<"\t";
        cout<<"pass nd fail"<<"\n";  
        cout << "--------------------------------------------------------------------------------------------\n";      
        cout << "--------------------------------------------------------------------------------------------\n";      
    for(int j=1;j<=2;j++)
    {
        s[j].get();
    }
  
}
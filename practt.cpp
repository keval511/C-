#include<iostream>
using namespace std;
void student(string name,int rollno,int sci,int math,int eng)
{
    cout<<"enter the student name "<<name<<"\n";
    cout<<"enter the roll number "<<rollno<<"\n";
    cout<<"enter the science marks "<<sci<<"\n";
    cout<<"enter the math marks "<<math<<"\n";
    cout<<"enter the eng marks "<<eng<<"\n";

  int  total=sci+math+eng;
    cout<<total<<"\n";
  int avg=total/3;
  cout<<avg<<"\n";

if(80<avg)
{
    cout<<"A+"<<"\n";
}
   else if(70<avg)
   {
    cout<<"B+"<<"\n";
   } 
   else if(60<avg)
   {
    cout<<"C+"<<"\n";
   }
   else if(50<avg)
   {        
    cout<<"D+"<<"\n";
   }
   else
   {
    cout<<"need learn"<<"\n";
   }

}
void teacher(string sub,int lecno)
{
    cout<<"teacher subject name ="<<sub<<"\n";
    cout<<"teacher lecture number ="<<lecno<<"\n";
}
int main()
{
    string names;
    int i,j,k,l,m;
    for(m=1;m<=2;m++)
    {
    cout<<"enter the name"<<"\n";
    cin>>names;
    cout<<"enter the roll no"<<"\n";
    cin>>i;
    cout<<"enter the sci marks "<<"\n";
    cin>>j;
    cout<<"enter the math marks "<<"\n";
    cin>>k;
    cout<<"enter the engalish marks "<<"\n";
    cin>>l;

    student(names,i,j,k,l);
    int d;
    string subb;
    cout<<"enter the subject name =";
    cin>>subb;
    cout<<"enter the lecture no =";
    cin>>d;
    teacher(subb,d);
    }
}    
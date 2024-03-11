#include<iostream>
using namespace std;
class student {
        public:
        string name;
        int rollnum;
       void create(string a,int b){
            name=a;
            rollnum=b;
        }
        void get(){
            cout<<name<<"\n";
            cout<<rollnum<<"\n";
        }
};
class exam:public student{
    public:
    int maths;
    int eng;
        void createmarks(int c,int d){
            maths=c;
            eng=d;
        }
        void getmarks(){
            cout<<maths<<"\n";
            cout<<eng<<"\n";
        }
};
class result:public exam{
    public:
    float percentage;
        void display(){
            
            
            cout<<"percentage is "<<(maths+eng)/2<<"\n";
        }
};
   int main(){
    result r1;
    r1.create("keval",99);
    r1.get();
    r1.createmarks(78,98);
    r1.getmarks();
    r1.display();
   } 
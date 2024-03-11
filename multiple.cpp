#include<iostream>
using namespace std;


class chatgpt{
    private:
    string question;
    public:
    void que(string a){
          question=a;
    }
    
};
class google{
    public:
    void search(){
        cout<<"searching"<<"\n";
    }
};

class ai:public chatgpt,public google{
    public:
    void get(){
        cout<<"www.w3school.com"<<"\n";
    }
};


int main()
{
    ai q1;
    q1.que("learning c++ website ?");
    q1.search();
    q1.get();

}




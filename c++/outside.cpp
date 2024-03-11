#include<iostream>
using namespace std;
class mobile{
    public:
    void sale();
    void offer();
    void date();
};

void mobile::sale(){
    cout<<"buy one get one";
}
void mobile::offer(){
    cout<<"i phone 15 pro";
}
void mobile::date(){
    cout<<"31 st december ";
}

int main()
{
    mobile m1;
     m1.sale();
     m1.offer();
     m1.date();
}
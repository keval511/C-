#include<iostream>
using namespace std;
class society {
    
    public:
    string name;
    int HN;
    string chairman;
    int fund;

  void date(){
    cout << "opening date 31 dec";
  }

void create(string i,int j,string k,int l)
{
    name=i;
    HN=j;
    chairman=k;
    fund=l;
}
void get()
{
    cout<<name<<"=";
    cout<<HN;
    cout<<chairman;
    cout<<fund;
}
};

int main()
{
    society s1;
    
    s1.create("durganagar",45,"rasikbhai",100000);
    s1.get();
    s1.date();

}
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
 
 string data,number;
 cout<<"enter the data =";
 cin>>data;
 cout<<"enter the number =";
 cin>>number;
 ofstream academy("importance.txt");
 
 academy << data<<"\n";
 academy << number<<"\n";

 academy<<"bapunagar cross road shyam shikhar "<<"\n";
  academy.close();
 
  string name;
 ifstream institute("importance.txt");
 while(getline(institute,name)){
     cout<<name;
  }
  institute.close();
}



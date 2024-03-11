#include<iostream>
using namespace std;
void student (string name,int id,int maths,int sci,int eng){
    cout << "student name is "<<name<<"\n";
    cout << "student id is "<<id<<"\n";

    cout << "student maths marks "<<maths<<"\n";
    cout << "student science marks "<<sci<<"\n";
    cout << "student english marks "<<eng<<"\n";  
int total=maths+sci+eng;
    cout << "total mark is "<< total <<"\n";

    int pr=total/3;
    cout << "pr mark is "<< pr <<"%\n";


if(pr>50){
    cout << "student pass \n\n";
}
else{
    cout << "student fail \n\n";
}

}
int main()
{
    student("keval",6511,88,90,99);
    student("vishal",6531,77,90,87);
    student("takshak",6520,79,91,97);
    student("kuldeep",6520,34,40,40);

}
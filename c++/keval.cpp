#include<iostream>
using namespace std;
class mobile {       // The class
  public:             // Access specifier
    int price;        // Attribute (int variable)
    string name;  // Attribute (string variable)
};

int main() {
  mobile p1;  // Create an object of MyClass

  // Access attributes and set values
  p1.price = 15000; 
  p1.name = "mi";

  // Print attribute values
  cout << p1.name << "\n";
  cout << p1.price;


  mobile m2;
  m2.name="realme";
  m2.price=20000;
  
  return 0;
}
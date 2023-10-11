#include <iostream>
using namespace std;
struct Employee {
  string name;
  int age;
  float salary;
};
int main() {
  Employee employees[5];
  employees[0] = {"giraffe", 37, 5000};
  employees[1] = {"rabbit", 25, 6000};
  employees[2] = {"lion", 19, 4000};
  employees[3] = {"bird",30,3000};
  employees[4] = {"parrot", 20, 1000};
  for (int i = 0; i < 5; i++) {
    cout << "Employee " << i + 1 << endl;
    cout << "Name: " << employees[i].name << endl;
    cout << "Age: " << employees[i].age << endl;
    cout << "Salary: " << employees[i].salary << endl;
  }
  return 0;
}

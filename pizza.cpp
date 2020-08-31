#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
  
  // customer name
  string customerName, amt;
  cout<<"Enter your name: "<<endl;
  cin >> customerName;

  // amount of pizzas
  cout<<"Enter amount of pizzas you want: "<<endl;
  cin >> amt;
  int Amt = stoi(amt);

  // cost of pizza
  int pizzaCost = 5;

  // order total price
  float total = Amt * pizzaCost;

  string is = " your order total is ";

  //printf("%s %i", customerName, (pizzaCost * Amt));
  std::cout << customerName << is << total <<endl;

  return 0;
  
}
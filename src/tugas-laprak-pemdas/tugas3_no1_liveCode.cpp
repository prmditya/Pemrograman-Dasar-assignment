#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(){
  int lightSensor, soilSensor;

  cin >> lightSensor >> soilSensor;

  (lightSensor > 750) ? cout << "OFF\n" : cout << "ON\n";
  (soilSensor < 950) ? cout << "OFF\n" : cout << "ON\n";
  
  return 0;
}
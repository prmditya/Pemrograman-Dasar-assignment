#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  float height, weight, bmi;

  cin >> height >> weight;                              
  // dibagi 100 dikarenakan input merupakan cm akan dijadikan meter
  bmi = (height/100) / weight*weight;                   

  if (bmi > 40){                                        
    cout << "You're Morbidly Obese\n";                  
  }else if (bmi >= 35){                                 
    cout << "You're Severly Obese\n";                   
  }else if (bmi >= 30){                                 
    cout << "You're Obese\n";                           
  }else if (bmi >= 25){                                 
    cout << "You're Over Weight\n";                     
  }else if (bmi >= 18.5){                               
    cout << "You're Healty Weight\n";                   
  }else if (bmi < 18.5){                                
    cout << "You're Underweight\n";                     
  }
  
  return 0;
}

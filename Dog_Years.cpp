#include <iostream>

int main() {
  int dog_age;
  std::string dog_name; 
  
  std::cout<<"Enter your dog's name:\n";
  std::cin>>dog_name;
  std::cout<<"Enter "<<dog_name<<"'s age:\n";
  std::cin>>dog_age;

  int early_years;
  int later_years;
  int human_years;

  early_years=21;
  
  later_years= (dog_age -2) *4;
  human_years= early_years + later_years;
  std::cout<<" My name is "<<dog_name <<"! Ruff ruff, I am "<< human_years <<" years old in human years.";

}

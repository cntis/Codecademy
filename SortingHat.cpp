#include <iostream>
 
int main() {
 
 
 int gryffindor, hufflepuff, ravenclaw, slytherin =0;
 
 int answer1, answer2, answer3, answer4;
 std::cout<<"~~~~~~~~~~~~~~~~~~~~~~\n";
 std::cout<<"|The Sorting Hat Quiz!|\n";
 std::cout<<"~~~~~~~~~~~~~~~~~~~~~~\n\n";

 std::cout<<"Q1)When I'm dead, I want people to remember me as:\n 1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold\n\n";  
 std::cin>> answer1;
 if (answer1==1){
   gryffindor=gryffindor+1;
    }
 else if (answer1==2){
   hufflepuff=hufflepuff+1;
    }
  else if(answer1==3){
    ravenclaw=ravenclaw+1;
    }
  else if(answer1==4){
    slytherin=slytherin+1;
  } 
  else{
    std::cout<<"Invalid input\n";
  }
std::cout<<"Q2)Dawn or Dusk?\n 1) Dawn\n 2) Dusk\n\n";
std::cin>>answer2;
if(answer2==1){
  gryffindor++;
  ravenclaw++;
}
else if(answer2==2){
  hufflepuff++;
  slytherin++;
}
else {
  std::cout<<"Invalid input.\n";
}
std::cout<<"Q3) Which kind of instrument most pleases your ear?\n 1) The violin\n 2) The trumpet\n 3) The piano\n 4) The drum\n\n";
std::cin>>answer3;
if(answer3==1){
  slytherin++;
}
else if(answer3==2){
  hufflepuff++;
  }
else if(answer3==3){
  ravenclaw++;
  }
else if(answer3==4){
  gryffindor++;
  }
else {
  std::cout<<"Invalid output\n";
}
std::cout<<"Q4) Which road tempts you most?\n  1) The wide, sunny grassy lane\n  2) The narrow, dark, lantern-lit alley\n  3) The twisting, leaf-strewn path through woods\n  4) The cobbled street lined (ancient buildings)\n\n";
std::cin>> answer4;
if(answer4==1){
  hufflepuff++;
}
else if(answer4==2){
  slytherin++;
  }
else if(answer4==3){
  gryffindor++;
}
else if(answer4==4){
  ravenclaw++;
}
else {
  std::cout<<"Invalid output\n";
}
int max=0;
std::string house;
if (gryffindor > max) {
 
  max = gryffindor;
  house = "Gryffindor";
 
}
 
if (hufflepuff > max) {
 
  max = hufflepuff;
  house = "Hufflepuff";
 
}
 
if (ravenclaw > max) {
 
  max = ravenclaw;
  house = "Ravenclaw";
 
}
 
if (slytherin > max) {
 
  max = slytherin;
  house = "Slytherin";
 
}
 
std::cout << house << "!\n";

}

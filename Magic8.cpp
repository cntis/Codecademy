#include <iostream>
#include <cstdlib>

int main(){
//your future is here

std::cout<<"MAGIC 8-BALL:\n\n";

srand(time(NULL));
int answer = std::rand()%10;


if (answer==0){
  std::cout<<"It is certain!";
}
else if(answer==2){
  std::cout<<"It is decidedly so.";
}
else if(answer==3){
  std::cout<<"Without a doubt.";
}
else if(answer==4){
  std::cout<<"Yes.";
}
else if(answer==5){
  std::cout<<"My reply is no.";
}
else if(answer==6){
  std::cout<<"Not a chance.";
}
else if(answer==7){
  std::cout<<"Most likely.";
}
else if(answer==8){
  std::cout<<"Maybe.";
}
else if(answer==9){
  std::cout<<"I don't think so.";
}
else {
  std::cout<<"Very doubtful";
}
}

#include <iostream>
#include "lib.h"

int main(){
  int h;
  std::cin>>h;
  if (numeroprimo(h)==0){
    std::cout<<"numeroprimo"<<
     std::endl;
  }
  else{
    std::cout<<"numerononprimo"<<std::endl;
  }
  return 0;
}

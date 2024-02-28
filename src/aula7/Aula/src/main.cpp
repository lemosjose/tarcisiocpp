#include <iostream>

#include "linked_list.hpp"

int main()
{
  auto li = structures::LinkedList<int>();
  
  li.push_front(3);
  li.push_front(4);
  li.push_front(5);

  for(int i = 0; i < li.size();i++){
    std::cout << li.nth(i) << "\n";
  }

  auto ls = structures::LinkedList<std::string>();


  ls.push_front("World");
  ls.push_front("Hello ");

  std::cout << ls.nth(0) << ls.nth(1) << "\n";
  
  std::cout << "main finished! " << "\n";
}


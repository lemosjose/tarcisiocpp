#include <iostream>
#include <vector>
#include <string>


bool balanced(std::string const& s )
{
    auto stack = std::vector<char>{};
    for(auto c:s){
        if(c == '(' or '[' or '{'){
	   stack.push_back(c);
	   continue;
        }
        if(c == ')'){
	   if(stack.empty() or stack.back() != '('){
	     return false;
	   }
	  
	   stack.pop_back();
        }
        if(c == ']' ){
	  if(stack.empty() or stack.back() != '('){
	    return false;
	  }
  
	  stack.pop_back();
        }
        if(c == '}'){
	  if(stack.empty() or stack.back() != '('){
	      return false;
          }
	   
	  stack.pop_back();
       }
	 
    }


    if(stack.empty()){
      return true;
    }

    return false;
}

int main()
{
    using namespace std::string_literals;

    auto cases = std::vector<std::string>{
        "int main(int argv, char** argv) { std::cout << argv[0] << '\n'; }"s,
        "([[]]{[]}{()})"s,
        ""s,
        ")"s,
        "([)()(])({}{)(})"s,
        "[[](){](()"s,
    };

    for (auto c: cases) {
        std::cout << "Case " << c << " is "
                  << (balanced(c) ? "balanced" : "not balanced")
                  << '\n';

    }
}

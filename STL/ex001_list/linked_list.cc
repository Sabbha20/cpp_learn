#include <iostream>
#include <string>
#include <list>

void print_names(std::list<std::string> names, int i){
    if (i <= 9) {std::cout << i << ".  { "; }  else {std::cout << i << ". { "; } 
    for (std::string n : names) {
        std::cout << "[" << n << "] ";
    }
    std::cout  << "}" << std::endl;
}

int main(){

    std::list<std::string> names = {"Ram", "Laxman", "Rukmani"};
    print_names(names, 1);

    names.push_front("Jai");
    print_names(names, 2);

    names.pop_back();
    print_names(names, 3);



    return 0;
}
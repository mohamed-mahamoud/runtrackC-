
#include <iostream>

int main(){
    std::string string;
    std::cout << "Entrez une chaine de caracteres : ";
    std::cin >> string;
    std::string string2 = "Bonjour";

    // Trier les deux chaînes dans l'ordre lexicographique
    if (string < string2) {
        std::cout << string << std::endl;
        std::cout << string2 << std::endl;
    } else {
        std::cout << string2 << std::endl;
        std::cout << string << std::endl;
    }
    
    return 0;
}
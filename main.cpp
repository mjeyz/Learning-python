#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> name;
    name.insert({1, "Mudassir"});
    name.insert({2, "Ayesha"});
    name.insert({3, "Ali"});
    name.insert({4, "Sara"});
    name.insert({5, "Usman"});
    name.insert({6, "Fatima"});
    name.insert({7, "Ahmed"});
    name.insert({8, "Zainab"});
    name.insert({9, "Hassan"});
    name.insert({10, "Mariam"});
    name.insert({11, "Bilal"});

    // Print the names
    for (const auto& pair : name) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}


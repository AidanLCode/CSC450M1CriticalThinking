#include <iostream>

int main() {
//Information for a fictional person stored in various variables.
    std::string firstName = "Aidan";
    std::string lastName = "Lawrence";
    std::string streetAddress = "1501 SE 15th Place";
    std::string city = "Oak Grove";
    int zipCode = 64075;



    std::cout << "The information for the person is:" << std::endl;
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Street Address: " << streetAddress << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zip Code: " << zipCode << std::endl;

    return 0;
}

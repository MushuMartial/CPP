#include <iostream>

int main()
{
    std::string string = "Hi THIS BRIAN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "String created is :" << string << std::endl;

    std::cout << "String address = " << &string << std::endl;
    std::cout << "StringPTR address = " << stringPTR << std::endl;
    std::cout << "StringREF address = " << &stringREF << std::endl;

    std::cout << "String value = " << string << std::endl;
    std::cout << "StringPTR value = " << *stringPTR << std::endl;
    std::cout << "StringREF value = " << stringREF << std::endl;
}
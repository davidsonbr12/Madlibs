#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string adjective1;
    std::string girlsName;
    std::string adjective2;
    std::string occupation;
    std::string placeName;
    std::string clothing;
    std::string hobby;
    std::string adjective3;
    std::string occupation2;
    std::string boysName;
    std::string mansName;

    // get adjective1
    std::cout << "Enter an adjective: " << std::endl;
    std::getline(std::cin >> std::ws, adjective1);
    // get girlsName
    std::cout << "Enter a girl's name: " << std::endl;
    std::getline(std::cin >> std::ws, girlsName);
    // get adjective2
    std::cout << "Enter another adjective: " << std::endl;
    std::getline(std::cin >> std::ws, adjective2);
    // get occupation
    std::cout << "Enter an occupation: " << std::endl;
    std::getline(std::cin >> std::ws, occupation);
    // get placeName
    std::cout << "Enter the name of a place: " << std::endl;
    std::getline(std::cin >> std::ws, placeName);
    // get clothing
    std::cout << "Enter a type of clothing: " << std::endl;
    std::getline(std::cin >> std::ws, clothing);
    // get hobby
    std::cout << "Enter a hobby: " << std::endl;
    std::getline(std::cin >> std::ws, hobby);
    // get adjective3
    std::cout << "Enter a third adjective: " << std::endl;
    std::getline(std::cin >> std::ws, adjective3);
    // get occupation2
    std::cout << "Enter another occupation: " << std::endl;
    std::getline(std::cin >> std::ws, occupation2);
    // get boysName
    std::cout << "Enter a boy's name: " << std::endl;
    std::getline(std::cin >> std::ws, boysName);
    // get mansName
    std::cout << "Enter a man's name: " << std::endl;
    std::getline(std::cin >> std::ws, mansName);

    // start the madlib story

    // input validation
    char choice;
    bool validInput = false;

    std::cout << "Do you want to hear the Madlib Story? Enter (y/n)" << std::endl;

    do 
    {
        std::cin >> choice;
        choice = tolower(choice);

        if (choice != 'y' && choice != 'n')
        {
            std::cout << "Invalid input.  Please enter a value (y/n)." << std::endl;
        }
        else
        {
            break;
        }
    } while (validInput == false);

if (choice == 'n')
{
    std::cout << "Goodbye" << std::endl;
}
else
{
    std::cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " <<
    adjective2 << " " << occupation << " in the Kingdom of " << placeName << ". She loved to wear " <<
    clothing << " and " << hobby << ". She wanted to marry the " << adjective3 << " " << occupation2
    << " named " << boysName << " but her father, King " << mansName << " forbid her from seeing him." 
    << std::endl;
}
return 0;
}
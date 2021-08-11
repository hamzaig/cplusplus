// Letter Pyramid
// Written by Frank J. Mitropoulos

#include <iostream>
#include <string>


int main()
{
    std::string letters{"Hamza Ali Khalid"};

//    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
//    getline(std::cin, letters);

    //Hamza Ali Khalid

    size_t num_letters = letters.length(); //16

    int position {0};  //2

    // for each letter in the string
    for (char c: letters) { //m

        size_t num_spaces = num_letters - position; //14
        while (num_spaces > 0) {
            std::cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) { //2
            std::cout << letters.at(j);
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            std::cout << letters.at(k);
        }

        std::cout << std::endl; // Don't forget the end line
        ++position;
    }

    return 0;
}
// Name:Andrew Takayama
// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
   std::string location;
   int days;
   double hotel_expenses;
   double meal_expenses;
   double total;

// Asks user for business trip location.
std::cout << "Where is your business trip located?\n";
std::cin >> location;

// Asks user how long their trip will take.
std::cout << "How long will you be on this trip for?\n";
std::cin >> days;

//Asks user how much they spent for the hotel
std::cout << "How much were your hotel expenses?\n";
std::cin >> hotel_expenses;

// Finally, asks the user how much their meals cost.
std::cout << "How much were your meal expenses?\n";
std::cin >> meal_expenses;

//Calculates the total amount of expenses.
total = hotel_expenses + meal_expenses;

// print the tables showing the user's inputs.
std::cout << std::setw(15) << "Location";
std::cout << std::setw(15) << "Days";
std::cout << std::setw(15) << "Hotel Cost";
std::cout << std::setw(15) << "Meal Cost";
std::cout << std::setw(15) << "Total Cost" << std::endl;

std::cout << std:: setw(15) << location
  << std::setw(15) << days
  << std::setw(15) << hotel_expenses
  << std::setw(15) << meal_expenses
  << std::setw(15) << total << std::endl;

  return 0;
}

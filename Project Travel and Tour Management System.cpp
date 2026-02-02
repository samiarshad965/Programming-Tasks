#include <iostream>
#include <string>
using namespace std;

// ---------------- Functions ----------------

// Displays the main menu
void showMenu()
 {
    cout << "\n---------------- Main Menu ----------------\n";
    cout << "1. Book a Travel Tour\n";
    cout << "2. View Travel Packages\n";
    cout << "3. Exit\n";
    cout << "-------------------------------------------\n";
}

// Shows list of destinations with hotel per day prices
void showDestinations(string countries[], int size, int prices[])
 {
    cout << "\nAvailable Destinations:\n";
    for(int i = 0; i < size; i++) {
        cout << (i + 1) << ". " << countries[i] 
             << " (Per Day Hotel: " << prices[i] << " PKR)\n";
    }
}

// Lets user choose hotel type
int chooseHotel()
 {
    int hotelType;
    cout << "\nHotel Types:\n";
    cout << "1. Standard (No Extra Cost)\n";
    cout << "2. Deluxe (+2000 PKR per day)\n";
    cout << "3. Premium (+5000 PKR per day)\n";
    cout << "Choose Hotel Type (1-3): ";
    cin >> hotelType;

    // Validate input
    if(hotelType < 1 || hotelType > 3)
	 {
        cout << "Invalid choice. Defaulting to Standard.\n";
        hotelType = 1;
    }
    return hotelType;
}

// Returns extra cost based on hotel type
int hotelExtraCost(int hotelType) 
{
    if(hotelType == 2) return 2000; // Deluxe
    else if(hotelType == 3) return 5000; // Premium
    else return 0; // Standard
}

// Lets user choose flight class
int chooseFlight()
 {
    int flightClass;
    cout << "\nFlight Classes:\n";
    cout << "1. Economy (+0 PKR)\n";
    cout << "2. Business (+15000 PKR per ticket)\n";
    cout << "3. First Class (+30000 PKR per ticket)\n";
    cout << "Choose Flight Class (1-3): ";
    cin >> flightClass;

    // Validate input
    if(flightClass < 1 || flightClass > 3)
	 {
        cout << "Invalid choice. Defaulting to Economy.\n";
        flightClass = 1;
    }
    return flightClass;
}

// Returns extra flight cost based on class
int flightExtraCost(int flightClass)
 {
    if(flightClass == 2) return 15000; // Business
    else if(flightClass == 3) return 30000; // First Class
    else return 0; // Economy
}

// Takes user info, stay days, and number of tickets
void bookingForm(string &name, string &passport, int &days, int &tickets)
 {
    cout << "\n------- Booking Form -------\n";
    cin.ignore();
    cout << "Enter Full Name: "<<endl;
    getline(cin, name);
    cout << "Enter CNIC Number: "<<endl;
    getline(cin, passport);

    cout << "Number of Days for Stay: ";
    cin>>days;
    if(days <= 0) { 
        cout << "Invalid days! Setting days to 1.\n"; 
        days = 1; 
    }

    cout << "Number of Flight Tickets: ";
    cin >> tickets;
    if(tickets <= 0) { 
        cout << "Invalid ticket number! Setting tickets to 1.\n"; 
        tickets = 1; 
    }
}

// Lets user choose optional extras
int chooseExtras()
 {
    int extraChoice;
    cout << "\nOptional Extras:\n";
    cout << "1. No Extras\n";
    cout << "2. Meals (+2000 PKR per person)\n";
    cout << "3. Travel Insurance (+3000 PKR per person)\n";
    cout << "4. Sightseeing Package (+5000 PKR per person)\n";
    cout << "Choose Extra: ";
    cin >> extraChoice;

    // Validate input
    if(extraChoice < 1 || extraChoice > 4) extraChoice = 1;
    return extraChoice;
}

// Calculates cost for extras based on number of passengers
int extrasCost(int extraChoice, int tickets)
 {
    if(extraChoice == 2) return 2000 * tickets; // Meals
    else if(extraChoice == 3) return 3000 * tickets; // Insurance
    else if(extraChoice == 4) return 5000 * tickets; // Sightseeing
    else return 0; // No extras
}

// Calculates total cost including tax and discount
int calculateTotal(int hotelCost, int hotelExtra, int flightCost, int flightExtra, int extraCost, float taxRate, int discount) {
    int subtotal = hotelCost + hotelExtra + flightCost + flightExtra + extraCost;
    int tax = subtotal * taxRate; // Calculate tax
    int discountAmount = (subtotal * discount) / 100; // Discount
    return subtotal + tax - discountAmount; // Final total
}

// Shows detailed invoice with breakdown
void showInvoice(string name, string passport, string country, int days, int tickets, int hotelCost, int hotelExtra, int flightCost, int flightExtra, int extraCost, float taxRate, int discount, int total) {
    cout << "\n---------------- Invoice ----------------\n";
    cout << "Customer Name: " << name << endl;
    cout << "Passport/CNIC: " << passport << endl;
    cout << "Destination: " << country << endl;
    cout << "Hotel Charges: " << hotelCost << " + Extra " << hotelExtra << endl;
    cout << "Flight Charges: " << flightCost << " + Extra " << flightExtra << endl;
    cout << "Extras Charges: " << extraCost << endl;
    cout << "Tax Rate: " << taxRate * 100 << "%\n";
    cout << "Discount: " << discount << "%\n";
    cout << "Total Cost: " << total << " PKR\n";
    cout << "-----------------------------------------\n";
}

// ---------------- Main Program ----------------

int main()
 {
    const int SIZE = 5;
    string countries[SIZE] = {"Turkey", "England", "Egypt", "Dubai", "America"};
    int hotelPerDay[SIZE] = {15000, 12000, 18000, 20000, 16000}; 
    int flightBaseCost[SIZE] = {50000, 45000, 60000, 70000, 55000}; // Flight base per ticket

    string name, passport;
    int choice, days, tickets, hotelType, flightClass, extraChoice, discount, total;
    float taxRate = 0.05; // 5% tax
    char again;

    cout << "-------------------------------------------\n";
    cout << "         Travel & Tour Management System   \n";
    cout << "-------------------------------------------\n";

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
		 {
            case 1: {
                showDestinations(countries, SIZE, hotelPerDay); // Show available destinations
                cout << "Select your destination (1-5): ";
                cin >> choice;

                if(choice < 1 || choice > SIZE) { cout << "Invalid destination.\n"; break; 
				}

                bookingForm(name, passport, days, tickets); // Get user info
                hotelType = chooseHotel(); // Choose hotel
                flightClass = chooseFlight(); // Choose flight
                extraChoice = chooseExtras(); // Optional extras

                // Discount options
                cout << "\nDiscount Options:\n";
                cout << "1. No Discount\n2. Student Discount (10%)\n3. Family Discount (15%)\n4. Seasonal Discount (20%)\n";
                cout << "Choose Discount: ";
                cin >> discount;
                if(discount == 1) discount = 0;
                else if(discount == 2) discount = 10;
                else if(discount == 3) discount = 15;
                else if(discount == 4) discount = 20;
                else { cout << "Invalid, no discount applied.\n"; discount = 0; }

                // Calculate costs
                int hotelExtra = hotelExtraCost(hotelType) * days;
                int flightExtra = flightExtraCost(flightClass) * tickets;
                int extraCost = extrasCost(extraChoice, tickets);
                int hotelCost = hotelPerDay[choice - 1] * days;
                int flightCost = flightBaseCost[choice - 1] * tickets;

                total = calculateTotal(hotelCost, hotelExtra, flightCost, flightExtra, extraCost, taxRate, discount);

                // Show detailed invoice
                showInvoice(name, passport, countries[choice - 1], days, tickets, hotelCost, hotelExtra, flightCost, flightExtra, extraCost, taxRate, discount, total);

                break;
            }

            case 2:
                showDestinations(countries, SIZE, hotelPerDay); // Show destinations only
                break;

            case 3:
                cout << "Thank you for using the system!\n";
                return 0;

            default:
                cout << "Invalid choice.\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> again;

    } 
	while(again == 'y' || again == 'Y');

    cout << "Thank you for using Travel & Tour Management System!\n";
    return 0;
}

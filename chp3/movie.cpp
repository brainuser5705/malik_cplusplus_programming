#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    string movieName;
    double adultTicketPrice;
    double childTicketPrice;
    unsigned int numAdultTickets;
    unsigned int numChildTickets;
    double percentage;

    cout << "Enter movie name: ";
    getline(cin, movieName);

    cout << "Price of adult ticket: ";
    cin >> setprecision(2) >> adultTicketPrice;
    
    cout << "Price of child ticket: ";
    cin >> childTicketPrice;
    
    cout << "Number of adult tickets sold: ";
    cin >> numAdultTickets;
    
    cout << "Number of child tickets sold: ";
    cin >> numChildTickets;
    
    cout << "Percentage: ";
    cin >> percentage;
    
    int numTicketsSold = numAdultTickets + numChildTickets;
    double grossAmount = (numAdultTickets * adultTicketPrice) + (numChildTickets * childTicketPrice); 
    double amountDonated = grossAmount * (percentage/100);
    double netSale = grossAmount - amountDonated;

    cout << setfill('.') << left << setw(40) << "Movie Name: ";
    cout << " " << movieName << endl;

    cout << setfill('.') << left << setw(40) << "Number of Tickets Sold: ";
    cout << setfill(' ') << right << setw(10) << numTicketsSold << endl;

    cout << fixed << setprecision(2);
    cout << setfill('.') << left << setw(40) << "Gross Amount: ";
    cout << setfill(' ') << right << " $" << setw(8) << grossAmount << endl;

    cout << setfill('.') << left << setw(40) << "Percentage of Gross Amount Donated: ";
    cout << setfill(' ') << right << setw(10) << percentage << "%" << endl;

    cout << setfill('.') << left << setw(40) << "Amount Donated: ";
    cout << setfill(' ') << right << " $" << setw(8) << amountDonated << endl;

    cout << setfill('.') << left << setw(40) << "Net Sale: ";
    cout << setfill(' ') << right << " $" << setw(8) << netSale << endl;
}
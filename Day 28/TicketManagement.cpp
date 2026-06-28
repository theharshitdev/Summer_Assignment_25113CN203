#include <iostream>
#include <string>
using namespace std;

class TicketBooking {
private:
    int totalSeats = 50;
    int bookedSeats = 0;
    string passengerName;
    int age;
    int seatNumber;

public:
    void bookTicket() {
        if (bookedSeats == totalSeats) {
            cout << "\nSorry! No seats available.\n";
            return;
        }

        cin.ignore();
        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Age: ";
        cin >> age;

        seatNumber = bookedSeats + 1;
        bookedSeats++;

        cout << "\nTicket Booked Successfully!\n";
        cout << "Seat Number: " << seatNumber << endl;
    }

    void cancelTicket() {
        if (bookedSeats == 0) {
            cout << "\nNo ticket has been booked.\n";
            return;
        }

        bookedSeats--;
        cout << "\nTicket Cancelled Successfully!\n";
    }

    void displayTicket() {
        if (bookedSeats == 0) {
            cout << "\nNo booking found.\n";
            return;
        }

        cout << "\n===== Ticket Details =====\n";
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Age            : " << age << endl;
        cout << "Seat Number    : " << seatNumber << endl;
    }

    void availableSeats() {
        cout << "\nAvailable Seats: " << totalSeats - bookedSeats << endl;
    }
};

int main() {
    TicketBooking ticket;
    int choice;

    do {
        cout << "\n====== Ticket Booking System ======\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Display Ticket\n";
        cout << "4. Check Available Seats\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ticket.bookTicket();
                break;
            case 2:
                ticket.cancelTicket();
                break;
            case 3:
                ticket.displayTicket();
                break;
            case 4:
                ticket.availableSeats();
                break;
            case 5:
                cout << "\nThank You for Using the Ticket Booking System!\n";
                break;
            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}
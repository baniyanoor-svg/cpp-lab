#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flightNo;
    string source, destination;
    int seatsAvailable;

public:
    
    Flight() {
        flightNo = 0;
        source = destination = "";
        seatsAvailable = 0;
    }

    
    Flight(int f, string s, string d, int seats) {
        flightNo = f;
        source = s;
        destination = d;
        seatsAvailable = seats;
    }


    void input() {
        cout << "Enter Flight No: ";
        cin >> flightNo;
        cout << "Enter Source: ";
        cin >> source;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Seats Available: ";
        cin >> seatsAvailable;
    }

    
    void display() const {
        cout << flightNo << "  " << source << " → " << destination
             << "  Seats: " << seatsAvailable << endl;
    }

    
    string getDestination() const {
        return destination;
    }

 
    bool bookSeat(int count) {
        if (seatsAvailable >= count) {
            seatsAvailable -= count;
            return true;
        }
        return false;
    }
};


void showFlightsToDestination(Flight* flights, int n, string dest) {
    cout << "\nFlights going to " << dest << ":\n";

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (flights[i].getDestination() == dest) {
            flights[i].display();
            found = true;
        }
    }
    if (!found)
        cout << "No flights available.\n";
}


int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    Flight* flights = new Flight[n];


    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for flight " << i + 1 << ":\n";
        flights[i].input();
    }


    string dest;
    cout << "\nEnter destination to search: ";
    cin >> dest;
    showFlightsToDestination(flights, n, dest);

   
    int fNo, seats;
    cout << "\nEnter Flight No for booking: ";
    cin >> fNo;
    cout << "Enter number of seats to book: ";
    cin >> seats;

    bool booked = false;

    for (int i = 0; i < n; i++) {
     
        if (flights[i].bookSeat(seats)) {
            cout << "Booking successful! Updated flight details:\n";
            flights[i].display();
            booked = true;
            break;
        }
    }

    if (!booked)
        cout << "Booking failed. Not enough seats or wrong flight number.\n";

  
    delete[] flights;

    return 0;
}
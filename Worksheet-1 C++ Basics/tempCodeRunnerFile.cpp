#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

void displaySeats(char seats[ROWS][COLS]) {
    cout << "\nCurrent Seating Arrangement:\n";
    cout << "  1 2 3 4 5\n";
    for (int i = 0; i < ROWS; i++) {
        cout << i+1 << " ";
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    char seats[ROWS][COLS];
    
    // Initialize all seats as available ('O')
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = 'O';
        }
    }

    cout << "Welcome to Cinema Ticket Booking System!\n";

    while (true) {
        displaySeats(seats);
        
        int row, col;
        cout << "Enter row and column (1-5) to book (0 0 to exit): ";
        cin >> row >> col;
        
        // Exit condition
        if (row == 0 && col == 0) {
            cout << "Thank you for using our booking system!\n";
            break;
        }
        
        // Validate input
        if (row < 1 || row > ROWS || col < 1 || col > COLS) {
            cout << "Invalid seat selection! Please enter numbers between 1-5.\n\n";
            continue;
        }
        
        // Check if seat is already booked
        if (seats[row-1][col-1] == 'X') {
            cout << "Seat already booked! Please choose another seat.\n\n";
            continue;
        }
        
        // Book the seat
        seats[row-1][col-1] = 'X';
        cout << "Seat booked successfully!\n";
    }
    
    return 0;
}
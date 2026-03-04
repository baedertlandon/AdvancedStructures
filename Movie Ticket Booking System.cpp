#include <iostream>
using namespace std;

struct Booking
{
    int booking_id;
    string customer_name;
    string movie_name;
    int number_of_tickets;
    float ticket_price;
};

void display_bookings(Booking booking_list[], int size)
{
    float total_revenue=0;

    cout << "\n-----Booking Details-----\n";

    for (int index = 0; index < size; index++)
    {
        float total_amount = booking_list[index].number_of_tickets * booking_list[index].ticket_price;

        cout << "Booking ID: " << booking_list[index].booking_id << endl;
        cout << "Customer: " << booking_list[index].customer_name << endl;
        cout << "Movie: " << booking_list[index].movie_name << endl;
        cout << "Tickets: " << booking_list[index].number_of_tickets << endl;
        cout << "Total Amount: " << total_amount << endl;
        cout << "------------------------------" << endl;

        total_revenue += total_amount;
    }

    cout << "Total Theatre Revenue: " << total_revenue;
}

int main()
{
    const int size = 3;

    Booking bookings[size];

    for (int index = 0; index < size; index++)
    {
        cout << "Enter details for Booking " << index + 1 << endl;

        cout << "Booking ID: ";
        cin >> bookings[index].booking_id;

        cout << "Customer Name: ";
        cin >> bookings[index].customer_name;

        cout << "Movie Name: ";
        cin >> bookings[index].movie_name;

        cout << "Number of Tickets: ";
        cin >> bookings[index].number_of_tickets;

        cout << "Ticket Price: ";
        cin >> bookings[index].ticket_price;
    }

    display_bookings(bookings, size);
}
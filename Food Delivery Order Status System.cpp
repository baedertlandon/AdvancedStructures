#include <iostream>
using namespace std;

enum order_status
{
    Placed,
    Preparing,
    Delivering,
    Delivered
};

struct order
{
    int order_id;
    string customer_name;
    float total_amount;
    order_status status;
};

int main()
{
    order order_1;
    int status_choice;

    cout << "Enter Order ID: ";
    cin >> order_1.order_id;

    cout << "Enter Customer Name: ";
    cin >> order_1.customer_name;

    cout << "Enter Total Amount: ";
    cin >> order_1.total_amount;

    cout << "Choose Order Status:" << endl
        << "0-Placed" << endl
        << "1-Preparing" << endl
        << "2-Out for Delivery" << endl
        << "3-Delivered" << endl
        << "Enter your choice: ";
    cin >> status_choice;

    if (status_choice == 0)
    {
        order_1.status = Placed;
    }
    else if (status_choice == 1)
    {
        order_1.status = Preparing;
    }
    else if (status_choice == 2)
    {
        order_1.status = Delivering;
    }
    else
    {
        order_1.status = Delivered;
    }

    cout << "\nOrder Summary\n";
    cout << "Order ID: " << order_1.order_id << endl;
    cout << "Customer: " << order_1.customer_name << endl;
    cout << "Total Amount: " << order_1.total_amount << endl;

    if (order_1.status == Placed)
    {
        cout << "\nStatus: Placed"<<endl;
        cout << "Your order has been placed."<<endl;
    }
    else if (order_1.status == Preparing)
    {
        cout << "\nStatus: Preparing"<<endl;
        cout << "Your food is being prepared."<<endl;
    }
    else if (order_1.status == Delivering)
    {
        cout << "\nStatus: Out for Delivery" << endl;
        cout << "Your food is out for delivery" << endl;
    }
    else
    {
        cout << "\nStatus: Delivered" << endl;
        cout << "Your food has been delivered." << endl;
    }
    return 0;

}
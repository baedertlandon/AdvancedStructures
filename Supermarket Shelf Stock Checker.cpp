#include <iostream>
using namespace std;

struct product
{
    int product_code;
    string product_name;
    int stock_count;
};

void input_products(product store[][3],int aisle_count,int products_per_aisle)
{
    for (int aisle_index = 0; aisle_index < aisle_count; aisle_index++)
    {
        cout << "Enter details for Aisle " << aisle_index + 1 << endl;
        for (int product_index = 0; product_index < products_per_aisle; product_index++)
        {
            cout << "Product " << product_index + 1 << " Code: ";
            cin >> store[aisle_index][product_index].product_code;
            cout << "Product " << product_index + 1 << " Name: ";
            cin >> store[aisle_index][product_index].product_name;
            cout << "Product " << product_index + 1 << " Stock: ";
            cin >> store[aisle_index][product_index].stock_count;
        }
    }
}

void display_shelf_report(const product store[][3], int aisle_count, int products_per_aisle)
{
    cout << "\n=====Shelf Stock Report=====\n";
    for (int aisle_index = 0; aisle_index < aisle_count; aisle_index++)
    {
        int total_stock = 0;
        cout << "Aisle " << aisle_index + 1 << endl;
        for (int product_index = 0; product_index < products_per_aisle; product_index++)
        {
            cout << store[aisle_index][product_index].product_code << "-" << store[aisle_index][product_index].product_name << "|Stock: " << store[aisle_index][product_index].stock_count << endl;
            total_stock += store[aisle_index][product_index].stock_count;
        }
        cout << "Total Stock in Aisle " << aisle_index + 1 << ": " << total_stock << endl;
        cout << "-------------------------------" << endl;
    }
}

int main()
{
    const int aisle_count = 2;
    const int products_per_aisle = 3;

    product store[aisle_count][products_per_aisle];

    input_products(store, aisle_count, products_per_aisle);

    display_shelf_report(store, aisle_count, products_per_aisle);
}
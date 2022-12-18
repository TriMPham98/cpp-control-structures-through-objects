// This program tracks the inventory of three widget stores that
// opened at the same time. Each store started with the same number
// of widgets in inventory. By subtracting the number of widgets
// each store has sold from its inventory, the current inventory
// can be calculated.

#include <iostream>
using namespace std;

int main()
{
    int begInv, // Beginning inventory for all stores
        sold,   // Number of widgets sold
        store1, // Store 1's inventory
        store2, // Store 2's inventory
        store3; // Store 3's inventory

    // Get the beginning inventory for all the stores.
    cout << "One week ago, 3 new widget stores opened at the same time with the same beginning inventory." << endl;
    cout << "What was the beginning inventory?" << endl;
    cin >> begInv;

    // Set each store's inventory.
    store1 = store2 = store3 = begInv;

    // Get the number of widgets sold at store 1.
    cout << "How many widgets has store 1 sold?" << endl;
    cin >> sold;
    store1 -= sold; // Adjust store 1's inventory.

    // Get the number of widgets sold at store 2.
    cout << "How many widgets has store 2 sold?" << endl;
    cin >> sold;
    store2 -= sold; // Adjust store 2's inventory.

    // Get the number of widgets sold at store 3.
    cout << "How many widgets has store 3 sold?" << endl;
    cin >> sold;
    store3 -= sold; // Adjust store 3's inventory.

    // Display each store's current inventory.
    cout << "\nThe current inventory of each store: " << endl;
    cout << "Store 1: " << store1 << endl;
    cout << "Store 2: " << store2 << endl;
    cout << "Store 3: " << store3 << endl;

    return 0;
}

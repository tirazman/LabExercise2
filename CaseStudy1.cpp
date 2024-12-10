//Case Study 1 : Inventory Management System

#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

// Function prototypes
void GetInput(string name[], double price[], int qty[], int numITEM);
void DisplayReport(const string name[], const double price[], const int qty[], int numITEM);
double CalcTotal(const double price[], const int qty[], int numITEM);
void SearchItem(const string name[], const double price[], const int qty[], int size, const string &itemName);

int main(){
    const int numITEM = 5 ;
    string name[numITEM];
    double price[numITEM];
    int qty[numITEM];
    double total = 0 ;

    //Allow user to input item information for 5 items
    GetInput(name, price, qty, numITEM);

    //Calculate the total value of the inventory
    total = CalcTotal(price, qty, numITEM);

    //Print the report
    cout << "\nInventory Report:\n";
    DisplayReport(name, price, qty, numITEM);

    //Search for an item
    string searchName;
    cout << "\nEnter item name to search: ";
    cin >> searchName;
    SearchItem(name, price, qty, numITEM, searchName);

    // Print the total value
    cout << "\nTotal Value: " << total << endl;
}

//Function to get input from user
void GetInput(string name[], double price[], int qty[], int numITEM) {
    cout << "Enter the item information for 5 items : " << endl ;
    for ( int i = 0 ; i < numITEM ; i ++ ){
        cout << (i+1) << ". Product \n" ;
        cout << "Name : " ;
        cin >> name[i] ;
        cout << "Price : " ;
        cin >> price[i] ;
        cout << "Quantity : " ;
        cin >> qty[i] ;
    }
}

//Function to display report
void DisplayReport(const string name[], const double price[], const int qty[], int numITEM){
     cout << setw(10) << left << "Name" 
          << setw(10) << "Price" 
          << setw(10) << "Quantity" 
          << setw(10) << "Item Value" << endl;

    for (int i = 0; i < numITEM; ++i) {
        double itemValue = price[i] * qty[i];
        cout << setw(10) << left << name[i]
             << setw(10) << price[i]
             << setw(10) << qty[i]
             << setw(10) << itemValue << endl; 
    }
}

//Function to calculate total value
double CalcTotal(const double price[], const int qty[], int numITEM) {
    double total = 0;
    for (int i = 0; i < numITEM; ++i) {
        total += price[i] * qty[i];
    }
    return total;
}

//Function to search for an item and display the details
void SearchItem(const string name[], const double price[], const int qty[], int size, const string &itemName) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (name[i] == itemName) {
            cout << "\nItem Found!\n";
            cout << "Name : " << name[i] 
                 << "\nPrice : " << price[i] 
                 << "\nQuantity : " << qty[i] << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in inventory.\n";
    }
}

    
//Case Study 3 : E-commerce Product Sorting

#include <iostream>
#include <string>

using namespace std;

int main(){
    const int numofProduct = 10 ;
    string ProductName[numofProduct] ;
    double ProductPrice[numofProduct] ;
    string Category[numofProduct] ;

    //Allow user to input product information for 10 products
    cout << "Enter the product information for 10 products : " << endl ;
    for ( int i = 0 ; i < numofProduct ; i ++ ){
        cout << (i+1) << ". Product\n" ;
        cout << "Name : " ;
        cin >> ProductName[i] ;
        cout << "Price : " ;
        cin >> ProductPrice[i] ;
        cout << "Category : " ;
        cin >> Category[i] ;
    }
    
    // Sort products by price in ascending order (bubble sort)
    for (int i = 0; i < numofProduct - 1; i++) {
        for (int j = 0; j < numofProduct - i - 1; j++) {
            if (ProductPrice[j] > ProductPrice[j + 1]) {
                 // Swap prices
                double tempPrice = ProductPrice[j];
                ProductPrice[j] = ProductPrice[j + 1];
                ProductPrice[j + 1] = tempPrice;

                // Swap product names
                string tempName = ProductName[j];
                ProductName[j] = ProductName[j + 1];
                ProductName[j + 1] = tempName;

                // Swap product categories
                string tempCategory = Category[j];
                Category[j] = Category[j + 1];
                Category[j + 1] = tempCategory;
            }
        }
    }

    //Print sorted products 
    cout << "\nProducts sorted by price ( ascending order ) : \n" ;
    for ( int i = 0 ; i < numofProduct ; i++ ){
        cout << "Name : " << ProductName[i]
             << " , Price : " << ProductPrice[i]
             << " , Category : " << Category[i] << endl ;
    }
}
       
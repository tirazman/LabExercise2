//Exercise 3 : Multi-dimensional Arrays ( 2D Arrays )

#include <iostream>
using namespace std;

//Constant
const int row = 3 ;
const int col = 3 ;

//Function Prototype 
void TransposeMatrix ( int num[row][col]) ;

int main(){
    int num[row][col] ;
    int sum = 0 ;


    //Input values to fill the matrix
    cout << "Enter elements for a 3x3 matrix :\n " ;
    for( int r = 0 ; r < row ; r++ ){
        for ( int c = 0 ; c < col ; c++ ){
            cout << "Row " << (r+1) << " : "
                 << " , Column " << (c+1) << " : "  << endl ;
            cin >> num[r][c] ;
        }
        cout << endl;
    }

    //Display the matrix as a grid
    cout << "The entered matrix is : \n" ;
    for( int r = 0 ; r < row ; r++ ){
        for ( int c = 0 ; c < col ; c++ ){
            cout << num[r][c] << " " ;
        }
        cout << endl ;
    }

    //Sum of all elements in the array 
    for( int r = 0 ; r < row ; r++ ){
        for ( int c = 0 ; c < col ; c++ ){
            sum += num[r][c];
        }
    }
    //Print the sum
    cout << "\nThe Sum of All Elements in The Matrix : " << sum << endl ;

    //Print transpose matrix 
    cout <<"\nThe transpose of the matrix is :\n";
    TransposeMatrix(num);

}

void TransposeMatrix ( int num[row][col]){
    int transpose[col][row];

    //transpose the matrix
    for( int r = 0 ; r < row ; r++ ){
        for ( int c = 0 ; c < col ; c++ ){
            transpose[c][r] = num[r][c] ;
        }
    }

    //Print the transposes matrix
     for( int c = 0 ; c < col ; c++ ){
        for ( int r = 0 ; r < row ; r++ ){
            cout << transpose[c][r] << " " ;
        }
        cout << endl ;
    }

}

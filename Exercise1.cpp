//Exercise 1 : Basic Array Operations

#include <iostream>
using namespace std;

//Function Prototype
int LargestElement(const int SIZE, int num[]) ; 
int SmallestElement(const int SIZE, int num[]);

int main(){
    const int SIZE = 10 ;
    int num[SIZE] ,  avg ;
    int sum = 0 ;
  
    //Input values into the array from the user.
    cout << "Please enter 10 number into the array.\n" ;
    for ( int i = 0 ; i < SIZE ; i ++ ){
        cout << "Number " << (i+1) << " : " ;
        cin >> num[i];
    }

    //Print the array in reverse order
    cout << "\nThe 10 number you entered in reverse order is : " ;
    for ( int i = SIZE-1 ; i >= 0 ; i -- ){
        cout << num[i] << " ";
    }
    cout << endl;

    //Print the largest and smallest elements in the array
    cout << "\nLargest element in the array : " << LargestElement(SIZE,num) << endl;
    cout << "\nSmallest element in the array : " << SmallestElement(SIZE,num) << endl;



    //Calculate & print average of the array elemnts
    for ( int i = 0 ; i < SIZE ; i ++ ){
        sum += num[i];
    
    }
    avg = sum/SIZE ;
    cout << "\nThe average of the array element : " << avg ;

}

int LargestElement(const int SIZE, int num[]){
    int largest = 0 ;
    for ( int i = 0 ; i < SIZE ; i++ ){
        if ( num[i]> largest ){
            largest = num[i];
        }
    }
    return largest;
}

int SmallestElement(const int SIZE, int num[]){
    int smallest = 999 ;
    for ( int i = 0 ; i < SIZE ; i++ ){
        if ( num[i] < smallest ){
            smallest = num[i];
        }
    }
    return smallest;
}

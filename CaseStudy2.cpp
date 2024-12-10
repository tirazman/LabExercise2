//Case Study 2 : Student Grades System

#include <iostream>
#include <string>

using namespace std;

//Constant
const int numofStudent = 10 ;
const int sub = 5 ;

//Function Prototype
int HighestAvgGrade ( int avg[] , const int numofStudent );

int main(){
    string StudentName[numofStudent] ;
    int grade[numofStudent][sub] ;
    int avg[numofStudent] ;

    //Allow user to input grades for each students and subjects
    cout << "Enter the names and grades for 10 students : " << endl ;
    for ( int i = 0 ; i < numofStudent ; i ++ ){
        int sum = 0 ; 
        cout << (i+1) << ". Name : " ;
        cin >> StudentName[i];
            
        for ( int j = 0 ; j < sub ; j++ ){
            cout << "Subject " << (j+1) << " grade : " ;
            cin >> grade[i][j] ;

            while(grade[i][j] < 0 || grade[i][j] > 100 ){
                cout << "Invalid grade input. Please enter a grade between 0 and 100 : " ;
                cin >> grade[i][j];
            }

        //Calculate sum grade for each student
        sum += grade[i][j];

        }

    //Calculate average grade for each student
    avg[i] = sum / sub ;

    }

    //Print Average grade for each student
    cout << "\nAverage grade for each students : \n" ;
    for ( int i = 0 ; i < numofStudent ; i ++ ){
        cout << StudentName[i] << " : " << avg[i] << endl ;
    }

    //Print student details with the highest average grade
    int highest = HighestAvgGrade(avg,numofStudent);

    cout << "\nStudent with the highest average grade : " << endl ;
    cout << "Name : " << StudentName[highest] << endl ;
    cout << "Average grade : " << avg[highest] << endl ; 

}

int HighestAvgGrade ( int avg[] , const int numofStudent ){
    int highest = 0 ;
    for ( int i = 0 ; i < numofStudent ; i ++ ){
        if ( avg[i] > avg[highest] ){
            highest = i ;
        }
    }
    return highest ;
}
    
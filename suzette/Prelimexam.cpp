#include <iostream>
using namespace std;

int main() {

    string firstName, lastName;
    double birthYear, prelim, midterm, prefinal, finalGrade;
    int average;


    cout << "This was a Prelim Exam!" << endl;
    cout << "" << endl;
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Birth Year: ";
    cin >> birthYear;


    int age = 2024 - birthYear;
    cout << "Hi, " << firstName << " " << lastName << ", you are " << age << " years old today." << endl;
    cout << "" << endl;


    cout << "Please enter your Grades!" << endl;
    cout << "" << endl;
    cout << "Prelim: ";
    cin >> prelim;
    cout << "Midterm: ";
    cin >> midterm;
    cout << "Prefinal: ";
    cin >> prefinal;
    cout << "Final: ";
    cin >> finalGrade;

    average = (prelim + midterm + prefinal + finalGrade) / 4.0;


    cout << "Your average is: " << average << endl;
    

    if (96 <= average && average <= 100) {
        cout << "Congratulations You passed! ";
        cout << " You got a 1.00 Grade Point!" <<endl;
        cout << "Excellent " <<endl;
    } 
    
    else if (91 <= average && average <= 95) {
    cout << "Congratulations you passed!";
    cout << " You got a 1.25 Grade Point! " <<endl;
    cout << "Very Good" <<endl;
  } 
    else if (86 <= average && average <=90) {
    cout << "Congratulations you passed! ";
    cout << " You got a 1.50 Grade Point! " <<endl;
    cout << "Very Good " <<endl;
 } 
   else if (81 <= average && average <= 85){
    cout << "Congratulations you passed! ";
    cout << " You got a 1.75 Grade Point!" <<endl;
    cout << "Good" <<endl;
  } 
  else if ( 75<= average && average <= 80){
    cout << "Congratulations you passed! ";
    cout << " You got a 2.00 Grade Point! " <<endl;
    cout << "Good" <<endl;
  } 
  else if (69<= average && average <= 74){
    cout << "Congratulations you passed! ";
    cout << " You got a 2.25 Grade Point! " <<endl;
    cout << "Good" <<endl;
  }
  else if (63<= average && average <= 68){
    cout << "Congratulations you passed! ";
    cout << " You got a 2.50 Grade Point!" <<endl;
    cout << "Fair" <<endl;
  } 
  else if (57 <= average && average <= 62){
    cout << "Congratulations you passed! ";
    cout << " You got a 2.75Grade Point!" <<endl;
    cout << "Fair" <<endl;
  } 
  else if (50<= average && average <= 56){
    cout << "Congratulations you passed! ";
    cout << " You got a 3.00 Grade Point! " <<endl;
    cout << "Fair" <<endl;
  } 
  else {
    cout << "Unfortunately you failed"; 
    cout << " You got a 5.00 Grade Point! " <<endl;
    cout << "Failed" <<endl;
  } 
    
    return 0;
}

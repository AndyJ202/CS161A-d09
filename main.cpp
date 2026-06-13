/******************************************************************************
# Author:           Andy Joy
# Assignment:       Discussion 9
# Date:             06/13/2026
# Description:      This program takes three digits from the user and shows the
#                   reverse value. The first digit is one integer, while the
#                   second is two integers.
# Input:            userNum1 (int), userNum2 (int), and userNum3 (int).
# Output:           userNum1 (int), userNum2 (int), userNum3 (int), copyUserNum2
#                   (int), and copyUserNum3 (int).
# Sources:          www.geeksforgeeks.org/dsa/write-a-program-to-reverse-digits-of-a-number/
#******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

//Function prototypes
void welcomeMessage();
void goodByeMessage();
int reverseDigit(int num1);
void reverseDigit(int &num2, int &num3);


//Main function
int main() {
  int userNum1 = 0;
  int userNum2 = 0;
  int userNum3 = 0;

  //Copies for printing later
  int copyUserNum2 = userNum2;
  int copyUseruserNum3 = userNum3;

  welcomeMessage();

  cout << "\nEnter an integer: ";
  cin >> userNum1;

  cout << "Enter two integers: ";
  cin >> userNum2 >> userNum3;

  copyUserNum2 = userNum2;
  copyUseruserNum3 = userNum3;

  cout << "\nThe reverse digits of (" << userNum1 << ") are " << reverseDigit(userNum1) << endl;

  reverseDigit(userNum2, userNum3);

  cout << "The reverse digits of (" << copyUserNum2 << " "<< copyUseruserNum3 << ") are " << userNum2 << " " << userNum3 << endl;

  goodByeMessage();

  return 0;
}

void welcomeMessage() {
  cout << "Welcome to my digit reversing program." << endl;
}

void goodByeMessage() {
  cout << "\nThank you for using my program." << endl;
}

int reverseDigit(int num1) {
  int reversedNum= 0;

    while (num1 > 0) {
        reversedNum = reversedNum * 10 + num1 % 10;
        num1 = num1 / 10;
    }
  return reversedNum;
}

void reverseDigit(int &num2, int &num3){
    int reversedNum2= 0;
    int reversedNum3= 0;

    while (num2 > 0) {
        reversedNum2 = reversedNum2 * 10 + num2 % 10;
        num2 = num2 / 10;
    }
    while (num3 > 0) {
        reversedNum3 = reversedNum3 * 10 + num3 % 10;
        num3 = num3 / 10;
    }
    num2 = reversedNum2;
    num3 = reversedNum3;
}
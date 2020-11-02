#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int readArray(int integerArray[], int maxNumElements);
int sumArray(int integerArray[], int numElements);
void displayArray(int integerArray[], int numElements);

int main(int nNumberofArgs, char** pszArgs) {
    cout << "This program sums values entered by the user.\n";
    cout << "Terminate the loop by entering a negative number\n";
    cout << endl;

    // read numbers to be summed from the user into a local array
    int inputValues[128];
    int numberOfValues = readArray(inputValues, 128);
    // now output the values and sum of the values
    displayArray(inputValues, numberOfValues);

    cout << "The sum is " << sumArray(inputValues, numberOfValues) << endl;
    // wait until the user is ready before terminating program to allow
    // the user to see the program results.
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}

// readArray - read integers from the operator into integerArray
int readArray(int integerArray[], int maxNumElements) {
    int numberOfValues;

    for (numberOfValues = 0; numberOfValues < maxNumElements; ++numberOfValues) {
        // fetch another number
        int integerValue;
        cout << "Enter next number: ";
        cin >> integerValue;

        if (integerValue < 0)
            break;
        integerArray[numberOfValues] = integerValue;
    }
    return numberOfValues;
}

void displayArray(int integerArray[], int numElements) {
    cout << "The value of the array is: " << endl;
    for (int i = 0; i < numElements; ++i)
        cout << i << ": " << integerArray[i] << endl;
    cout << endl;
}

// sumArray return the sum of the members of an integer array
int sumArray(int integerArray[], int numElements) {
    int accumulator = 0;
    for (int i = 0; i < numElements; ++i)
        accumulator += integerArray[i];
    return accumulator;
}

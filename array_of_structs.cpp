#include <iostream>
#include <fstream>
using namespace std;

//Ryan Esparza



struct TemperatureRecord {
    int day;
    int temperature;                                                      // TODO: Step 1 - Define the struct TemperatureRecord
};                                                               // It should contain two integer fields: day and temperature.


// Constants
const int MAX_DAYS = 31;

// Actual number of records read
int numRecords = 0; 

TemperatureRecord days[MAX_DAYS]; // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)

// Function Prototypes
void readTemperatures(TemperatureRecord[], int& size);                                 // TODO: Fix the parameters
void printTemperatures(const TemperatureRecord records[], int size);
TemperatureRecord findMin(const ???);
TemperatureRecord findMax(const ???);
double findAverage(const TemperatureRecord records[], int size);

int main() {

    // TODO: Step 3 - Call readTemperatures() to load data from file
    readTemperatures(days, numRecords);                                

    cout << "Displaying Temperature Records:" << endl;

    // TODO: Step 4 - Print the temperatures
    printTemperatures(days, numRecords);                                                            

    // TODO: Step 5 - Compute and display min, max, and average temperature
    double averageTemp = 0.0;

    averageTemp = findAverage(days, numRecords);

    cout << "Average Temperature: " << averageTemp << endl;

    return 0;
}

// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array

void readTemperatures(TemperatureRecord records[], int& size) {                     

    ifstream inputFile("temps.txt");

    if (!inputFile.is_open()) {                                                     //checking to make sure file opens
        cout << "Error could not open file." << endl;
        return;
    }

    while (size < MAX_DAYS && inputFile >> records[size].day >> records[size].temperature) {
        size++;
    }
}


// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table
void printTemperatures(const TemperatureRecord records[], int size) {

    cout << "Day     Temperature" << endl;
    cout << "-------------------" << endl;

    for (int i = 0; i < size; i++) {

        cout << records[i].day << "     " << records[i].temperature << endl;
    }
}









// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
double findAverage(const TemperatureRecord records[], int size) {

    if (size == 0) {
        return 0.0;
    }
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += records[i].temperature;
    }
    return sum / size;
}

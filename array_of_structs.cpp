#include <iostream>
#include <fstream>
using namespace std;

//Ryan Esparza



struct TemperatureRecord {
    int day;
    int tempature;                                                      // TODO: Step 1 - Define the struct TemperatureRecord
};                                                               // It should contain two integer fields: day and temperature.


// Constants
const int MAX_DAYS = 31;

// Actual number of records read
int size = 0; 

TemperatureRecord days[MAX_DAYS]; // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)

// Function Prototypes
void readTemperatures(TemperatureRecord[], int& size);                                 // TODO: Fix the parameters
void printTemperatures(const ???);
TemperatureRecord findMin(const ???);
TemperatureRecord findMax(const ???);
double findAverage(const ???);

int main() {


    readTemperatures(days, size);                                // TODO: Step 3 - Call readTemperatures() to load data from file

    // TODO: Step 4 - Print the temperatures

    // TODO: Step 5 - Compute and display min, max, and average temperature

    return 0;
}

void readTemperatures(TemperatureRecord records[], int& size) {                     // TODO: Step 6 - Implement readTemperatures()
                                                                                    // Read from "temps.txt" and store data in the array
    
    ifstream inputFile("temps.txt");
    
    if (!inputFile.is_open()) {                                                     //checking to make sure file opens
        cout << "Error could not open file." << endl;
        return;
    }

    while (size < MAX_DAYS && inputFile >> records[size].day >> records[size].tempature) {
        size++;
    }


// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature

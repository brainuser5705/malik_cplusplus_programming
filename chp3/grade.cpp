#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <array>

using namespace std;

int main(){

    ifstream inputFile;
    ofstream outputFile;

    inputFile.open("test.txt");
    outputFile.open("testavg.out");

    string firstName, lastName;
    array<double, 5> grades;

    inputFile >> firstName >> lastName;

    double avg = 0.0;
    for (int i = 0 ; i < 5; i++){
        inputFile >> grades[i];
        avg += grades[i];
    }

    outputFile << firstName << " " << lastName << endl;
    for (int i = 0 ; i < 5; i++){
        outputFile << grades[i] << endl;
    }
    outputFile << avg / 5 << endl;
}

// inputFile.open("test.txt");
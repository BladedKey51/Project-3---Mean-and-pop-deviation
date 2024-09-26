/*
Lane Jones-Popp
Computer Science Fall 2024
Oct. 1
Lab 3, Mean and Standard Deviation lab
This lab is ment to calculate the Mean and Standard Deviation of 4 intgers. those 4 integers will come from different inputs and should be outputed
to both a file onto the computer and a file within studio.
*/

#include <iostream>
#include <string>
#include "StatsCalc.h"
#include "fstream"



int getInput(std::string nubName);  // get and print inputs 
void printNumber(int number);

int main()
{
	
	std::cout << "We need four numbers from you." << std::endl; // Prompet for putting in mean numbers

	int n1 = getInput("first"); //These are the mean inputs from window prompt 
	int n2 = getInput("second");
	int n3 = getInput("third");
	int n4 = getInput("fourth");

	printNumber(n1); // allows printing of input numbers
	printNumber(n2);
	printNumber(n3);
	printNumber(n4);
	
	
	std::ifstream inFile;				// Declare an input file stream 
	inFile.open("inMeanStd.dat");			// Open file for reading called input.dat
	int number1, number2, number3, number4;
	inFile >> number1 >> number2 >> number3 >> number4;	// Read from the file
	inFile.close();						// Close the file
	

	StatsCalc statsCalc;
	float mean = statsCalc.mean(n1, n2, n3, n4); // mean and standard deviation calulation for both inputs 
	float standarddeviation = statsCalc.standarddeviation(n1, n2, n3, n4);
	float mean2 = statsCalc.mean(number1, number2, number3, number4); // mean and standardeviation for output file
	float standarddeviation2 = statsCalc.standarddeviation(number1, number2, number3, number4);
	std::cout << "The mean of the numbers is: " << mean << std::endl;
	std::cout << "The standard deviation is: " << standarddeviation << std::endl;
	
	// file I/O
	std::ofstream outFile;				// Declare an output file stream (simular to cout)
	outFile.open("output.dat");		// Open file for writing called output.dat
	outFile << "The mean of the numbers is: " << mean2 << std::endl;	// Write to the file
	outFile << "The standard deviation is: " << standarddeviation2 << std::endl; //write to file
	outFile.close();					// Close the file

	return 0;
}


int getInput(std::string nubName)
{
	std::cout << "Please enter the " << nubName << " number: "; // first text prompt 
	int input; // getting text input
	std::cin >> input;
	return input;
}

void printNumber(int number)  // tells what numbers have been entered 
{
	std::cout << "You entered: " << number << std::endl;
}

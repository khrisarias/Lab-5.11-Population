//TODO: Standard Header
//Name: Khristian Arias
//Date: 11/23/19
//Program summary: 5.11 Population


//* TODO: Includes * Include any additional libraries
#include <iostream>
#include <cassert>
#include <string>
#include <vector>

using namespace std;

/**
 * Data Definitions
 * TODO: Write definitions for any data here

	//enum Population {start_num, avg_increase, days_multiply}


  * Function Declarations
  * TODO: Insert your function declarations, purpose statements, I/O comments here.
  **///Purpose statement: Write a program that asks for a number that will increase
	// by a loop that shows the population for each day.

  //Input: 
  //start_num: The population for the first day that is entered
  //avg_increase: The percentage of the increase foe each day
  //days_multiply: The number of the days the increase will happen

  //Output: 
  //new_popul: Organism population after the given amount of days

  //Function Header: double new_popul(int start_num, double avg_increase)  

/**
 * Declarations for given functions. Don't touch.
 **/
void test();
void run();


/**
 * Main Function
 * Don't touch this! use `run()` instead
 **/
int main()
{
	char t;
	cout << "Enter [t] to test, or any other character to run." << endl;
	cin >> t;
	if (t == 't') {
		test();
	}
	else {
		run();
	}
}

/**
 * Function Definitions
 *  Call a test function for each of your functions
 **/
void test()
{
	// TODO: call your test functions here.
	(vector<int>, int multiply_days)
		... v[i] ...
		int i = mutilply_days() + 1;
}

// Use this in place of a main function
void run()
{

	if (start_num < 2 || avg_increase < 0 || multiply_days < 1)
	{
		cout << "Invalid input. Please try again.";
	}

	int i = 0;
	while (i > 0)
	{
		multiply_days = i + 1;
		start_num = start_num * avg_increase;
		new_popul = start_num + start_num;

	}
	cout << "New Population: " << new_popul << endl;
}

/**
 * TODO: Insert your function definitions and unit test function definitions here.
 **/
 //Asserts:
 //start_num:3, avg_increase:.15, days_multiply:4 ----> 3
 //start_num:20, avg_increase:.25, days_multiply:5 ----> 45
 //start_num:1, avg_increase:.50, days_multiply:3 ----> "Invalid. Try again."
 //start_num:10, avg_increase:-.10, days_multiply:7 ----> "Invalid. Try again."
 //start_num:5, avg_increase:.20, days_multiply:0 ----> "Invalid. Try again."

 //Pseudocode:
 //*Find needed values
 //**Get the starting number
 //**Get daily increase as a percentage
 //**Get number of days increase happens
 //*Find out problems to get new number
 //**Multiply starting number and average percent
 //**Add product to starting number
 //**Move to next day
 //**Repeat multiplication with new number and average
 //**Add product to new number
 //**Repeat until the last day is reached
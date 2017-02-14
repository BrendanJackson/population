#include <iostream>
#include <stdint.h>
#include <math.h>

using namespace std;

int main(){

int organism_start;
double population_increase;
int multiplier;

double days_size;

	cout << "Enter the starting number of organisms: ";
	while(organism_start < 2){
		cin >> organism_start;
		if (organism_start < 2){
			cout << "The starting number of organisms must be at least 2." ;			
		}	
	}
	days_size = organism_start;

	cout << "Enter the average daily population increase (as a percentage): ";
	while (population_increase < 0){
		cin >> population_increase;
		if (population_increase < 0){
			cout << "The average daily population increase  must be a positive value ."	;
		}
		
	}
	population_increase = population_increase /	100;

	cout << "Enter the number of days they will multiply: ";
	while (multiplier < 1){
		cin >> multiplier;	
		if( multiplier < 1){
			cout << "The number of days must be at least 1.";
		}
	}
	
	for(int day = 1; day <= multiplier; day++){
		
		cout << "On day " << day << " the population size was " << days_size << ".\n";

		days_size *= population_increase;
	}

}

 /*
Enter the starting number of organisms: Enter the average daily population increase (as a percentage): Enter the number of days they will multiply: On day 1 the population size was 22.
On day 2 the population size was 24.
On day 3 the population size was 27.
On day 4 the population size was 29.
On day 5 the population size was 32.
On day 6 the population size was 35.
On day 7 the population size was 39.
On day 8 the population size was 43.
On day 9 the population size was 47.
...


5.11: Population
Write a program  that will predict the size of a population of organisms. 
The program  should ask the user for the starting number of organisms, their average daily population increase  
(as a percentage, expressed as a fraction in decimal form: for example 0.052 would mean a 5.2% increase  each day), 
and the number of days they will multiply. A loop should display the size of the population for each day.


Input Validation.Do not accept a number less than  2 for the starting size of the population.
 If the user fails to satisfy this print a line with this message  "The starting number of organisms must be at least 2.",
  display the prompt again and try to read the value . Similarly, do not accept a negative number for average daily population
   increase , using the message  "The average daily population increase  must be a positive value ." and retrying. Finally,
    do not accept a number less than  1 for the number of days they will multiply and use the message  
    "The number of days must be at least 1."
*/
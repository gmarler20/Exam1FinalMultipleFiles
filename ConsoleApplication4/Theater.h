// I affirm that all code written below was written solely by me,
// Griffen Marler, and that any help I recieved adhered to the rules
// states for this exam. 


#include <iostream>
#include <string>
using namespace std;

class Theater {

public:
	Theater(string Name, string Phone);
	 
	int GetShowTimeForGenre(string Genre1);

	void AddMovie(Movie& ob);

	string GetMovieForHour(int hour);

	int GetPopcornPrice(); 
	int GetCokePrice(); 

private:
	int ShowTime;
	string Title;
	string Genre;
	const int Popcorn = 5;
	const int Coke = 3;
};
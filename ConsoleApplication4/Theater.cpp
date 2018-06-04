// I affirm that all code written below was written solely by me,
// Griffen Marler, and that any help I recieved adhered to the rules
// states for this exam. 


#include "Theater.h"
#include "Movie.h"
#include "stdafx.h"
#include <iostream>
#include <string>


	Theater::Theater(string Name, string Phone)
	{
		Name = "Garland";
		Phone = "5096801123";
	}
	// I was not sure how to take each object created in the
	// for loop in main and then get each of its values. I tried 
	// void Addmovie(Movie& ob[]) to put in as the parameter and 
	// then to have 
	/* void AddMovie(Movie& ob) {
	{
	for(int i = 0; i < 11; i++)
	ShowTime[i] = ob[i].GetShowTime();
	Title[i] = ob[i].GetTitle();
	Genre[i] = ob[i].GetGenre();
	}*/
	/*
	I also tried
	void AddMovie(Movie& ob) {
	for (int i = 0; i < 11; i++)
	{ ShowTime[a] = ob.GetShowTime();
	Title [a] = ob.GetTitle();
	Genre[a] = ob.GetGenre();
	}
	}

	I had no luck with this.
	*/

	// I spent lots of time trying to figure this out, but ultimately
	// decided that I would rather have it run than turn in something
	// that didn't run so I went back to what I had below. I will need
	// to Skype you at some point so I can understand how I take all of the
	// objects that were created and stored in the array in main and use their 
	// individual data. My problem throughout this program is that I am only 
	// reading the data from the last object Movie("Usual Suspects", "Action", 23)
	// and could not figure out how to add each individual object from the array. 
	// I don't understand how to access each individual object. 
	
	void Theater::AddMovie(Movie& ob) {
		{
			ShowTime = ob.GetShowTime();
			Title = ob.GetTitle();
			Genre = ob.GetGenre();
		}
	}

	// If the hour of the specific movie is equal to the hour input, output the title.
	string Theater::GetMovieForHour(int hour) {
		if (hour == ShowTime || hour == ShowTime + 1)
			cout << Title;
		else
			return "";
	}

	// Ran into a problem here as well when I was trying to read in the Genre. When I read it in
	// it is always giving me the genre from the last object created Movie("Usual Suspects, "Action, 23)
	// It works for the last object, but nothing else. 
	int Theater::GetShowTimeForGenre(string Genre1) {
		if (Genre1 == Genre)
			return 0;
		else
			return -1;
	}

	// We don't want Popcorn price or coke price to be changed, so both are const int and const functions.
	int Theater::GetPopcornPrice() {
		return Popcorn;
	}
	int Theater::GetCokePrice()  {
		return Coke;
	}


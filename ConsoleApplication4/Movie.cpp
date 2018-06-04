#include "stdafx.h"
#include "Movie.h"
#include <string>
using namespace std;


	Movie::Movie()
	{
		Title = "Lord of the Rings ";
		Genre = "Action ";
		ShowTime = 9;
	}

	// This constructor will default to any of the values set in the = if nothing is entered for them
	Movie::Movie(string Title = "Lord of the Rings", string Genre = "Comedy", int ShowTime = 9) {
		setTitle(Title);
		setGenre(Genre);
		setShowTime(ShowTime);
	}
	string Movie::GetTitle()
	{
		return Title;
	}
	string Movie::GetGenre()
	{
		return Genre;
	}
	int Movie::GetShowTime()
	{
		return ShowTime;
	}

	void Movie::setTitle(string x) {
		Title = x;
	}
	void Movie::setGenre(string y) {
		Genre = y;
	}
	void Movie::setShowTime(int z) {
		ShowTime = z;
	}

};


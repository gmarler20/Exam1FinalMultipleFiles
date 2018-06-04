// I affirm that all code written below was written solely by me,
// Griffen Marler, and that any help I recieved adhered to the rules
// states for this exam. 

class Movie
{

	public:

		Movie();

		// This constructor will default to any of the values set in the = if nothing is entered for them
		Movie(string Title = "Lord of the Rings", string Genre = "Comedy", int ShowTime = 9);
		
		string GetTitle();
		string GetGenre();
		int GetShowTime();
	void setTitle(string x);
	void setGenre(string y);
	void setShowTime(int z);

	private:
		string Title;
		string Genre;
		int ShowTime;

};


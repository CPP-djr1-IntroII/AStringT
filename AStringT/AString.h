#pragma once

#include <ostream>

using namespace std;

class AString {
public:
	static const size_t MIN = 16;

	// Creates empty string
	AString (); // 1

	// Copies rcStr contents to new string
	AString (const AString &rcStr);	// 7

	// Copies rcStr contents from pos for len characters to new string
	AString (const AString &rcStr, size_t pos, size_t len); // 10

	// Copies conents of what pStr points to to new string
	AString (const char *pStr);	// 4

	// Similar to 10 but uses pointer instead
	AString (const char *pStr, size_t pos, size_t len); // 15 write and test

	// Deletes memory allocated
	virtual ~AString ();

	// Assigns contents of rcStr to calling object
	AString &assign (const AString &rcStr); // 11 write and test

	// Assigns calling object the values pointed to by pStr
	AString &assign (const char *pStr); // 12 write and test

	// Appends contents of rcStr to the end of the calling object
	AString &append (const AString &rcStr); // 13 write and test

	// Appends contents pStr points to
	AString &append (const char *pStr); // 14 write and test

	// returns character at pos if legal
	char at (size_t pos);	// 6

	// pushes character passed in to the end of the calling object
	void push_back (char ch);	// 9

	// returns the last character of calling object deleting the character
	char pop_back ();	// 8

	// returns the size of the string
	size_t size () const;	// 2

	// returns the capacity of the string
	size_t capacity () const;	// 3

	// outputs the contents of the calling object
	void write (ostream &outFile) const;	// 5

private:
	char *mpszData;
	size_t mCapacity;
	size_t allocate (size_t len);
};
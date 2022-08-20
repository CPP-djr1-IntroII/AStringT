#include "AString.h"
#include <new>
#include <cstring>
#include <iostream>

using namespace std;

size_t AString::allocate (size_t len) {
	return (len / MIN + 1) * 16;
}

AString::AString () {	// 1

}

size_t AString::size () const {	// 2
	return 0; // fix
}

size_t AString::capacity () const {	// 3
	return 0; // fix
}

AString::AString (const char *pStr) {	// 4

}

void AString::write (ostream &outFile) const {	// 5

}

char AString::at (size_t pos) {	// 6

	return ' '; // fix
}

AString::AString (const AString &rcStr) {	// 7

}

char AString::pop_back () {	// 8

	return ' '; // fix
}

void AString::push_back (char ch) {	// 9

}

AString::~AString () {
	mCapacity = 0;
	delete mpszData;
}


/*
Position of the first character in str that is copied to the object as a substring.
If this is greater than str's length, it throws out_of_range.
Note: The first character in str is denoted by a value of 0 (not 1).
*/
AString::AString (const AString &rcStr, size_t pos, size_t len) {

}
/*
 * student.cpp
 *
 *  Created on: Feb 26, 2020
 *      Author: Gabriel
 */

#include "student.h"

Student::Student(): student_id(0), phone(0), score(0)
{
}

istream& operator >> (istream& in, Student& s)
{
	in >> s.student_id >> s.fname >> s.lname >> s.phone >> s.email >> s.score;
	return in;
}

ostream& operator << (ostream& out, const Student& s)
{
	out.precision(10);
	out << s.student_id << " " << s.fname << " " <<
			s.lname << " " << s.phone << " " << s.email << " " << s.score << "\n";
	return out;
}

bool operator > (const Student& s1, const Student& s2)
{
	return (s1.score > s2.score);
}
bool operator < (const Student& s1, const Student& s2)
{
	return (s1.score < s2.score);
}

Student operator +(const Student& s1, const Student& s2)
{
	Student temp;
	temp.score = s1.score + s2.score;
	return temp;
}

void printAvg(ostream& out, Student& s, int count)
{
	double avg;
	avg = s.score/count;
	out << avg;
}





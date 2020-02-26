/*
 * Students.h
 *
 *  Created on: Feb 26, 2020
 *      Author: Gabriel
 */
#include <fstream>
#include <string>
using namespace std;
#ifndef STUDENT_H_
#define STUDENT_H_

class Student
{
public:
	Student();
	friend istream& operator >> (istream& in, Student& s);
	friend ostream& operator << (ostream& out, const Student& s);
	friend bool operator > (const Student& s1, const Student& s2);
	friend bool operator < (const Student& s1, const Student& s2);
	friend Student operator +(const Student& s1, const Student& s2);
	friend void printAvg(ostream& out, Student& s, int count);
private:
	double student_id, phone;
	string fname, lname, email;
	double score;
};



#endif /* STUDENT_H_ */

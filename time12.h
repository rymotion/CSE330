// Class: CSE 330// Term: Spring 2015// Instructor: George M. Georgiou// Name(s): Mbusi Hlatshwayo Ryan Paglinawan// Lab 1// Title: time 12#ifndef TIME12_H#define TIME12_H#include "d_time24.h"#include <string>#include <iomanip>#include "d_except.h"using namespace std;enum timeUnit {AM, PM};class time12 : public time24 {public:	time12(int h, int m, timeUnit tunit);	//	Constructor for the clock	void addTime(int m);	//	Adds time to clock	void readTime();	void writeTime();	//	Works as I/O for the clockprivate:	time24 convert(int hou, int min, timeUnit tunit);};#endif
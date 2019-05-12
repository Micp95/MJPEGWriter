#ifndef LOGGER_H
#define LOGGER_H

#include <istream>
#include <string>

#include <time.h>
#include <sys/time.h>
#include <ctime>

using namespace std;
class Logger{
public:
	static void Log(string message);
private:
	static long int timeStart;
	
	inline static long int GetDeltaTime();
};

#endif


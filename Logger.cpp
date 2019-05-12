#include"Logger.h"
#include <iostream>

using namespace std;

void Logger::Log(string message){
	long int delta = GetDeltaTime();
	cout <<delta << ":\t\t" << message<< endl;
}

long int Logger::timeStart = 0;

long int Logger::GetDeltaTime(){
	struct timeval tp;
	gettimeofday(&tp, NULL);
	
	long int currentTime = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	if(timeStart ==0)
		timeStart = currentTime;
		
	return currentTime - timeStart;
}

#ifndef CLOCK_H
#define CLOCK_H
#include <chrono>
#include <string>

class Clock
{
public:
	Clock(){ seconds = std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1);	}
	int get_hours() const;
	int get_minutes() const;
	int get_seconds() const;
	std::string get_time()const;
	void update_time();
private:
	int seconds;
};

#endif // !CLOCK_H

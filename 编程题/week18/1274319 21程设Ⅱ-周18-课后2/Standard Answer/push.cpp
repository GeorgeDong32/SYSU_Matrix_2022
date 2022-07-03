#include <thread>
#include <vector>

void push_back(std::vector<std::thread>& vec, std::thread& t)
{
	vec.push_back(std::move(t));
}
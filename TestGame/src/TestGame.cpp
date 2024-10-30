#include <Ein.h>

class TestGame : public Ein::Application
{
public:
	TestGame()
	{

	}

	~TestGame()
	{

	}
};

Ein::Application* Ein::CreateApplication()
{
	return new TestGame();
}
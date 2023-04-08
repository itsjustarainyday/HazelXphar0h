#include "HxP.h"

class Sandbox : public HazelXphar0h::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

HazelXphar0h::Application* HazelXphar0h::CreateApplication()
{
	return new Sandbox();
}
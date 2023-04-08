#pragma once

#ifdef HxP_PLATFORM_WINDOWS

extern HazelXphar0h::Application* HazelXphar0h::CreateApplication();

int main(int argc, char** argv)
{
	printf("HxP Engine!\n");
	auto app = HazelXphar0h::CreateApplication();
	app->Run();
	delete app;
}

#endif
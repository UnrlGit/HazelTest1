#pragma once


#ifdef HZ_PLATFORM_WINDOWS

// function that we will define somewhere else which will return this app 2 us
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	printf("Hazel Engine\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;


}

#endif // HZ_PLATFORM_WINDOWS

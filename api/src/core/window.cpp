#include "window.h"

namespace xy
{	
	Window_GLOB::Window_GLOB()
	{
		glfwInit();
		glfwDefaultWindowHints();

		handle = glfwCreateWindow(800, 600, "xyeng", nullptr, nullptr);
		glfwMakeContextCurrent(handle);
	}

	Window_GLOB::~Window_GLOB()
	{
		glfwDestroyWindow(handle);
		glfwTerminate();
	}

	bool Window_GLOB::ShouldClose() const
	{
		return glfwWindowShouldClose(handle);
	}

	void Window_GLOB::PollEvents() const
	{
		glfwPollEvents();
	}

	Window_GLOB::Handle_t Window_GLOB::GetHandle()
	{
		return handle;
	}

	namespace global
	{
		Window_GLOB* Window;

		Window_GLOB* GetWindow()
		{
			return Window;
		}

		Window_GLOB** GetWindowPointer()
		{
			return &Window;
		}

		void CreateWindow()
		{
			Window = new Window_GLOB();
		}

		void DestroyWindow()
		{
			delete Window;
		}		
	}
}
#pragma once

#include "common.h"

#include <GLFW/glfw3.h>

namespace xy
{
	class XY_API Window_GLOB
	{
	public:
		using Handle_t = GLFWwindow*;

		Window_GLOB();
		~Window_GLOB();

		bool ShouldClose() const;
		void PollEvents() const;

		Handle_t GetHandle();

	private:
		Handle_t handle;
	};

	namespace global
	{
		XY_API Window_GLOB* GetWindow();
		XY_API void CreateWindow();
		XY_API void DestroyWindow();
	}
}

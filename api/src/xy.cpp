#include "core/window.h"

#include "../include/xy/xy.h"

namespace xy
{
	void Init()
	{
		Window_GLOB** p_window = global::GetWindowPointer();
		*p_window = new Window_GLOB();
	}

	void Destroy()
	{
		Window_GLOB** p_window = global::GetWindowPointer();
		delete *p_window;
	}
}
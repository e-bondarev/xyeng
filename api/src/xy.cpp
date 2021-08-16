#include "core/window.h"

#include "../include/xy/xy.h"

namespace xy
{
	void Init()
	{
		global::CreateWindow();
	}

	void Destroy()
	{
		global::DestroyWindow();
	}
}
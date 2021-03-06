#include "xy/xy.h"

int main(int argc, char* argv[])
{
	xy::Init();

	while (!xy::global::GetWindow()->ShouldClose())
	{
		xy::global::GetWindow()->PollEvents();
	}

	xy::Shutdown();

	return 0;
}
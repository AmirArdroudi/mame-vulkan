#include "app.h"

namespace mame
{
	void App::run()
	{
		while (!mameWindow.shouldClose())
		{
			glfwPollEvents();
		}
	}
}
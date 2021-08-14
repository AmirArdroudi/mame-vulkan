#include "mame_window.h"

namespace mame
{
	mameWindow::mameWindow(int w, int h, std::string name) :
		width{ w }, height{ h }, windowName{ name }
	{
		initWindow();
	}

	mameWindow::~mameWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void mameWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}

}
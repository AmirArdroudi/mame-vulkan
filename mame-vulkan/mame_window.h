#pragma once

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <string>

namespace mame
{
	class mameWindow
	{

	public:

		mameWindow(int w, int h, std::string name);
		~mameWindow();

		bool shouldClose() { return glfwWindowShouldClose(window); }
	private:

		void initWindow();

		const int width;
		const int height;
		std::string windowName;

		
		GLFWwindow* window;
	};


} // namespace mame

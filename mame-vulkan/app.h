#pragma once

#include "mame_window.h"

namespace mame
{
	class App
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private: 
		mameWindow mameWindow{ WIDTH, HEIGHT, "yellow mame!" };
	};
}

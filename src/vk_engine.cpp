
#include "vk_engine.h"


#include <vk_types.h>
#include <vk_initializers.h>
#include <iostream>
#include <format>

void VulkanEngine::init()
{
	if (!glfwInit()) {
		std::cout << std::format("[ InitializeWindow ] ERROR\nFailed to initialize GLFW!\n");
		return;
	}
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	//glfwWindowHint(GLFW_RESIZABLE, isResizable);
	pWindow = glfwCreateWindow(_windowExtent.width, _windowExtent.height, "LeranVulkan", nullptr, nullptr);
	if (!pWindow) {
		std::cout << std::format("[ InitializeWindow ]\nFailed to create a glfw window!\n");
		glfwTerminate();
		return;
	}
	//everything went fine
	_isInitialized = true;
}
void VulkanEngine::cleanup()
{	
	if (_isInitialized) {
		
		glfwTerminate();
	}
}

void VulkanEngine::draw()
{
	//nothing yet
}

void VulkanEngine::run()
{
	while (!glfwWindowShouldClose(pWindow)) 
	{

		/*渲染过程，待填充*/

		glfwPollEvents();
		draw();
	}
}


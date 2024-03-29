// Main class for testing purposes
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "simplygui/simplygui.h"

int main() {
	if (!glfwInit()) return 1;

	//Initialize for version OpenGL version 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	//Create window context
	GLFWwindow* window = glfwCreateWindow(1280, 720, "SimplyGUI Example", NULL, NULL);
	if (window == NULL) return 1;
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1); // Enable vsync

	//Initialize GLEW
	if (glewInit() != GLEW_OK) return 1;

	//Setup viewport
	glViewport(0, 0, 1280, 720); // I know, its hardcoded but for this example it will do

	//Initialze SimplyGUI
	SimplyGUI::Initialize(window);
	glClearColor(0.f, 0.f, 0.f, 0.f);
	while (!glfwWindowShouldClose(window)) {
		//Render
		SimplyGUI::NewFrame();

		SimplyGUI::Element();
		//All for element goes in between here
		SimplyGUI::SetColor4f(SimplyVec4f(0,1,0,1));

		SimplyGUI::StopElement();

		SimplyGUI::Render();

		//Clear and swap buffers
		glfwSwapBuffers(window);

		//Poll glfw events
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT);
	}
}
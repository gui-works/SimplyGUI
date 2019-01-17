// Simply Gui, a simple GUI "Header" for OpenGL
// Version: 17/1/2018
// 
// Simply Gui contains a set of files that you can easily copy over to your project.
// You can easily use Simply GUI by including the files in your OpenGL C++ project.
// Simply Gui only supports GLFW + GLEW as external libraries for the moment, but this is due to change
//
// Created by Jens Heukers, you can edit these files to fit your project

#ifndef SIMPLYGUI_H
#define SIMPLYGUI_H

// Include GLEW and GLFW
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Define error messages
#define SIMPLYGUI_NO_ERROR "SimplyGUI: No Error"
#define SIMPLYGUI_INSTANCE_ALREADY_EXISTS "SimplyGUI: Instance already exists"

/**
* SimplyGUI class contains the main functionality for the SimplyGUI library.
* SimplyGUI is a singleton class meaning that only one instance is allowed,
* SimplyGUI acts as a state machine, meaning that actions will be performed depending on the state.
*/
class SimplyGUI {
private:
	//Static variables
	static SimplyGUI* instance; /**< static singleton instance */

	//Other variables
	const char* error; /**< const char pointer holding current error message, At beginnning of every frame error will be reset to SIMPLYGUI_NO_ERROR*/
	GLFWwindow* windowContext; /**< the window context used by the user.*/

	/**
	* Private Constructor, initializes variables
	*/
	SimplyGUI();

	/**
	* Sets the current error string
	*/
	void SetError(const char* error);

public:
	/**
	* Initializes SimplyGUI and creates the instance.
	* @param window The active GLFWwindow instance.
	* @return void
	*/
	static void Initialize(GLFWwindow* window);

	/**
	* Returns the current error.
	* @return const char*
	*/
	static const char* ReadError();
};

#endif // !SIMPLYGUI_H
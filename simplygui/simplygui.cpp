// Source file for simplygui.h
// This file contains all definitions for the main header file of Simply GUI
// You are allowed to edit this file to your wishes.

// Include SimplyGUI header file
#include "simplygui.h"

// We declare the singleton instance here
SimplyGUI* SimplyGUI::instance; // Declare instance

//Sets the current error
void SimplyGUI::SetError(const char* error) {
	this->error = error;
}

// Constructor is a private method, we do not want the user to call this method since it is a singleton instance.
// Also it is just more clear for the user this way
SimplyGUI::SimplyGUI() {
	error = SIMPLYGUI_NO_ERROR; // Set error to no error
}

// Initialize method, takes in a pointer to the current GL window context as parameter.
// We also make sure that when this method is called for a second time, we do not re-instance.
void SimplyGUI::Initialize(GLFWwindow* window) {
	if (instance) { // If instance already exists
		instance->SetError(SIMPLYGUI_INSTANCE_ALREADY_EXISTS); // Set error
		return; // Return
	}

	//If instance does not exist we can continue
	instance = new SimplyGUI(); // Create new instance
	instance->windowContext = window; // Set the window context used.
}

//Returns the current value of the error variable
//Errors are defined in simplygui.h
const char* SimplyGUI::ReadError() {
	return instance->error; // Return error string
}

void SimplyGUI::NewFrame() {
	instance->currentElement = nullptr; // Set current element to nullptr

	for (size_t i = 0; i < instance->windowElements.size(); i++) {
		instance->windowElements[i]->OnNewFrame(); // Call OnNewFrame method on windowElements
		delete instance->windowElements[i];

		//Delete pointer
		instance->windowElements.erase(instance->windowElements.begin() + i);
	}
}
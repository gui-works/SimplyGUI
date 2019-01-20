// SimplyGUI_Renderer handles all the rendering to OpenGL.
// You are free to edit this file if needed for your project
#ifndef SIMPLYGUI_RENDERER_H
#define SIMPLYGUI_RENDERER_H

//Include GLEW + GLFW
#include <GL/glew.h>
#include <GLFW/glfw3.h>

//Include simplygui_types.h
#include "simplygui_types.h"

class SimplyGUI_Renderer {
private:
	//We generate the quad vertex buffer object and quad vertex array object in initialize
	//The shader is written in simplygui_renderer.cpp
	unsigned int quadVBO; /**< The Quad vertex buffer object */
	unsigned int quadVAO; /**< The Quad vertex array object */
	unsigned int shaderProgram; /**< The Shader program used by the renderer */
public:
	/**
	* Constructor, Initialzes variables
	*/
	SimplyGUI_Renderer();

	/**
	* Initializes the renderer, creates the quadVBO, quadVAO and shaderProgram
	* @return void
	*/
	void Initialize();

	/**
	* Renders a element to the screen framebuffer object, uses default quad Vertex Buffer Object and uses shader to display
	* @param element The element to be rendered
	* @return void
	*/
	void RenderElement(SimplyElement* element);
};

#endif // !SIMPLYGUI_RENDERER_H

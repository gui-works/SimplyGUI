//Implementation for SimplyGUI_Renderer class
//It is important to note that GLFW and GLEW should already be initialzed when Initialize() method is called
#include "simplygui_renderer.h"
#include <iostream>

//--------------------------------------------------------
//The simple vertex shader we use to draw the quads to the screen
const char* vertexShader = "#version 330 core\n"
"layout (location = 0) in vec3 aPos;\n"
"void main()\n"
"{\n"
"   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
"}\0";
//--------------------------------------------------------
//--------------------------------------------------------
// The fertex shader.
const char* fragmentShader = "#version 330 core\n"
"out vec4 FragColor;\n"
"uniform vec4 color;\n"
"void main()\n"
"{\n"
"   FragColor = vec4(color.x, color.y, color.z, color.w);\n"
"}\n\0";
//--------------------------------------------------------

//Initialize variables
SimplyGUI_Renderer::SimplyGUI_Renderer() {
	this->quadVAO = 0;
	this->quadVBO = 0;
	this->shaderProgram = 0;
}

//OpenGL should already be initialzed...
void SimplyGUI_Renderer::Initialize() {
	//Generate shader
	unsigned int _vertexShader;
	_vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(_vertexShader, 1, &vertexShader, NULL);
	glCompileShader(_vertexShader);

	unsigned int _fragmentShader; 
	_fragmentShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(_fragmentShader, 1, &fragmentShader, NULL);
	glCompileShader(_fragmentShader);

	shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram, _vertexShader);
	glAttachShader(shaderProgram, _fragmentShader);
	glLinkProgram(shaderProgram);

	//Cleanup
	glDeleteShader(_vertexShader);
	glDeleteShader(_fragmentShader);

	float quadVertices[] = {
		1.0f,  1.0f, 0.0f,  // top right
		1.0f, -1.0f, 0.0f,  // bottom right
		-1.0f,  1.0f, 0.0f,  // top left 
		1.0f, -1.0f, 0.0f,  // bottom right
		-1.0f, -1.0f, 0.0f,  // bottom left
		-1.0f,  1.0f, 0.0f   // top left
	};

	//Generate buffers
	glGenBuffers(1, &quadVBO);
	glGenVertexArrays(1, &quadVAO);

	// 1. bind Vertex Array Object
	glBindVertexArray(quadVAO);
	// 2. copy our vertices array in a buffer for OpenGL to use
	glBindBuffer(GL_ARRAY_BUFFER, quadVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(quadVertices), quadVertices, GL_STATIC_DRAW);
	// 3. then set our vertex attributes pointers
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);


}

void SimplyGUI_Renderer::RenderElement(SimplyElement* element) {
	//Set uniforms
	glUniform4f(glGetUniformLocation(shaderProgram, "color"), element->GetColor4f().x, element->GetColor4f().y, element->GetColor4f().z, element->GetColor4f().w);

	glUseProgram(shaderProgram); // Bind framebuffer shader program
	glBindVertexArray(quadVAO); // Bind Vertex Array Object
	glDrawArrays(GL_TRIANGLES, 0, 6); // Draw quad
}
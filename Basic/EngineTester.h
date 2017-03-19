#pragma once
#include "BasicShaderManager.h"
#include "Renderer.h"
#include "ModelBuilder.h"
#include "Model.h"
#include "Camera.h"

#include <GL\glew.h>
#include <GLFW\glfw3.h>

#include <array>
#include <vector>
#include <memory>

class EngineTester
{
public:
	EngineTester();
	~EngineTester();

	void gameLoop();

private:
	int width = 800;
	int height = 600;
	const char* title = "GAME";
	GLFWwindow* window;
	std::unique_ptr<Renderer> renderer;
	std::unique_ptr<Renderer> texRenderer;
	std::unique_ptr<Renderer> lightRenderer;
	ModelBuilder modelBuilder;
	std::unique_ptr<Entity> ent3D;
	std::unique_ptr<Entity> ent2D;
	std::unique_ptr<Entity> texEnt;
	std::unique_ptr<Entity> objEnt;
	std::unique_ptr<Entity> objDragonEnt;
	Camera camera;

	std::vector<GLfloat> vertices2D = {
		0.5f,  0.5f, 0.0f, 
		0.5f, -0.5f, 0.0f, 
		-0.5f, -0.5f, 0.0f,  
		-0.5f,  0.5f, 0.0f,
	};
	std::vector<GLfloat> vertexColors2D = {
		1.0f, 0.0f, 0.0f,  // Left
		0.0f, 1.0f, 0.0f,  // Right
		0.0f, 0.0f, 1.0f,
		0.0f, 0.0f, 1.0f,
	};
	std::vector<GLuint> indices2D = {  // Note that we start from 0!
		0, 1, 3, // First Triangle
		1, 2, 3  // Second Triangle
	};

	std::vector<GLfloat> vertices3D = {
		-0.5f,0.5f,0,
		-0.5f,-0.5f,0,
		0.5f,-0.5f,0,
		0.5f,0.5f,0,

		-0.5f,0.5f,1,
		-0.5f,-0.5f,1,
		0.5f,-0.5f,1,
		0.5f,0.5f,1,

		0.5f,0.5f,0,
		0.5f,-0.5f,0,
		0.5f,-0.5f,1,
		0.5f,0.5f,1,

		-0.5f,0.5f,0,
		-0.5f,-0.5f,0,
		-0.5f,-0.5f,1,
		-0.5f,0.5f,1,

		-0.5f,0.5f,1,
		-0.5f,0.5f,0,
		0.5f,0.5f,0,
		0.5f,0.5f,1,

		-0.5f,-0.5f,1,
		-0.5f,-0.5f,0,
		0.5f,-0.5f,0,
		0.5f,-0.5f,1
	};
	std::vector<GLfloat> colors3D = {
		1.0f, 0.0f, 0.0f, 
		0.0f, 1.0f, 0.0f, 
		0.0f, 0.0f, 1.0f,
		1.0f, 0.0f, 0.0f,  
		0.0f, 1.0f, 0.0f, 
		0.0f, 0.0f, 1.0f,
		1.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 1.0f,
		1.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 1.0f,
		1.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 1.0f,
		1.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 1.0f,
		1.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 1.0f,
		1.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 1.0f,
	};
	std::vector<GLuint> indices3D = {
		0,1,3,
		3,1,2,
		4,5,7,
		7,5,6,
		8,9,11,
		11,9,10,
		12,13,15,
		15,13,14,
		16,17,19,
		19,17,18,
		20,21,23,
		23,21,22
	};
	std::vector<GLfloat> textureCoords = {
		0.0f, 0.0f,
		0.0f, 1.0f,
		1.0f, 1.0f,
		1.0f, 0.0f
	};

	void initWindow();
};


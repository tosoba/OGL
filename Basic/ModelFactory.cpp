#include "ModelFactory.h"

ModelFactory::ModelFactory()
{
}

ModelFactory::~ModelFactory()
{
	for (size_t i = 0; i < vaos.size(); i++)
		glDeleteVertexArrays(1, &vaos[i]);

	for (size_t i = 0; i < vbosAndEbos.size(); i++)
		glDeleteBuffers(1, &vbosAndEbos[i]);
}

GLuint ModelFactory::createAndBindVAO()
{
	GLuint vaoID;
	glGenVertexArrays(1, &vaoID);
	glBindVertexArray(vaoID);
	vaos.push_back(vaoID);
	return vaoID;
}

void ModelFactory::unbindVAO()
{
	glBindVertexArray(0);
}

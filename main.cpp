#include <Windows.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glew32.lib")
#pragma comment(lib, "glfw3.lib")

int main(int argc, char *argv[])
{
	if (glfwInit() == GL_FALSE)
	{
		MessageBox(nullptr, TEXT("GLFW ‚ª‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½"), TEXT("4D Sensor"), MB_OK);
		return EXIT_FAILURE;
	}
	atexit(glfwTerminate);

	return EXIT_SUCCESS;
}

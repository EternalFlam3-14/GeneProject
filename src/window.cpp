//Library inclusions
#include <include/glad/glad.h> // Required to be above GLFW
#include <GLFW/glfw3.h> // Main Graphics control, hello psudo OS-independent programming!
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

// Settings (GL, Glad)
const unsigned int SCR_WIDTH = 2000;
const unsigned int SCR_HEIGHT = 950;
// whenever the window size is changed (by OS or user), this callback function executes
void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
	// make sure the images drawn matches the new window dimensions; width and
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}
void processInput(GLFWwindow *window) // Input Processing
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, true);
	}
}

int Window()
{
	// glfw configure
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	#ifdef __APPLE__  // uncomment this statement to fix compilation on OS X
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	#endif


	auto gameWindow = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", 0, 0); // Open Window
	if (!gameWindow)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(gameWindow);
    
	int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress); // Calling Glad
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) // Initializing Glad
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}

	while (!glfwWindowShouldClose(gameWindow)) // Render loop
	{
		processInput(gameWindow); //input

		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT); // change background color 
		glfwSwapBuffers(gameWindow); // swap buffers
		glfwPollEvents(); // poll IO events (keys pressed/released, mouse moved etc.)
	}

	glfwTerminate(); // Clears any window-specific allocations
	return 0;
}


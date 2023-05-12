#include <GLFW/glfw3.h>
#include <math.h>
#include <corecrt_math_defines.h>



void Show()
{


	float x, y, x2, y2, x3, y3, x4, y4;
	float cnt = 20;
	float l = 0.05, l2 = 0.09, l3 = 0.13, l4 = 0.17;
	float a = M_PI * 2 / cnt;
	glBegin(GL_POINTS);
	glColor3f(-0.4, 0.5, 1);
	for (float i = 0; i < cnt; i++)
	{

		x2 = sin(a * i) * l2;
		y2 = cos(a * i) * l2;
		glVertex2f(x2 + 0.1, y2 + 0.75);

		x4 = sin(a * i) * l4;
		y4 = cos(a * i) * l4;
		glVertex2f(x4 + 0.1, y4 + 0.12);

		x4 = sin(a * i) * l4;
		y4 = cos(a * i) * l4;
		glVertex2f(x4 + 0.1, y4 - 0.9);


	}

	glEnd();
}






int main(void)
{
	GLFWwindow* window;


	if (!glfwInit())
		return -1;


	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);


	while (!glfwWindowShouldClose(window))
	{


		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glClearColor(0.23f, 0.18f, 0.3f, 0.43f);
		//glEnable(GL_DEPTH_TEST);
		glPointSize(3);




		Show();

		glLoadIdentity();
		glRotatef(65, 0.1, 0.0, 0.0);



		glDisable(GL_DEPTH_TEST);
		glfwSwapBuffers(window);


		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

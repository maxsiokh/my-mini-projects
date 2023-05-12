#include <GLFW/glfw3.h>
#include <math.h>
#include <iostream>
int main(void)
{
	using namespace std;
	GLFWwindow* window;

	if (!glfwInit())
		return -1;

	
	window = glfwCreateWindow(800, 800, "gg", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	float z = 0;
	float y = 0; float x = 0;
	glEnable(GL_DEPTH_TEST);
	glFrustum(-1, 1, -1, 1, 1, 2);


	float dno = 0.4; //ширина дна стакана
	float up = 0.3; // ширина верха
	float bottom = 0.7; // ширина самого низу кула

	float dnoPosition = 0.8; // Відстань від дна до низу стакана
	float upPosition = 0;
	float bottPosition = -0.8; 


	// Кількість граней в всіх колів
	const int N = 15; 

	//Масив точок для центрального кола
	float* arrX = new float[N]; 
	float* arrY = new float[N];



	//Масив точок для бокового кола
	float* arrXx = new float[N]; 
	float* arrYy = new float[N];


	//Масив точок для самого низу кола
	float* arrXxB = new float[N]; 
	float* arrYyB = new float[N];

	//Розрахунок розміщення точок 
	{
		float f12 = 2 * 3.14 / N;

		for (int i = 0; i < N; i++) {
			arrX[i] = cos(i * f12);
			arrY[i] = sin(i * f12);
		}


		for (int i = 0; i < N - 1; i++) {
			arrXx[i] = (arrX[i] + arrX[i + 1]) / 2;
			arrYy[i] = (arrY[i] + arrY[i + 1]) / 2;
		}
		arrXx[N - 1] = (arrX[N - 1] + arrX[0]) / 2;
		arrYy[N - 1] = (arrY[N - 1] + arrY[0]) / 2;


		for (int i = 0; i < N - 1; i++) {
			arrXxB[i] = (arrX[i] + arrX[i + 1]) / 4;
			arrYyB[i] = (arrY[i] + arrY[i + 1]) / 4;
		}
		arrXxB[N - 1] = (arrX[N - 1] + arrX[0]) / 4;
		arrYyB[N - 1] = (arrY[N - 1] + arrY[0]) / 4;
	}

	while (!glfwWindowShouldClose(window))
	{

		glClearColor(0.23f, 0.18f, 0.3f, 0.43f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glColor3d(1, 0, 0);

		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		z += 0.010;	
		y += 0.01;	//швидкість обертань
		x += 0.003;	

		glRotatef(z, 1, 1, 0);
		glRotatef(y, 0, 1, 0);
		glRotatef(x, 0, 1, 1);




		{
			glPointSize(5);

			glColor3d(0, 2, 3);
			glBegin(GL_POINTS);
			for (int i = 0; i < N; i++) {
				float arx = arrXx[i] * dno, ary = arrYy[i] * dno;
				glVertex3d(arx, ary, 0);
			}
			glEnd();

			glBegin(GL_POINTS);
			for (int i = 0; i < N; i++) {
				float arx = arrX[i] * up, ary = arrY[i] * up;
				glVertex3d(arx, ary, bottPosition);
			}
			glEnd();
			glBegin(GL_POINTS);
			glVertex3d(0, 0, dnoPosition);
			glEnd();

			glBegin(GL_POINTS);
			for (int i = 0; i < N; i++) {
				float arx = arrXxB[i] * bottom, ary = arrYyB[i] * bottom;
				glVertex3d(arx, ary, dnoPosition);
			}
			glEnd();
		}


		{
			glLineWidth(4);
			glColor3d(0, 2, 3);


			//бока стакана
			glBegin(GL_POINTS);
			for (int i = 0; i < N; i++) {
				float arx = arrX[i] * up, ary = arrY[i] * up;
				glVertex3d(arx, ary, bottPosition);
				arx = arrXx[i] * dno, ary = arrYy[i] * dno;
				glVertex3d(arx, ary, 0);
			}

			glEnd();

			//дно стакана
			glBegin(GL_POINTS);
			for (int i = 0; i < N; i++) {
				float arx = arrXx[i] * dno, ary = arrYy[i] * dno;
				glVertex3d(arx, ary, 0);
			}
			glEnd();



			//малює верхнє коло
			glBegin(GL_POINTS);
			for (int i = 0; i < N; i++) {
				float arx = arrX[i] * up, ary = arrY[i] * up;
				glVertex3d(arx, ary, bottPosition);
			}
			glEnd();

			//заповняє дно 
			glBegin(GL_POINTS);
			for (int i = 0; i < N; i++) {
				glVertex3d(0, 0, upPosition);
				float arx = arrXx[i] * dno, ary = arrYy[i] * dno;
				glVertex3d(arx, ary, upPosition);
				glVertex3d(0, 0, upPosition);
			}
			glEnd();


			// малюю палку від дна до низу
			glLineWidth(30);
			glBegin(GL_POINTS);
			
			for (int i = 0; i < 3; i++) {
				glVertex3d(0, 0, dnoPosition);
				float arx = arrXx[i] * upPosition, ary = arrYy[i] * upPosition;
				glVertex3d(arx, ary, 0);
				glVertex3d(0, 0, dnoPosition);
			}
			glEnd();


			// супер дно подставка стакана
			glLineWidth(5);
			glBegin(GL_POINTS);
			
			for (int i = 0; i < N; i++) {
				float arx = arrXxB[i] * bottom, ary = arrYyB[i] * bottom;
				glVertex3d(arx, ary, dnoPosition);
			}
			glEnd();

			glBegin(GL_POINTS);
			for (int i = 0; i < N; i++) {
				glVertex3d(0, 0, dnoPosition);
				float arx = arrXxB[i] * bottom, ary = arrYyB[i] * bottom;
				glVertex3d(arx, ary, dnoPosition);
				glVertex3d(0, 0, dnoPosition);
			}
			glEnd();
		}
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwTerminate();
	return 0;
}

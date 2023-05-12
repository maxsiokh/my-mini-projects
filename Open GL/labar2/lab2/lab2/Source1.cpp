#include <GLFW/glfw3.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <ctime>
#include <math.h>

using namespace std;

POINTFLOAT vertices[] = {

    {-0.4,-0.1},
    {-0.1,0.2},            //AB

    {-0.1, 0.2},
    {0.7,0.2},             //BC

    {0.15,0.9},
    {-0.1,0.2},            //FB




    {0.7,0.2},             //CD
    {0.4,-0.1},

    {-0.4,-0.1 },
    {0.4, -0.1},            //AD

    {0.15,0.9},
    {-0.4, -0.1},          //FA

    {0.15,0.9},
    {0.4, -0.1},           //FD

    {0.15,0.9},
    {0.7, 0.2}             //FC





};

void DrawOBJ() {

    glRotatef(5, 0, 0, 1);
    glLineWidth(3);

    glVertexPointer(2, GL_FLOAT, 0, &vertices);

    glEnableClientState(GL_VERTEX_ARRAY);


    /*glEnable(GL_LINE_STIPPLE);
    glDrawArrays(GL_LINES, 0, 6);

    glLineStipple(1, 0X00FF);
    glDisable(GL_LINE_STIPPLE);*/

    glDrawArrays(GL_LINES, 6, 16);
    glDisableClientState(GL_VERTEX_ARRAY);
    glEnd();
}


int main(void)
{
    GLFWwindow* window;
    char axis;
    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(700, 600, "Right Triangular Prism", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.4, 0.7, 0.1, 0.0);
        glClear(GL_COLOR_BUFFER_BIT);

        DrawOBJ();

        using namespace std::chrono_literals;
        std::this_thread::sleep_for(0.05s);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

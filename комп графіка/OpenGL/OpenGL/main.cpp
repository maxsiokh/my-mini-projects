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

void DrawOBJ() {                                  // ������ ��������� ��'����
 
    glLineWidth(3);
    
    glVertexPointer(2, GL_FLOAT, 0, &vertices);

    glEnableClientState(GL_VERTEX_ARRAY);

    glEnable(GL_LINE_STIPPLE);
    glDrawArrays(GL_LINES, 0, 6);

    glLineStipple(1, 0X00FF);
    glDisable(GL_LINE_STIPPLE);

    glDrawArrays(GL_LINES, 6, 16);
    glDisableClientState(GL_VERTEX_ARRAY);
    glEnd();
}

void fig50() {
    
    float d, s, a, r;
    srand(time(0));
    for (int i = 0; i < 49; i++) {   //         ������� 50 ����� � ������ ����������� ������������

        d = rand() % 61 + (-30);
        s = rand() % 61 + (-30);

        a = d / 10;
        r = s / 10;
        if (i % 2 == 0) {
            a = -a;
            r = -r;
        }

        glLoadIdentity();
        glScalef(0.4, 0.4, 0);
        glColor3f(abs(a), abs(r), abs(r));
        glTranslatef(a, r, 0);

        DrawOBJ();
    }
}

void ShapeInShape() {
    float x = 0.3;                       //  ������ � �����
    for (int i = 0; i < 5; i++) {
        glLoadIdentity();
        glScalef(x, x, 0);
        DrawOBJ();
        x += 0.3;
    }
}

void moveRight() {

    
    DrawOBJ();
    glTranslatef(0.0003, 0, 0);
}

void movediagonal() {

    glTranslatef(0.001, 0.001, 0);

    glScalef(0.999, 0.999, 1);

    DrawOBJ();
}

int main(void)
{
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(900, 900, "Right Triangular Prism", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);



    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.1f, 0.17f, 0.3f, 0.43f);
        glClear(GL_COLOR_BUFFER_BIT);

        
        //  DrawOBJ();  // ������ ��������� ������

     //   fig50();      // 50 �����  

      // ShapeInShape(); //������ � ����� 

     //   moveRight(); // �� �� �

    //    movediagonal(); // �� �������
    
        for (float i = 0, a = 0; i < 90, a < 1000; i += 0.001, a += 0.0001) {    // �������� ���������
            glClearColor(0.1f, 0.17f, 0.3f, 0.43f);
            glClear(GL_COLOR_BUFFER_BIT);

            double x;
            double y;
            x = 0.4 * cos(i);
            y = 0.2 * sin(i);
            glLoadIdentity();

            glTranslatef(x, y, 0);
            if (1 - a > 0)
            {
                glScalef(1 - a, 1 - a, 0);
            }
            else break;
            DrawOBJ();
           glfwSwapBuffers(window);
        }


        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}




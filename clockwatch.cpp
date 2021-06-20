#include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;
GLfloat j = 0.0f;
GLfloat k = 0.0f;

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

void Idle()
{
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glRotatef(i,0.0,0.0,1.0);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    i-=0.05f;

                glPushMatrix();
                glRotatef(j,0.0,0.0,1.0);
                glBegin(GL_LINES);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(.0f, 0.0f);
                glVertex2f( -0.2f, -0.3f);
                glEnd();
                glPopMatrix();
                j-=0.009f;

                glPushMatrix();
                glRotatef(k,0.0,0.0,1.0);
                glBegin(GL_LINES);
                glColor3f(1.0f, 0.0f, 0.0f);
                glVertex2f(.0f, 0.0f);
                glVertex2f( 0.4f, 0.0f);
                glEnd();
                glPopMatrix();
                k-=0.001f;



                glBegin(GL_QUADS);//side wall
                glColor3ub(255,255,0);
                glVertex2f(.7,.8);
                glVertex2f(-.7,.8);
                glVertex2f(-.7,.7);
                glVertex2f(.7,.7);

                glVertex2f(.7,-.8);
                glVertex2f(-.7,-.8);
                glVertex2f(-.7,-.7);
                glVertex2f(.7,-.7);


                glVertex2f(.7,.8);
                glVertex2f(.6,.8);
                glVertex2f(.6,-.8);
                glVertex2f(.7,-.8);

                glVertex2f(-.7,.8);
                glVertex2f(-.6,.8);
                glVertex2f(-.6,-.8);
                glVertex2f(-.7,-.8);

	            glEnd();


	            glBegin(GL_LINES);//number
                glColor3f(1.0f, 1.0f, 1.0f);

                glVertex2f(-.05, 0.65f);
                glVertex2f( -0.1f, 0.55f);

                glVertex2f(-.1, 0.65);
                glVertex2f( -0.05, 0.55);

                glVertex2f(0.0, 0.65);
                glVertex2f( 0.0, 0.55);

                glVertex2f(0.05, 0.65);
                glVertex2f( 0.05, 0.55);

                glVertex2f(-0.1, -0.55);
                glVertex2f( -0.05, -0.65);

                glVertex2f(0.00, -0.55);
                glVertex2f( -0.05, -0.65);

                glVertex2f(0.05, -0.55);
                glVertex2f( 0.05, -0.65);

                glVertex2f(0.45, 0.05);
                glVertex2f( 0.45,-0.05);

                glVertex2f(0.48, 0.05);
                glVertex2f( 0.48,-0.05);

                glVertex2f(0.51, 0.05);
                glVertex2f( 0.51,-0.05);

                glVertex2f(-0.55, 0.05);
                glVertex2f( -0.55,-0.05);

                glVertex2f(-0.5, 0.05);
                glVertex2f( -0.45,-0.05);

                glVertex2f(-0.45, 0.05);
                glVertex2f( -0.5,-0.05);

                glEnd();




    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    initGL();
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}

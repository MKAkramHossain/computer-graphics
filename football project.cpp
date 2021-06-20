#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416
void display(){
glClearColor(1.0f,1.0f,1.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);






                glBegin(GL_QUADS);

                glColor3ub(0,250,64);//field
                glVertex2f(.5,.9);
                glVertex2f(-.5,.9);
                glVertex2f(-.5,-.9);
                glVertex2f(.5,-.9);//

                glColor3ub(255,255,255);//goal post
                glVertex2f(-.17,-.7);
                glVertex2f(-.17,-.85);
                glVertex2f(-.15,-.85);
                glVertex2f(-.15,-.7);
                glVertex2f(.17,-.7);
                glVertex2f(.17,-.85);
                glVertex2f(.15,-.85);
                glVertex2f(.15,-.7);
                glVertex2f(-.17,-.85);
                glVertex2f(-.17,-.87);
                glVertex2f(.17,-.87);
                glVertex2f(.17,-.85);


                glColor3ub(255,255,255);//goal post
                glVertex2f(-.17,.7);
                glVertex2f(-.17,.85);
                glVertex2f(-.15,.85);
                glVertex2f(-.15,.7);
                glVertex2f(.17,.7);
                glVertex2f(.17,.85);
                glVertex2f(.15,.85);
                glVertex2f(.15,.7);
                glVertex2f(-.17,.85);
                glVertex2f(-.17,.87);
                glVertex2f(.17,.87);
                glVertex2f(.17,.85);
                glEnd();
                glFlush();


                glBegin(GL_LINES);
                glColor3ub(255,255,255);//side lines
                glVertex2f(.45,0);
                glVertex2f(-.45,0);
                glVertex2f(.45,.7);
                glVertex2f(-.45,.7);
                glVertex2f(.45,-.7);
                glVertex2f(-.45,-.7);
                glVertex2f(-.45,.7);
                glVertex2f(-.45,-.7);
                glVertex2f(.45,.7);
                glVertex2f(.45,-.7);
                glEnd();
                glFlush();

                glBegin(GL_LINES);
                glColor3ub(255,255,255);//D-box
                glVertex2f(-.25,-.7);
                glVertex2f(-.25,-.5);
                glVertex2f(.25,-.7);
                glVertex2f(.25,-.5);
                glVertex2f(-.25,-.5);
                glVertex2f(.25,-.5);

                glVertex2f(-.25,.7);
                glVertex2f(-.25,.5);
                glVertex2f(.25,.7);
                glVertex2f(.25,.5);
                glVertex2f(-.25,.5);
                glVertex2f(.25,.5);
                glEnd();
                glFlush();



                glBegin(GL_QUADS);////gallary
                glColor3ub(0,64,255);
                glVertex2f(.5,.9);
                glVertex2f(.5,.5);
                glVertex2f(.6,.5);
                glVertex2f(.6,.95);

                glColor3ub(255,255,0);
                glVertex2f(.5,.5);
                glVertex2f(.5,.1);
                glVertex2f(.6,.1);
                glVertex2f(.6,.5);

                glColor3ub(128,255,0);
                glVertex2f(.5,.1);
                glVertex2f(.5,-.3);
                glVertex2f(.6,-.3);
                glVertex2f(.6,.1);

                glColor3ub(0,255,255);
                glVertex2f(.5,-.3);
                glVertex2f(.5,-.7);
                glVertex2f(.6,-.7);
                glVertex2f(.6,-.3);

                glColor3ub(128,0,255);
                glVertex2f(.5,-.7);
                glVertex2f(.5,-.9);
                glVertex2f(.6,-.95);
                glVertex2f(.6,-.7);//


                glColor3ub(0,64,255);
                glVertex2f(-.5,.9);
                glVertex2f(-.5,.5);
                glVertex2f(-.6,.5);
                glVertex2f(-.6,.95);

                glColor3ub(255,255,0);
                glVertex2f(-.5,.5);
                glVertex2f(-.5,.1);
                glVertex2f(-.6,.1);
                glVertex2f(-.6,.5);

                glColor3ub(128,255,0);
                glVertex2f(-.5,.1);
                glVertex2f(-.5,-.3);
                glVertex2f(-.6,-.3);
                glVertex2f(-.6,.1);

                glColor3ub(0,255,255);
                glVertex2f(-.5,-.3);
                glVertex2f(-.5,-.7);
                glVertex2f(-.6,-.7);
                glVertex2f(-.6,-.3);

                glColor3ub(128,0,255);
                glVertex2f(-.5,-.7);
                glVertex2f(-.5,-.9);
                glVertex2f(-.6,-.95);
                glVertex2f(-.6,-.7);//



                glColor3ub(0,0,255);
                glVertex2f(-.6,.6);
                glVertex2f(-.6,-.6);
                glVertex2f(-.8,-.35);
                glVertex2f(-.8,.35);//

                glColor3ub(255,153,153);
                glVertex2f(.6,.6);
                glVertex2f(.6,-.6);
                glVertex2f(.8,-.35);
                glVertex2f(.8,.35);//
                glEnd();
                glFlush();

                glBegin(GL_QUADS);////FLAG
                glColor3ub(255,128,0);
                glVertex2f(.6,.93);
                glVertex2f(.6,.9);
                glVertex2f(.9,.9);
                glVertex2f(.9,.93);

                glColor3ub(0,255,0);
                glVertex2f(.8,.9);
                glVertex2f(.8,.7);
                glVertex2f(.9,.7);
                glVertex2f(.9,.9);


                glColor3f(1,0,0);
                glVertex2f(.84,.78);
                glVertex2f(.84,.83);
                glVertex2f(.87,.83);
                glVertex2f(.87,.78);




                glEnd();
                glFlush();




                int i;
                glColor3ub(255,255,255);
	            GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.2f;
	            int lineAmount = 20;
	//GLfloat radius = 0.8f; //radius
	            GLfloat twicePi = 2.0f * PI;

	            glBegin(GL_LINES);
                glVertex2f(x, y);
		        for(i = 0; i <= lineAmount;i++) {
			    glVertex2f(
                x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius * sin(i * twicePi /lineAmount))
			);
		}
	            glEnd();
	            glFlush();



















}
int main(int argc,char**argv){
glutInit(&argc,argv);
glutCreateWindow("test");
glutInitWindowSize(320,320);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

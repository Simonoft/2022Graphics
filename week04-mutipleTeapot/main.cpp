#include <GL/glut.h>

void myTeapot(float x,float y){

    glPushMatrix();

        glTranslatef(x,y,0);

        glColor3f(1,0,0);

        glutSolidTeapot(0.3);

    glPopMatrix();

}



void display(){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myTeapot(0.5,0.4);

    myTeapot(0.5,-0.4);

    myTeapot(-0.5,-0.4);

    myTeapot(-0.5,0.4);

    glutSwapBuffers();

}



int main(int argc, char *argv[]){

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week04的視窗");

    glutDisplayFunc(display);

    glutMainLoop();



    return 0;

}

#include <GL/glut.h>
#include <stdio.h>
int mouseX=0,mouseY=0;
void mouse(int button,int state,int x,int y){
    mouseX =x;mouseY=y;
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glColor3f(1,0,0);
    glPushMatrix();
        glTranslatef((mouseX-150)/150.0,-(mouseY-150)/150.0,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}

int main(int argc, char *argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week04ªºµøµ¡");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}

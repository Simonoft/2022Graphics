#include <GL/glut.h>
float angle =0;
float oldx=0;
void display(){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        glRotatef(angle,0,0,1);

        glColor3f(1,0,0);

        glutSolidTeapot(0.3);

    glPopMatrix();

    glutSwapBuffers();

}
void mouse(int button,int state,int x,int y){
    oldx=x;
}
void motion(int x,int y){
    angle+=(x-oldx);
    oldx=x;
    display();
}

int main(int argc, char *argv[]){

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week05的視窗");

    glutMouseFunc(mouse);

    glutMotionFunc(motion);

    glutDisplayFunc(display);

    glutMainLoop();



    return 0;

}

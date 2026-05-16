#include <windows.h>
#include <GL/glut.h>

bool lightMode = true;

// --- Atheer - Animation Variables ---
float moveY = 0.0f;      // Vertical position offset
bool movingUp = true;    // Direction control

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    if (lightMode) glColor3f(0.95f, 0.90f, 0.80f);
    else           glColor3f(0.15f, 0.15f, 0.20f);
    glBegin(GL_QUADS); // Lamia Nowar Alotibi - Background
    glVertex2f(-10.0f, 0.0f);
    glVertex2f(10.0f, 0.0f);
    glVertex2f(10.0f, 10.0f);
    glVertex2f(-10.0f, 10.0f);
    glEnd();

    if (lightMode) glColor3f(0.55f, 0.20f, 0.18f);
    else           glColor3f(0.22f, 0.08f, 0.07f);
    glBegin(GL_QUADS); // Lamia Nowar Alotibi - Background
    glVertex2f(-10.0f, -4.0f);
    glVertex2f(10.0f, -4.0f);
    glVertex2f(10.0f, 0.0f);
    glVertex2f(-10.0f, 0.0f);
    glEnd();

    if (lightMode) glColor3ub(91, 53, 124);
    else           glColor3ub(60, 30, 90);
    glBegin(GL_QUADS); // Joury Naser Alazwary - Purple quadrate
    glVertex2f(2.5f, 2.6f);
    glVertex2f(4.0f, 3.2f);
    glVertex2f(5.5f, 2.6f);
    glVertex2f(4.0f, 1.7f);
    glEnd();

    if (lightMode) glColor3ub(204, 0, 102);
    else           glColor3ub(120, 20, 70);
    glBegin(GL_TRIANGLES); // Joury Naser Alazwary - Pink triangle
    glVertex2f(2.5f, 2.6f);
    glVertex2f(4.0f, 1.7f);
    glVertex2f(2.3f, 0.8f);
    glEnd();

    glLineWidth(7.0f);
    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(100, 100, 100);
    glBegin(GL_LINE_LOOP); // Joury Naser Alazwary - Outline purple quadrate
    glVertex2f(2.5f, 2.6f);
    glVertex2f(4.0f, 3.2f);
    glVertex2f(5.5f, 2.6f);
    glVertex2f(4.0f, 1.7f);
    glEnd();
    glBegin(GL_LINE_LOOP); // Joury Naser Alazwary - Outline pink triangle
    glVertex2f(2.5f, 2.6f);
    glVertex2f(4.0f, 1.7f);
    glVertex2f(2.3f, 0.8f);
    glEnd();

    if (lightMode) glColor3ub(204, 0, 102);
    else           glColor3ub(120, 20, 70);
    glBegin(GL_TRIANGLES); // Joud Al-Nafie - Pink triangle
    glVertex2f(0.9f, 0.0f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(0.5f, 2.0f);
    glEnd();

    if (lightMode) glColor3ub(91, 53, 124);
    else           glColor3ub(60, 30, 90);
    glBegin(GL_TRIANGLES); // Joud Al-Nafie - Purple triangle
    glVertex2f(0.5f, 2.1f);
    glVertex2f(2.5f, 2.6f);
    glVertex2f(0.9f, 0.0f);
    glEnd();

    glLineWidth(7.0f);

    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(100, 100, 100);
    glBegin(GL_LINE_LOOP); // Joud Al-Nafie - Outline pink triangle
    glVertex2f(0.9f, 0.0f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(0.5f, 2.0f);
    glEnd();
    glBegin(GL_LINE_LOOP); // Joud Al-Nafie - Outline purple triangle
    glVertex2f(0.5f, 2.1f);
    glVertex2f(2.5f, 2.6f);
    glVertex2f(0.9f, 0.0f);
    glEnd();

    if (lightMode) glColor3ub(204, 0, 102);
    else           glColor3ub(120, 20, 70);
    glBegin(GL_TRIANGLES); // Nora Faisal Albogami - Pink triangle
    glVertex2f(-4.0f, 0.0f);
    glVertex2f(-4.0f, 1.9f);
    glVertex2f(-2.4f, 2.6f);
    glEnd();

    if (lightMode) glColor3ub(40, 115, 210);
    else           glColor3ub(15, 55, 120);
    glBegin(GL_TRIANGLES); // Nora Faisal Albogami - Blue triangle
    glVertex2f(-4.0f, 0.0f);
    glVertex2f(-2.5f, 2.6f);
    glVertex2f(-1.2f, 0.0f);
    glEnd();

    glLineWidth(7.0f);
    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(120, 120, 120);
    glBegin(GL_LINE_LOOP); // Nora Faisal Albogami - Outline pink triangle
    glVertex2f(-4.0f, 0.0f);
    glVertex2f(-4.0f, 1.9f);
    glVertex2f(-2.4f, 2.6f);
    glEnd();
    glBegin(GL_LINE_LOOP); // Nora Faisal Albogami - Outline blue triangle
    glVertex2f(-4.0f, 0.0f);
    glVertex2f(-2.5f, 2.6f);
    glVertex2f(-1.2f, 0.0f);
    glEnd();

    if (lightMode) glColor3ub(255, 215, 0);
    else           glColor3ub(180, 150, 0);
    glBegin(GL_TRIANGLES); //  Taif Al-Ghamdi -  Yellow triangle
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-2.5f, 2.7f);
    glVertex2f(0.5f, 2.1f);
    glEnd();

    glLineWidth(7.0f);
    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(120, 120, 120);
    glBegin(GL_LINE_LOOP); //  Taif Al-Ghamdi -  Outline yellow triangle
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-2.5f, 2.7f);
    glVertex2f(0.5f, 2.1f);
    glEnd();

    if (lightMode) glColor3ub(91, 53, 124);
    else           glColor3ub(60, 30, 80);
    glBegin(GL_TRIANGLES); // Taif Al-Ghamdi - Purple triangle
    glVertex2f(-3.0f, 2.8f);
    glVertex2f(0.3f, 2.1f);
    glVertex2f(0.3f, 3.7f);
    glEnd();

    glLineWidth(7.0f);
    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(120, 120, 120);
    glBegin(GL_LINE_LOOP); // Taif Al-Ghamdi - Outline purple triangle
    glVertex2f(-3.0f, 2.8f);
    glVertex2f(0.3f, 2.1f);
    glVertex2f(0.3f, 3.7f);
    glEnd();

    if (lightMode) glColor3ub(40, 115, 210);
    else           glColor3ub(15, 55, 120);
    glBegin(GL_TRIANGLES);  // Taif Al-Ghamdi - Blue triangle
    glVertex2f(3.0f, 2.8f);
    glVertex2f(0.3f, 2.2f);
    glVertex2f(0.6f, 3.4f);
    glEnd();

    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(120, 120, 120);
    glBegin(GL_LINE_LOOP); // Taif Al-Ghamdi - Outline blue triangle
    glVertex2f(3.0f, 2.8f);
    glVertex2f(0.6f, 2.2f);
    glVertex2f(0.6f, 3.4f);
    glEnd();

    if (lightMode) glColor3ub(255, 215, 0);
    else           glColor3ub(180, 140, 0);
    glBegin(GL_QUADS); // Taif Al-Ghamdi - Yellow quadrate
    glVertex2f(-2.5f, 2.6f);
    glVertex2f(-4.0f, 3.2f);
    glVertex2f(-5.5f, 2.6f);
    glVertex2f(-4.0f, 1.9f);
    glEnd();

    glLineWidth(7.0f);
    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(120, 120, 120);
    glBegin(GL_LINE_LOOP); // Taif Al-Ghamdi - Outline yellow quadrate
    glVertex2f(-2.5f, 2.6f);
    glVertex2f(-4.0f, 3.2f);
    glVertex2f(-5.5f, 2.6f);
    glVertex2f(-4.0f, 1.9f);
    glEnd();

    if (lightMode) glColor3ub(91, 53, 124);
    else           glColor3ub(60, 30, 90);
    glBegin(GL_TRIANGLES); // Taif Al-Ghamdi - Purple triangle
    glVertex2f(-7.5f, 0.0f);
    glVertex2f(-4.0f, 0.0f);
    glVertex2f(-4.1f, 1.9f);
    glEnd();

    glLineWidth(7.0f);
    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(120, 120, 120);
    glBegin(GL_LINE_LOOP); // Taif Al-Ghamdi - Outline purple triangle
    glVertex2f(-7.5f, 0.0f);
    glVertex2f(-4.0f, 0.0f);
    glVertex2f(-4.1f, 1.9f);
    glEnd();


    if (lightMode) glColor3ub(40, 115, 210);
    else           glColor3ub(15, 55, 120);
    glBegin(GL_TRIANGLES); // Atheer Alfaifi - Blue Triangle
    glVertex2f(0.9f, 0.0f);
    glVertex2f(6.7f, 0.0f);
    glVertex2f(4.0f, 1.7f);
    glEnd();

    if (lightMode) glColor3ub(255, 215, 0);
    else           glColor3ub(180, 140, 0);
    glBegin(GL_TRIANGLES); // Atheer Alfaifi - Yellow Triangle
    glVertex2f(0.9f, 0.0f);
    glVertex2f(2.3f, 0.8f);
    glVertex2f(2.5f, 2.6f);
    glEnd();

    glLineWidth(7.0f);
    if (lightMode) glColor3ub(255, 255, 255);
    else           glColor3ub(120, 120, 120);
    glBegin(GL_LINE_LOOP); // Atheer Alfaifi - Outline Blue Triangle
    glVertex2f(0.9f, 0.0f);
    glVertex2f(6.7f, 0.0f);
    glVertex2f(4.0f, 1.7f);
    glEnd();
    glBegin(GL_LINE_LOOP); // Atheer Alfaifi - Outline Yellow Triangle
    glVertex2f(0.9f, 0.0f);
    glVertex2f(2.3f, 0.8f);
    glVertex2f(2.5f, 2.6f);
    glEnd();


    if (lightMode) glColor3ub(0, 200, 0);
    glBegin(GL_TRIANGLE_FAN); // Noha Hesham - Green Circle
    glVertex2f(1.0, 3.0);
    glVertex2f(0.98, 3.17); glVertex2f(0.94, 3.34); glVertex2f(0.87, 3.5); glVertex2f(0.77, 3.64);
    glVertex2f(0.64, 3.77); glVertex2f(0.5, 3.87); glVertex2f(0.34, 3.94); glVertex2f(0.17, 3.98);
    glVertex2f(0.0, 4.0); glVertex2f(-0.17, 3.98); glVertex2f(-0.34, 3.94); glVertex2f(-0.5, 3.87);
    glVertex2f(-0.64, 3.77); glVertex2f(-0.77, 3.64); glVertex2f(-0.87, 3.5); glVertex2f(-0.94, 3.34);
    glVertex2f(-0.98, 3.17); glVertex2f(-1.0, 3.0); glVertex2f(-0.98, 2.83); glVertex2f(-0.94, 2.66);
    glVertex2f(-0.87, 2.5); glVertex2f(-0.77, 2.36); glVertex2f(-0.64, 2.23); glVertex2f(-0.5, 2.13);
    glVertex2f(-0.34, 2.06); glVertex2f(-0.17, 2.02); glVertex2f(0.0, 2.0); glVertex2f(0.17, 2.02);
    glVertex2f(0.34, 2.06); glVertex2f(0.5, 2.13); glVertex2f(0.64, 2.23); glVertex2f(0.77, 2.36);
    glVertex2f(0.87, 2.5); glVertex2f(0.94, 2.66); glVertex2f(0.98, 2.83); glVertex2f(1.0, 3.0);
    glEnd();

    // --- Atheer - Animation Section ---
    glPushMatrix();
    glTranslatef(0.0f, moveY, 0.0f);

    // Suha Alnefaie - Black Circle (Head)
    if (lightMode) glColor3ub(0, 0, 0);
    else           glColor3ub(80, 80, 80);
    //used GL_TRIANGLE_FAN insted of the midpoint for a smoother circle  
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 3.85f);
    glVertex2f(0.13f, 3.85f);
    glVertex2f(0.12f, 3.89f);
    glVertex2f(0.09f, 3.93f);
    glVertex2f(0.05f, 3.96f);
    glVertex2f(0.0f, 3.98f);
    glVertex2f(-0.05f, 3.96f);
    glVertex2f(-0.09f, 3.93f);
    glVertex2f(-0.12f, 3.89f);
    glVertex2f(-0.13f, 3.85f);
    glVertex2f(-0.12f, 3.81f);
    glVertex2f(-0.09f, 3.77f);
    glVertex2f(-0.05f, 3.74f);
    glVertex2f(0.0f, 3.72f);
    glVertex2f(0.05f, 3.74f);
    glVertex2f(0.09f, 3.77f);
    glVertex2f(0.12f, 3.81f);
    glVertex2f(0.13f, 3.85f);
    glEnd();

    glLineWidth(4.0f);
    if (lightMode) glColor3ub(0, 0, 0);
    else           glColor3ub(200, 200, 200);
    glBegin(GL_LINES); // Sara Abdullah Alzahrani - Stick Figure Body
    glVertex2f(0.0f, 3.72f); glVertex2f(0.0f, 3.30f);
    glVertex2f(0.0f, 3.60f); glVertex2f(-0.28f, 3.75f);
    glVertex2f(0.0f, 3.60f); glVertex2f(0.30f, 3.50f);
    glVertex2f(0.0f, 3.30f); glVertex2f(-0.20f, 3.05f);
    glVertex2f(0.0f, 3.30f); glVertex2f(0.22f, 3.10f);
    glEnd();

    glPopMatrix();
    // -----------------------------------------------------------------

    glFlush();
}

// --- Atheer - Update function for Animation ---
void update(int value) {
    if (movingUp) {
        moveY += 0.015f;
        if (moveY >= 0.25f) movingUp = false;
    }
    else {
        moveY -= 0.015f;
        if (moveY <= -0.25f) movingUp = true;
    }

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void myMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        lightMode = !lightMode;
        glutPostRedisplay();
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Group 6 project");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(-10.0, 10.0, -4.0, 10.0);

    glutDisplayFunc(display);
    glutMouseFunc(myMouse);

    // Atheer - Starting the animation timer
    glutTimerFunc(16, update, 0);

    glutMainLoop();
    return 0;
}
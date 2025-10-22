#include <GL/glut.h>
#include <cmath>



void gambarGradienQuad(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,
    float r1, float g1, float b1, float r2, float g2, float b2,
    float r3, float g3, float b3, float r4, float g4, float b4)
{
    glBegin(GL_QUADS);
    glColor3f(r1, g1, b1); glVertex2f(x1, y1);
    glColor3f(r2, g2, b2); glVertex2f(x2, y2);
    glColor3f(r3, g3, b3); glVertex2f(x3, y3);
    glColor3f(r4, g4, b4); glVertex2f(x4, y4);
    glEnd();
}




void gambarSayapBangunan()
{
    float yAwalSayap = -150.0f;
    
    glColor3f(0.3f, 0.35f, 0.4f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, yAwalSayap);
    glVertex2f(250.0f, yAwalSayap);
    glVertex2f(240.0f, 80.0f);
    glVertex2f(10.0f, 80.0f);
    glEnd();


    gambarGradienQuad(10.0f, 80.0f, 240.0f, 80.0f, 230.0f, yAwalSayap + 30.0f, 20.0f, yAwalSayap + 30.0f,
        0.3f, 0.6f, 0.9f, 0.4f, 0.7f, 1.0f, 0.2f, 0.5f, 0.8f, 0.1f, 0.4f, 0.7f);

    glColor3f(0.95f, 0.95f, 0.95f);
    glBegin(GL_QUADS);
    glVertex2f(10.0f, yAwalSayap);
    glVertex2f(50.0f, yAwalSayap);
    glVertex2f(45.0f, 80.0f);
    glVertex2f(15.0f, 80.0f);
    glEnd();

    
    glBegin(GL_QUADS);
    glVertex2f(200.0f, yAwalSayap);
    glVertex2f(240.0f, yAwalSayap);
    glVertex2f(235.0f, 80.0f);
    glVertex2f(205.0f, 80.0f);
    glEnd();

    glColor3f(0.9f, 0.9f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(60.0f, yAwalSayap);
    glVertex2f(190.0f, yAwalSayap);
    glVertex2f(180.0f, 50.0f);
    glVertex2f(70.0f, 50.0f);
    glEnd();

 
    glColor3f(0.85f, 0.85f, 0.85f);
    glBegin(GL_QUADS);
    glVertex2f(5.0f, 80.0f);
    glVertex2f(245.0f, 80.0f);
    glVertex2f(240.0f, 100.0f);
    glVertex2f(10.0f, 100.0f);
    glEnd();

  
    glColor3f(0.1f, 0.4f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(15.0f, 100.0f);
    glVertex2f(235.0f, 100.0f);
    glVertex2f(230.0f, 110.0f);
    glVertex2f(20.0f, 110.0f);
    glEnd();
}



void gambarMenaraTengah()
{
    float dasarMenaraY = -10.0f;


    glColor3f(0.3f, 0.3f, 0.35f);
    glRectf(-60.0f, dasarMenaraY, 60.0f, 190.0f);

    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.3f, 0.6f); glVertex2f(-55.0f, 185.0f);
    glColor3f(0.15f, 0.4f, 0.8f); glVertex2f(55.0f, 185.0f);
    glColor3f(0.1f, 0.3f, 0.7f); glVertex2f(55.0f, dasarMenaraY);
    glColor3f(0.05f, 0.25f, 0.65f); glVertex2f(-55.0f, dasarMenaraY);
    glEnd();


    glColor3f(0.85f, 0.85f, 0.85f);
    for (int i = 0; i < 7; ++i)
    {
        float y_frame = dasarMenaraY + 25.0f + i * 20.0f;
        glRectf(-55.0f, y_frame, 55.0f, y_frame + 2.0f);
    }

    for (int i = 0; i < 4; ++i)
    {
        float x_frame = -40.0f + i * 25.0f;
        glRectf(x_frame, dasarMenaraY + 10.0f, x_frame + 2.0f, 185.0f);
    }
}

void gambarAtapMenara()
{
    glColor3f(0.9f, 0.9f, 0.9f);
    glRectf(-65.0f, 0.0f, 65.0f, 10.0f);


    glColor3f(0.1f, 0.4f, 0.9f);
    glRectf(-70.0f, 10.0f, 70.0f, 20.0f);


    glColor3f(0.9f, 0.9f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(-75.0f, 20.0f);
    glVertex2f(75.0f, 20.0f);
    glVertex2f(70.0f, 40.0f);
    glVertex2f(-70.0f, 40.0f);
    glEnd();


    glColor3f(0.8f, 0.2f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-70.0f, 40.0f);
    glVertex2f(70.0f, 40.0f);
    glVertex2f(0.0f, 70.0f);
    glEnd();

    glColor3f(0.6f, 0.15f, 0.15f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-70.0f, 40.0f);
    glVertex2f(0.0f, 70.0f);
    glVertex2f(-65.0f, 40.0f);
    glEnd();
}



void gambarLantaiDasar()
{
    float lantaiDasarY = -150.0f;
    float lantaiSatuY = -10.0f;

    glColor3f(0.9f, 0.9f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(-130.0f, lantaiDasarY);
    glVertex2f(130.0f, lantaiDasarY);
    glVertex2f(130.0f, lantaiSatuY);
    glVertex2f(-130.0f, lantaiSatuY);
    glEnd();


    glColor3f(0.2f, 0.2f, 0.2f);
    glRectf(-130.0f, lantaiSatuY - 20.0f, 130.0f, lantaiSatuY);

    glColor3f(0.7f, 0.7f, 0.7f);
    for (int i = 0; i < 8; ++i)
    {
        float x = -120.0f + i * 30.0f;
        glRectf(x, lantaiDasarY, x + 10.0f, lantaiSatuY - 20.0f);
    }


    glColor3f(0.9f, 0.9f, 0.9f);
    glRectf(-40.0f, lantaiDasarY, 40.0f, lantaiSatuY - 20.0f);

    glColor3f(0.8f, 0.2f, 0.2f);
    glRectf(-30.0f, lantaiDasarY, 30.0f, lantaiSatuY - 50.0f);


    glColor3f(0.6f, 0.15f, 0.15f);
    glRectf(-25.0f, lantaiDasarY, 25.0f, lantaiSatuY - 45.0f);
}


void gambarLogo()
{
    glColor3f(0.0f, 0.2f, 0.6f);
    glRectf(-20.0f, -15.0f, 20.0f, 15.0f);

    glColor3f(1.0f, 0.85f, 0.0f); 
    glRectf(-15.0f, -10.0f, 15.0f, 10.0f);
}




void gambarBendera()
{
    glColor3f(0.7f, 0.7f, 0.7f); 
    glRectf(-3.0f, -30.0f, 0.0f, 0.0f);

    glColor3f(0.8f, 0.0f, 0.0f); 
    glRectf(0.0f, -15.0f, 24.0f, 0.0f);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.0f, -30.0f, 24.0f, -15.0f);
}



void tampilkan()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    glColor3f(0.53f, 0.81f, 0.92f);
    glBegin(GL_QUADS);
    glVertex2f(-400.0f, 300.0f);
    glVertex2f(400.0f, 300.0f);
    glColor3f(0.6f, 0.85f, 0.95f);
    glVertex2f(400.0f, 100.0f);
    glVertex2f(-400.0f, 100.0f);
    glEnd();

  
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-300, 250); glVertex2f(-200, 250);
    glVertex2f(-200, 220); glVertex2f(-300, 220);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-150, 260); glVertex2f(0, 260);
    glVertex2f(0, 230); glVertex2f(-150, 230);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(180, 240); glVertex2f(300, 240);
    glVertex2f(300, 210); glVertex2f(180, 210);
    glEnd();

 
    glColor3f(0.3f, 0.6f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(-400.0f, -200.0f);
    glVertex2f(400.0f, -200.0f);
    glColor3f(0.4f, 0.7f, 0.3f);
    glVertex2f(400.0f, -100.0f);
    glVertex2f(-400.0f, -100.0f);
    glEnd();

    glColor3f(0.4f, 0.4f, 0.4f);
    glBegin(GL_QUADS);
    glVertex2f(-80.0f, -100.0f);
    glVertex2f(80.0f, -100.0f);
    glVertex2f(60.0f, -150.0f);
    glVertex2f(-60.0f, -150.0f);
    glEnd();


    glColor3f(0.6f, 0.6f, 0.6f);
    glRectf(-80.0f, -100.0f, -75.0f, -150.0f);
    glRectf(75.0f, -100.0f, 80.0f, -150.0f);

 
    glPushMatrix();
    glTranslatef(-130.0f, 0.0f, 0.0f);
    glScalef(-1.0f, 1.0f, 1.0f); 
    gambarSayapBangunan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130.0f, 0.0f, 0.0f);
    gambarSayapBangunan();
    glPopMatrix();

 
    glPushMatrix();
    gambarLantaiDasar();
    glPopMatrix();

    glPushMatrix();
    gambarMenaraTengah();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 190.0f, 0.0f);
    gambarAtapMenara();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 145.0f, 0.0f);
    glRotatef(30.0f, 0.0f, 0.0f, 1.0f);
    gambarLogo();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(6.0f, 130.0f, 0.0f);
    glScalef(1.5f, 1.0f, 1.0f);
    gambarBendera();
    glPopMatrix();


    glColor3f(0.25f, 0.25f, 0.25f);
    glBegin(GL_QUADS);
    glVertex2f(-120.0f, -140.0f);
    glVertex2f(120.0f, -140.0f);
    glVertex2f(100.0f, -180.0f);
    glVertex2f(-100.0f, -180.0f);
    glEnd();

 
    glColor3f(0.8f, 0.8f, 0.8f);
    glRectf(-60.0f, -170.0f, 60.0f, -165.0f);
    glRectf(-50.0f, -160.0f, 50.0f, -155.0f);

    glutSwapBuffers();
}



void inisialisasi()
{
    glClearColor(0.53f, 0.81f, 0.92f, 1.0f); 
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-400.0, 400.0, -200.0, 300.0); 
    glMatrixMode(GL_MODELVIEW);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Menggambar Gedung Rektorat UNESA - Gaya Komponen");

    inisialisasi();
    glutDisplayFunc(tampilkan);
    glutMainLoop();
    return 0;
}

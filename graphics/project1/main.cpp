#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>


using namespace std;

float _move1 = 0.0f;
GLfloat boatPosition=0.0f;
GLfloat boatSpeed=20.0f;
bool isMoving=true;
bool isRaining=false;
GLfloat rainPositionY=11000.0f;
bool isDay=true;


void cloud(){


     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
        float xOffse1 = (4960.73259419605);
    float yOffse1 = ( 4815.8764644417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse1;
        float y = r * sin(a) + yOffse1;
        glVertex2f(x, y);
    }
    glEnd();


           glBegin(GL_POLYGON);
        float xOffse2 = (4981.071499605);
    float yOffse2 = (4649.53179817);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse2;
        float y = r * sin(a) + yOffse2;
        glVertex2f(x, y);
    }
    glEnd();




           glBegin(GL_POLYGON);
        float xOffse3 = (5159.60807705);
    float yOffse3 = ( 4906.104457617);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse3;
        float y = r * sin(a) + yOffse3;
        glVertex2f(x, y);
    }
    glEnd();


               glBegin(GL_POLYGON);
        float xOffse4 = (5157.2330413225);
    float yOffse4 = (4710.8046947855617);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse4;
        float y = r * sin(a) + yOffse4;
        glVertex2f(x, y);
    }
    glEnd();

                   glBegin(GL_POLYGON);
        float xOffse5 = (5324.3610323225);
    float yOffse5 = ( 4708.638545588617);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse5;
        float y = r * sin(a) + yOffse5;
        glVertex2f(x, y);
    }
    glEnd();

                       glBegin(GL_POLYGON);
        float xOffse6 = (5362.3619835);
    float yOffse6 = (4896.7432519);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse6;
        float y = r * sin(a) + yOffse6;
        glVertex2f(x, y);
    }
    glEnd();


                           glBegin(GL_POLYGON);
        float xOffse7 = (5527.666119545);
    float yOffse7 = ( 4780.84035);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse7;
        float y = r * sin(a) + yOffse7;
        glVertex2f(x, y);
    }
    glEnd();





    glBegin(GL_POLYGON);
        float xOffse8 = (6495.89019419605);
    float yOffse8 = ( 5151.56519844417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse8;
        float y = r * sin(a) + yOffse8;
        glVertex2f(x, y);
    }
    glEnd();


           glBegin(GL_POLYGON);
        float xOffse9 = (6714.941425);
    float yOffse9 = ( 5050.382763117);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse9;
        float y = r * sin(a) + yOffse9;
        glVertex2f(x, y);
    }
    glEnd();




           glBegin(GL_POLYGON);
        float xOffse10 = (6702.987342);
    float yOffse10 = (5286.475934467);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse10;
        float y = r * sin(a) + yOffse10;
        glVertex2f(x, y);
    }
    glEnd();


               glBegin(GL_POLYGON);
        float xOffse11 = (6948.0460770);
    float yOffse11 = (5271.5333286);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse11;
        float y = r * sin(a) + yOffse11;
        glVertex2f(x, y);
    }
    glEnd();

                   glBegin(GL_POLYGON);
        float xOffse12 = (6897.24121);
    float yOffse12 = (5071.30241120);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse12;
        float y = r * sin(a) + yOffse12;
        glVertex2f(x, y);
    }
    glEnd();

                       glBegin(GL_POLYGON);
        float xOffse13 = (7118.3917);
    float yOffse13 = ( 5119.118749719);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse13;
        float y = r * sin(a) + yOffse13;
        glVertex2f(x, y);
    }
    glEnd();




                       glBegin(GL_POLYGON);
        float xOffse15 = (6718.845109044221);
    float yOffse15 = (5143.57319147);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse15;
        float y = r * sin(a) + yOffse15;
        glVertex2f(x, y);
    }
    glEnd();







    glBegin(GL_POLYGON);
        float xOffse16 = (1901.4664496756775);
    float yOffse16 = ( 5121.2359465223337);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse16;
        float y = r * sin(a) + yOffse16;
        glVertex2f(x, y);
    }
    glEnd();


           glBegin(GL_POLYGON);
        float xOffse17 = (2135.4153935909294);
    float yOffse17 = (5211.216309566676);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse17;
        float y = r * sin(a) + yOffse17;
        glVertex2f(x, y);
    }
    glEnd();




           glBegin(GL_POLYGON);
        float xOffse18 = (2353.93913241286835);
    float yOffse18 = (5185.5076344111497);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse18;
        float y = r * sin(a) + yOffse18;
        glVertex2f(x, y);
    }
    glEnd();


               glBegin(GL_POLYGON);
        float xOffse19 = (2582.7463412970165);
    float yOffse19 = (5144.3737541623077);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 130;
        float x = r * cos(a) + xOffse19;
        float y = r * sin(a) + yOffse19;
        glVertex2f(x, y);
    }
    glEnd();

                   glBegin(GL_POLYGON);
        float xOffse20 = (2400);
    float yOffse20 = (5000);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 165;
        float x = r * cos(a) + xOffse20;
        float y = r * sin(a) + yOffse20;
        glVertex2f(x, y);
    }
    glEnd();

                       glBegin(GL_POLYGON);
        float xOffse21 = (2137.986261106482);
    float yOffse21 = (4997.834305775804);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(211,211,211);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 165;
        float x = r * cos(a) + xOffse21;
        float y = r * sin(a) + yOffse21;
        glVertex2f(x, y);
    }
    glEnd();
     glPopMatrix();




}

  void House()
{
    glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(1634.400, 2814.80);
    glVertex2f(1849.750, 2506.220);
    glVertex2f(1396.57, 2506.22);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(1396.5770463198808, 2506.221597261972);
    glVertex2f(1849.7551195250287, 2506.221597261972);
    glVertex2f(1844.8955447517365, 2102.1835783805277);
    glVertex2f(1388.4127619936833, 2107.255609300062);
    glEnd();


               glBegin(GL_POLYGON);
    glColor3ub(218,165,32);
    glVertex2f(1849.7551195250287, 2506.221597261972);
    glVertex2f(2775.6132184862113, 2505.4100364835094);
    glVertex2f(2755.325094808076, 2145.2958411965697);
    glVertex2f(1844.8955447517365, 2102.1835783805277);
    glEnd();


           glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(1634.4062615910786, 2814.803922575106);
    glVertex2f(2598.092136302524, 2741.2594742418573);
    glVertex2f(2775.6132184862113, 2505.4100364835094);
    glVertex2f(1849.7551195250287, 2506.221597261972);
    glEnd();


               glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(1634.4062615910786, 2814.803922575106);
    glVertex2f(1849.7551195250287, 2506.221597261972);
    glVertex2f(1396.5770463198808, 2506.221597261972);

    glEnd();

             glBegin(GL_POLYGON);
    glColor3ub(176,196,222);
    glVertex2f(1530.4296277406331, 2383.681294414685);
    glVertex2f(1728.2388336024562, 2383.681294414685);
    glVertex2f(1730.7748490622232, 2261.95255234586);
    glVertex2f(1525.3575968210992, 2264.4885678056276);
    glEnd();

                 glBegin(GL_POLYGON);
    glColor3ub(176,196,222);
    glVertex2f(1951.6823345183973, 2361.659657314495);
    glVertex2f(2071.380127488069, 2362.640786765066);
    glVertex2f(2069.417868586927, 2278.2636540159424);
    glVertex2f(1947.757816716113, 2276.3013951148);
    glEnd();
                 glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(2230.8566459750036, 2398.9419454025583);
    glVertex2f(2401.168473406461, 2394.902998053619);
    glVertex2f(2394.45,2130.65);
    glVertex2f(2224.083101444868, 2128.0001641971094);
    glEnd();

                     glBegin(GL_POLYGON);
    glColor3ub(176,196,222);
    glVertex2f(2572.7372767298903, 2368.5275634684936);
    glVertex2f(2699.3029758535595, 2365.58417511678);
    glVertex2f(2695.378458051275, 2278.2636540159424);
    glVertex2f(2566.8505000264636, 2279.2447834665136);
    glEnd();




                       glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(2669.564,2646.303);
    glVertex2f(2859.9399199351988, 2804.1096325986205);
    glVertex2f(3036.5905244158475, 2652.1901127452415);

    glEnd();

                         glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(2669.564,2646.303);
    glVertex2f(2775.6132184862113, 2505.4100364835094);
    glVertex2f(2770.338,2431.509);
    glVertex2f(3033.0575123262342, 2429.610351099593);
    glVertex2f(3036.5905244158475, 2652.1901127452415);
    glEnd();

                             glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(2859.9399199351988, 2804.1096325986205);
    glVertex2f(3300, 2800);
    glVertex2f(3399.0735406912763, 2654.702978472559);
    glVertex2f(3036.5905244158475, 2652.1901127452415);
    glEnd();
                                 glBegin(GL_POLYGON);
    glColor3ub(218,165,32);
    glVertex2f(3036.5905244158475, 2652.1901127452415);
    glVertex2f(3399.0735406912763, 2654.702978472559);
    glVertex2f(3404.371121129285, 2481.6486841642486);
    glVertex2f(3033.0575123262342, 2429.610351099593);
    glEnd();


                                 glBegin(GL_POLYGON);
    glColor3ub(176,196,222);
    glVertex2f(2810.752415647018, 2584.980166448335);
    glVertex2f(2898.7888192579226, 2584.980166448335);
    glVertex2f(2898.7888192579226, 2521.909310130066);
    glVertex2f(2810.216831809604, 2522.7005125304445);
    glEnd();

                                     glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(3199.996576916174, 2576.0926631121197);
    glVertex2f(3265.4591074777095, 2576.9540121984555);
    glVertex2f(3264.8805,2462.099);
    glVertex2f(3199.586,2452.9488);
    glEnd();





                                         glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(7210.021449218484, 3044.802435558429);
    glVertex2f(8195.575662918538, 3033.5616936501906);
    glVertex2f(8000, 2800);
    glVertex2f(7000, 2800);
    glEnd();

                                             glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(8195.575662918538, 3033.5616936501906);
    glVertex2f(8374.506473277545, 2807.5596335719283);
    glVertex2f(8000, 2800);

                                             glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(8373.624135551136, 2802.0078491761064);
    glVertex2f(8369.879770957781, 2514.535153320182);
    glVertex2f(7992.453859615807, 2483.743726170745);
    glVertex2f(8000, 2800);
    glEnd();

                                                 glBegin(GL_POLYGON);
    glColor3ub(218,165,32);
    glVertex2f(7000, 2800);
    glVertex2f(6990.396264143989, 2504.6199260764106);
    glVertex2f(7992.453859615807, 2483.743726170745);
    glVertex2f(8000, 2800);
    glEnd();

                                                 glBegin(GL_POLYGON);
    glColor3ub(176,196,222);
    glVertex2f(7800, 2700);
    glVertex2f(7900, 2700);
    glVertex2f(7900, 2600);
    glVertex2f(7800, 2600);
    glEnd();


                                                 glBegin(GL_POLYGON);
    glColor3ub(176,196,222);
    glVertex2f(8148.006083108267, 2700.332871186561);
    glVertex2f(8259.078812979484, 2698.768466540487);
    glVertex2f(8260.643217625557, 2623.677043528951);
    glVertex2f(8149.57048775434, 2620.5482342368036);
    glEnd();

                                                     glBegin(GL_POLYGON);
    glColor3ub(176,196,222);
    glVertex2f(7100, 2700);
    glVertex2f(7200, 2700);
    glVertex2f(7200, 2600);
    glVertex2f(7100, 2600);
    glEnd();



                                                     glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(7400, 2700);
    glVertex2f(7552.905538126786, 2700.001568970093);
    glVertex2f(7552.8282,2492.902);
    glVertex2f(7399.918,2496.088);
    glEnd();

                                                     glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(8195.575662918538, 3033.5616936501906);
    glVertex2f(8276.091,2928.855);
    glVertex2f(8634.555577259316, 2943.2368755167076);
    glVertex2f(8745.429753408482, 3049.7912785691706);
    glEnd();

                                                         glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(8745.429753408482, 3049.7912785691706);
    glVertex2f(8850.544232095352, 2944.6767998822816);
    glVertex2f(8634.555577259316, 2943.2368755167076);
    glEnd();

                                                         glBegin(GL_POLYGON);
    glColor3ub(233,150,122);
    glVertex2f(8634.555577259316, 2943.2368755167076);
    glVertex2f(8850.544232095352, 2944.6767998822816);
    glVertex2f(8853.424080826499, 2805.0041364216204);
    glVertex2f(8640.315274721612, 2802.1242876904726);
    glEnd();
                                                        glBegin(GL_POLYGON);
        glColor3ub(218,165,32);
    glVertex2f(8276.091,2928.855);
    glVertex2f(8634.555577259316, 2943.2368755167076);
    glVertex2f(8640.315274721612, 2802.1242876904726);
    glVertex2f(8373.624135551136, 2802.0078491761064);
    glEnd();


                                                        glBegin(GL_POLYGON);
        glColor3ub(176,196,222);
    glVertex2f(8715.755516333404, 2896.7042436048177);
    glVertex2f(8791.472660184496, 2896.7042436048177);
    glVertex2f(8792.38491492969, 2853.8282705806982);
    glVertex2f(8713.931006843017, 2853.8282705806982);
    glEnd();


                                                            glBegin(GL_POLYGON);
        glColor3ub(205,133,63);
    glVertex2f(8463.0609519147, 2888.4939508980715);
    glVertex2f(8528.74329356866, 2889.4062056432654);
    glVertex2f(8531.234,2802.076);
    glVertex2f(8465.797,2801.82);
    glEnd();


                                                            glBegin(GL_POLYGON);
        glColor3ub(255,215,0);
    glVertex2f(6566.444604587626, 2510.2559092859447);
    glVertex2f(6577.501714274099, 2605.031135170018);
    glVertex2f(6648.5831336871415, 2718.7614062309062);
    glVertex2f(6770.2113402383475, 2794.581586938165);
     glVertex2f(6868.1457403185395, 2799.320348232369);
    glVertex2f(6967.659727496799, 2764.569432074875);
    glVertex2f(6997.92,2736.1286);
    glVertex2f(6990.396264143989, 2504.6199260764106);
    glEnd();

                                                            glBegin(GL_POLYGON);
        glColor3ub(255,215,0);
    glVertex2f(6808.030159090378, 2836.902264578919);
    glVertex2f(6828.07998956928, 2836.1861992046724);
    glVertex2f(6829.242273551876, 2797.7540045789838);
    glVertex2f(6808.797,2796.448);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(6990.396264143989, 2504.6199260764106);
     glVertex2f(7992.453859615807, 2483.743726170745);

    glVertex2f(7993.55702890769, 2437.091317475678);

    glVertex2f(6989.376308837778, 2459.5173359319);

    glEnd();


        glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
     glVertex2f(7992.453859615807, 2483.743726170745);

    glVertex2f(7993.55702890769, 2437.091317475678);
    glVertex2f(8366.67990611814, 2484.4797082059713);

    glVertex2f(8369.879770957781, 2514.535153320182);

    glEnd();

            glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
     glVertex2f(8373.624135551136, 2802.0078491761064);

    glVertex2f(8373.46,2790.044);
    glVertex2f(8638.983463184195, 2791.1540698089843);

    glVertex2f(8640.315274721612, 2802.1242876904726);

    glEnd();


                glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(8638.983463184195, 2791.1540698089843);

    glVertex2f(8640.315274721612, 2802.1242876904726);
    glVertex2f(8853.424080826499, 2805.0041364216204);

    glVertex2f(8851.852853809152, 2796.165260471664);

    glEnd();


                    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(1388.4127619936833, 2107.255609300062);
    glVertex2f(1388.4451256822972, 2043.2963542641944);
    glVertex2f(1850.4621442750577, 2037.75215004108);
    glVertex2f(1850, 2100);

    glEnd();
                        glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(1844.8955447517365, 2102.1835783805277);
    glVertex2f(1850.4621442750577, 2037.75215004108);
    glVertex2f(2748.1586083137604, 2104.4974011488503);
    glVertex2f(2750.292892533794, 2150.693748871937);

    glEnd();


                            glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(2771.38,2430.38);
    glVertex2f(2769.68,2400.114);
    glVertex2f(3034.6646131410366, 2399.4242777834934);
    glVertex2f(3033.0575123262342, 2429.610351099593);

    glEnd();


                                glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(3034.6646131410366, 2399.4242777834934);
    glVertex2f(3033.0575123262342, 2429.610351099593);

    glVertex2f(3404.371121129285, 2481.6486841642486);
    glVertex2f(3404.5584980652147, 2461.4139927608485);

    glEnd();




           glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(653.0467934302798, 2054.8134198127063);
    glVertex2f(653.7389925834656, 2473.537440269452);

    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(823.1491746231022, 2499.802584771726);
    glVertex2f(823.0697672589947, 2056.4589589867956);

    glEnd();

        glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(975.4870127362639, 2468.284411368997);
    glVertex2f(974.970874888644, 2054.7335484989);

    glEnd();

            glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(1125.9405785419099, 2506.6513279760243);
    glVertex2f(1121.4238613825814, 2051.442470150721);

    glEnd();


                glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(1258.003612831984, 2466.1183420212674);
    glVertex2f(1261.2946911801623, 2053.08800932481);

    glEnd();

                    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(1394.40,2400.11);
    glVertex2f(500,2393.41);

    glEnd();

     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(500,2267.01);
    glVertex2f(1381.7334015855238, 2261.4040046064392);

    glEnd();


         glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(1389.005,2136.24);
    glVertex2f(500,2128.72);

    glEnd();



               glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(8000, 2800);
    glVertex2f(8373.624135551136, 2802.0078491761064);

    glEnd();













}


void boat(){



    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(boatPosition, 0.0f, 0.0f);


        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);

    glVertex2f(1869.359513373972, 522.2118992260732);
    glVertex2f(2256.4157877052203, 262.519817498768);
    glVertex2f(2307.2451818508653, 403.3622221201433);



    glEnd();



            glBegin(GL_POLYGON);
        glColor3ub(0,0,0);

    glVertex2f(2307.2451818508653, 403.3622221201433);
    glVertex2f(2256.4157877052203, 262.519817498768);
    glVertex2f(3056.4157877052203, 262.519817498768);
    glVertex2f(3011.2759295562428, 407.3578842535171);



    glEnd();


            glBegin(GL_POLYGON);
        glColor3ub(0,0,0);

    glVertex2f(3056.4157877052203, 262.519817498768);
    glVertex2f(3011.2759295562428, 407.3578842535171);
    glVertex2f(3432.771987140515, 530.2396911324493);

    glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(205,133,63);

    glVertex2f(2307.2451818508653, 403.3622221201433);
    glVertex2f(2682.3443629146695, 405.4892319687578);
    glVertex2f(2510.8348472586677, 616.9325679026506);


    glEnd();

            glBegin(GL_POLYGON);
        glColor3ub(139,69,19);

    glVertex2f(2510.8348472586677, 616.9325679026506);
    glVertex2f(2682.3443629146695, 405.4892319687578);
    glVertex2f(3011.2759295562428, 407.3578842535171);
    glVertex2f(2886.8161904056433, 575.4026100676588);


    glEnd();





            glBegin(GL_POLYGON);
        glColor3ub(0,0,0);

    glVertex2f(6599.028124892968, 754.1572682344801);
    glVertex2f(6986.084399224216, 494.46518650717485);
    glVertex2f(7036.913793369861, 635.30759112855);



    glEnd();



            glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
    glVertex2f(6986.084399224216, 494.46518650717485);
    glVertex2f(7036.913793369861, 635.30759112855);
    glVertex2f(7740.944541075239, 639.3032532619238);
    glVertex2f(7786.084399224216, 494.4651865071749);



    glEnd();


            glBegin(GL_POLYGON);
        glColor3ub(0,0,0);

    glVertex2f(7740.944541075239, 639.3032532619238);
    glVertex2f(7786.084399224216, 494.4651865071749);
    glVertex2f(8162.440598659511, 762.1850601408561);

    glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(205,133,63);

    glVertex2f(7036.913793369861, 635.30759112855);
    glVertex2f(7412.0129744336655, 637.4346009771646);
    glVertex2f(7240.503458777664, 848.8779369110574);


    glEnd();

            glBegin(GL_POLYGON);
        glColor3ub(139,69,19);

    glVertex2f(7412.0129744336655, 637.4346009771646);
    glVertex2f(7240.503458777664, 848.8779369110574);
    glVertex2f(7616.484801924639, 807.3479790760656);
    glVertex2f(7740.944541075239, 639.3032532619238);


    glEnd();


                glBegin(GL_POLYGON);
        glColor3ub(255,160,122);

    glVertex2f(7296.47,842.69);
    glVertex2f(7584.59,810.87);
    glVertex2f(7612.879322694796, 1166.297748945639);
    glVertex2f(7328.78449851079, 1199.1410812212484);


    glEnd();


                     glLineWidth(2.2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(7442.95,826.51);
    glVertex2f(7480.3370517312605, 1261.4128468043023);

    glEnd();


    glPopMatrix();



}

void field1(){

glBegin(GL_POLYGON);

           glColor3ub(50,205,50);

    glVertex2f(500,4030.579);
    glVertex2f(500,1374.227);
    glVertex2f(3345.8362560524256, 1454.3332631993783);
    glVertex2f(4000, 2000);
   glVertex2f(3764.8686507135776, 2494.930376607931);
    glVertex2f(3967.400974799801, 3172.366081310143);
    glVertex2f(3500.56,4029.168);
    glEnd();






glBegin(GL_POLYGON);
           glColor3ub(50,205,50);

    glVertex2f(5253.265,4028.344);
    glVertex2f(5846.062877530632, 3214.269320776259);
    glVertex2f(5587.659567489588, 2425.091644164404);
    glVertex2f(5985.740342417683, 1929.236643815362);
   glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(9500,1074.29);
    glVertex2f(9500,4026.34);
    glEnd();


            glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(50,205,50);
        glVertex2f(500,4030.57);
    glVertex2f(9500,4026.34);

    glEnd();



    glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

    glVertex2f(500,1374.22);
    glVertex2f(3345.8362560524256, 1454.3332631993783);

   glVertex2f(3350.5008455629645, 1411.996052951424);
    glVertex2f(500,1326.35);

    glEnd();


      glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

      glVertex2f(4000, 2000);
    glVertex2f(4000, 1950);

   glVertex2f(3350.5008455629645, 1411.996052951424);
    glVertex2f(3345.8362560524256, 1454.3332631993783);

    glEnd();



        glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

    glVertex2f(9500,1038.63);
    glVertex2f(9500,1074.95);

   glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(6648.385265102986, 1533.3517958943964);

    glEnd();



            glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

    glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(6648.385265102986, 1533.3517958943964);

   glVertex2f(5987.085229903402, 1893.4323444905895);
    glVertex2f(5985.740342417683, 1929.236643815362);

    glEnd();












}


void tree(){

    glBegin(GL_POLYGON);
           glColor3ub(160,82,45);

    glVertex2f(2624.732,2705.86);
    glVertex2f(2669.56,2646.303);
    glVertex2f(2761.62,2722.61);
    glVertex2f(2763.2316967891525, 3015.462628029391);
   glVertex2f(2865.9336570361374, 3125.7552169199794);
    glVertex2f(2826.0812944199806, 3150.662943555082);
    glVertex2f(2726.4503878795877, 3054.353067232685);
           glVertex2f(2666.6718439553524, 3167.2680946451505);
    glVertex2f(2609.572602899638, 3136.8403996732336);
    glVertex2f(2650.8926953741293, 3025.792651148017);
    glVertex2f(2624.73,2705.86);

    glEnd();




    glBegin(GL_POLYGON);
    float xOffse = (2607.001922243869);
    float yOffse = (3207.630437751927);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse;
        float y = r * sin(a) + yOffse;
        glVertex2f(x, y);
    }
    glEnd();


        glBegin(GL_POLYGON);
    float xOffse1 = (2711.511815);
    float yOffse1 = (3298.3814421927);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse1;
        float y = r * sin(a) + yOffse1;
        glVertex2f(x, y);
    }
    glEnd();

            glBegin(GL_POLYGON);
    float xOffse2 = (2796.80475680);
    float yOffse2 = ( 3224.7636787);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse2;
        float y = r * sin(a) + yOffse2;
        glVertex2f(x, y);
    }
    glEnd();

                glBegin(GL_POLYGON);
    float xOffse3 = (2863.50990);
    float yOffse3 = ( 3165.319320037);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 50;
        float x = r * cos(a) + xOffse3;
        float y = r * sin(a) + yOffse3;
        glVertex2f(x, y);
    }
    glEnd();

                    glBegin(GL_POLYGON);
    float xOffse4 = (2929.0115);
    float yOffse4 = (3230.232567937);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse4;
        float y = r * sin(a) + yOffse4;
        glVertex2f(x, y);
    }
    glEnd();

                        glBegin(GL_POLYGON);
    float xOffse5 = (2872.544645);
    float yOffse5 = ( 3359.08491709717);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse5;
        float y = r * sin(a) + yOffse5;
        glVertex2f(x, y);
    }
    glEnd();


                            glBegin(GL_POLYGON);
    float xOffse6 = (2743.54976075);
    float yOffse6 = (3409.6711469717);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse6;
        float y = r * sin(a) + yOffse6;
        glVertex2f(x, y);
    }
    glEnd();

                                glBegin(GL_POLYGON);
    float xOffse7 = (2611.7213315);
    float yOffse7 = ( 3399.179312229717);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse7;
        float y = r * sin(a) + yOffse7;
        glVertex2f(x, y);
    }
    glEnd();

                                    glBegin(GL_POLYGON);
    float xOffse8 = (2527.2479595);
    float yOffse8 = ( 3316.766266219717);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse8;
        float y = r * sin(a) + yOffse8;
        glVertex2f(x, y);
    }
    glEnd();

                                        glBegin(GL_POLYGON);
    float xOffse9 = (2482.9509475595);
    float yOffse9 = ( 3215.81028489717);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse9;
        float y = r * sin(a) + yOffse9;
        glVertex2f(x, y);
    }
    glEnd();

                                            glBegin(GL_POLYGON);
    float xOffse10 = (2607.001922295);
    float yOffse10 = (3207.6304377517);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse10;
        float y = r * sin(a) + yOffse10;
        glVertex2f(x, y);
    }
    glEnd();

                                                glBegin(GL_POLYGON);
    float xOffse11 = (2868.05647468795);
    float yOffse11 = (3275.13057817);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 70;
        float x = r * cos(a) + xOffse11;
        float y = r * sin(a) + yOffse11;
        glVertex2f(x, y);
    }
    glEnd();
}




void bird(){

             glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(2700, 4700);
    glVertex2f(2743.7635167812723, 4642.8168466557245);
    glVertex2f(2743.7635167812723, 4642.8168466557245);
    glVertex2f(2855.2563607582833, 4733.522889213309);
    glEnd();

                 glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(2700, 4800);
    glVertex2f(2751.3223536610694, 4752.419981412806);
    glVertex2f(2751.3223536610694, 4752.419981412806);
    glVertex2f(2833.07613093095, 4837.913385207332);
    glEnd();


                     glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(2878.7919778490614, 4822.198562829229);
    glVertex2f(2917.6167650166117, 4767.537655172404);
    glVertex2f(2917.6167650166117, 4767.537655172404);
    glVertex2f(3014.5108983872033, 4863.628549098774);
    glEnd();

                         glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(2843.918105438587, 4612.58149913653);
    glVertex2f(2893.0505451572703, 4563.449059417838);
    glVertex2f(2893.0505451572703, 4563.449059417838);
    glVertex2f(2981.652633414811, 4642.192415589133);
    glEnd();


                             glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3034.5115814138762, 4800.769259586361);
    glVertex2f(3079.943693228781, 4760.876656726721);
    glVertex2f(3079.943693228781, 4760.876656726721);
    glVertex2f(3153.0870593577265, 4833.6275245587585);
    glEnd();

     glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3018.7967590357757, 4726.481008344416);
    glVertex2f(3082.0214671522044, 4671.16248495497);
    glVertex2f(3082.0214671522044, 4671.16248495497);
    glVertex2f(3173.0877423844004, 4749.338931803476);
    glEnd();

         glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3038.797442062449, 4590.76208780625);
    glVertex2f(3086.806369019107, 4540.157138334162);
    glVertex2f(3086.806369019107, 4540.157138334162);
    glVertex2f(3167.46643838458, 4620.81720769965);
    glEnd();

             glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3264.51836287711, 4802.2837472836045);
    glVertex2f(3312.208674754863, 4761.5026586089525);
    glVertex2f(3312.208674754863, 4761.5026586089525);
    glVertex2f(3396.5396150119627, 4836.630739708939);
    glEnd();

                 glLineWidth(1.4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3226.1283070140157, 4694.144543486457);
    glVertex2f(3270.124708486092, 4650.148142014373);
    glVertex2f(3270.124708486092, 4650.148142014373);
    glVertex2f(3351.4591874537205, 4728.223044866479);
    glEnd();






}

void river(){

                                                                 glBegin(GL_POLYGON);
        glColor3ub(0,191,255);

    glVertex2f(3967.400974799801, 3172.366081310143);
    glVertex2f(3764.8686507135776, 2494.930376607931);
    glVertex2f(4000, 2000);
    glVertex2f(5985.740342417683, 1929.236643815362);
    glVertex2f(5587.659567489588, 2425.091644164404);
    glVertex2f(5846.062877530632, 3214.269320776259);
     glVertex2f(5252.47,4015.28);
     glVertex2f(3500.067,4020.92);

    glEnd();






}

void river2(){
    glBegin(GL_POLYGON);
        glColor3ub(0,191,255);

    glVertex2f(4000, 2000);
    glVertex2f(3345.8362560524256, 1454.3332631993783);
    glVertex2f(500,1374.227);
    glVertex2f(500,0);
    glVertex2f(9500, 0);
          glVertex2f(9500,1074.29);
    glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(5985.740342417683, 1929.236643815362);


    glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(0,191,255);

    glVertex2f(4000, 2000);
    glVertex2f(3999.63,-35.9199);
    glVertex2f(9494.392139656746, -92.3176776306691);
    glVertex2f(9495.487,1000.0045);
    glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(5985.740342417683, 1929.236643815362);

    glEnd();





}


void tree2(){

    glBegin(GL_POLYGON);
           glColor3ub(160,82,45);

    glVertex2f(6900, 2600);
    glVertex2f(6938.976029408643, 3199.3509903467166);
    glVertex2f(6855.017948309551, 3258.7152901137697);
    glVertex2f(6885.548159618312, 3296.0299928244885);
   glVertex2f(6950, 3250);
   glVertex2f(6928.799292305723, 3324.0160198575277);
   glVertex2f(6979.682977820325, 3326.5602041332586);

           glVertex2f(7000, 3250);
    glVertex2f(7050, 3300);
    glVertex2f(7072.1216731718505, 3269.7400886419364);
    glVertex2f(7022.934110507736, 3194.2626217952547);
    glVertex2f(7037.92,2844.201);
    glVertex2f(7043.808958180562, 2764.7289019128107);

    glEnd();


        glBegin(GL_POLYGON);
           glColor3ub(139,69,19);

    glVertex2f(6927.703,3012.38);
    glVertex2f(6931.342285087985, 3053.5897099310628);
    glVertex2f(6905.213349870957, 3080.3559362509536);
     glEnd();



    glBegin(GL_POLYGON);
    float xOffse = (6807.2631697051399);
    float yOffse = (3321.399318856417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse;
        float y = r * sin(a) + yOffse;
        glVertex2f(x, y);
    }
    glEnd();


        glBegin(GL_POLYGON);
    float xOffse1 = (6751.486946712516);
    float yOffse1 = (3444.15234327678);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse1;
        float y = r * sin(a) + yOffse1;
        glVertex2f(x, y);
    }
    glEnd();

            glBegin(GL_POLYGON);
    float xOffse2 = (6754.440470249298);
    float yOffse2 = (3570.16934751287237);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse2;
        float y = r * sin(a) + yOffse2;
        glVertex2f(x, y);
    }
    glEnd();

                glBegin(GL_POLYGON);
    float xOffse3 = (6820.9822311627790);
    float yOffse3 = (3636.5647721602163);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse3;
        float y = r * sin(a) + yOffse3;
        glVertex2f(x, y);
    }
    glEnd();

                    glBegin(GL_POLYGON);
    float xOffse4 = (6932.788990700264);
    float yOffse4 = (3691.07056743475827);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse4;
        float y = r * sin(a) + yOffse4;
        glVertex2f(x, y);
    }
    glEnd();

                        glBegin(GL_POLYGON);
    float xOffse5 = (7057.174010685717);
    float yOffse5 = (3644.9502791255304);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse5;
        float y = r * sin(a) + yOffse5;
        glVertex2f(x, y);
    }
    glEnd();


                            glBegin(GL_POLYGON);
    float xOffse6 = (7153.607340786798);
    float yOffse6 = (3565.287962955046);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse6;
        float y = r * sin(a) + yOffse6;
        glVertex2f(x, y);
    }
    glEnd();

                                glBegin(GL_POLYGON);
    float xOffse7 = (7165.964749707655);
    float yOffse7 = (3458.919960960697);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse7;
        float y = r * sin(a) + yOffse7;
        glVertex2f(x, y);
    }
    glEnd();

                                    glBegin(GL_POLYGON);
    float xOffse8 = (7113.084306988403);
    float yOffse8 = (3340.77260357127);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 80;
        float x = r * cos(a) + xOffse8;
        float y = r * sin(a) + yOffse8;
        glVertex2f(x, y);
    }
    glEnd();

                                        glBegin(GL_POLYGON);
    float xOffse9 = (6951.342039368129);
    float yOffse9 = (3471.7185629534257);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse9;
        float y = r * sin(a) + yOffse9;
        glVertex2f(x, y);
    }
    glEnd();

}

void forest(){

                                                glBegin(GL_POLYGON);
    float xOffse1 = (1198.17448895);
    float yOffse1 = (4030.6103847);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 550;
        float x = r * cos(a) + xOffse1;
        float y = r * sin(a) + yOffse1;
        glVertex2f(x, y);
    }
    glEnd();

                                                    glBegin(GL_POLYGON);
    float xOffse2 = (2191.1838165);
    float yOffse2 = (4030.2908887);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 700;
        float x = r * cos(a) + xOffse2;
        float y = r * sin(a) + yOffse2;
        glVertex2f(x, y);
    }
    glEnd();

                                                        glBegin(GL_POLYGON);
    float xOffse3 = (3170.8068865);
    float yOffse3 = ( 4039.1562558287);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 400;
        float x = r * cos(a) + xOffse3;
        float y = r * sin(a) + yOffse3;
        glVertex2f(x, y);
    }
    glEnd();

glBegin(GL_POLYGON);
        float xOffse4 = (4270.112402505);
    float yOffse4 = (4034.723572275417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 700;
        float x = r * cos(a) + xOffse4;
        float y = r * sin(a) + yOffse4;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
        float xOffse5 = (4988.20713808505);
    float yOffse5 = (4034.72357227545417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 400;
        float x = r * cos(a) + xOffse5;
        float y = r * sin(a) + yOffse5;
        glVertex2f(x, y);
    }
    glEnd();


        glBegin(GL_POLYGON);
        float xOffse6 = (5896.90726644405);
    float yOffse6 = (4030.2908887224417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 700;
        float x = r * cos(a) + xOffse6;
        float y = r * sin(a) + yOffse6;
        glVertex2f(x, y);
    }
    glEnd();


           glBegin(GL_POLYGON);
        float xOffse7 = (6996.21278744405);
    float yOffse7 = (4034.7235727224417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 450;
        float x = r * cos(a) + xOffse7;
        float y = r * sin(a) + yOffse7;
        glVertex2f(x, y);
    }
    glEnd();


               glBegin(GL_POLYGON);
        float xOffse8 = (8095.5183084405);
    float yOffse8 = ( 4030.29088874417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 700;
        float x = r * cos(a) + xOffse8;
        float y = r * sin(a) + yOffse8;
        glVertex2f(x, y);
    }
    glEnd();


                   glBegin(GL_POLYGON);
        float xOffse9 = (8804.74767719605);
    float yOffse9 = ( 4025.85820516944417);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 700;
        float x = r * cos(a) + xOffse9;
        float y = r * sin(a) + yOffse9;
        glVertex2f(x, y);
    }
    glEnd();


                       glBegin(GL_POLYGON);
        float xOffse10 = (900.8866895495847);
    float yOffse10 = (4030.015721725284);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i *  pi) / 300;
        float r = 417;
        float x = r * cos(a) + xOffse10;
        float y = r * sin(a) + yOffse10;
        glVertex2f(x, y);
    }
    glEnd();
}

void object(){
          glBegin(GL_POLYGON);

       glColor3ub(169,169,169);
    glVertex2f(6161.305879047857, 3061.112897972926);
    glVertex2f(6330.356484481757, 3063.70096667477);
    glVertex2f(6272.63,3646.003);
    glVertex2f(6261.305,3661.112);
    glVertex2f(6240.44,3647.205);
    glEnd();

              glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2f(5961.305879047857, 3461.112897972926);
    glVertex2f(5961.305,3511.11);
    glVertex2f(6240.44,3647.205);
    glEnd();

                  glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(5961.305,3511.11);
    glVertex2f(5961.305879047857, 3611.112897972926);
    glVertex2f(6240.44,3647.205);
    glEnd();




                  glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2f(6261.305879047857, 3661.112897972926);
    glVertex2f(5961.305879047857, 3861.112897972926);
    glVertex2f(6011.305,3861.112);
    glEnd();

                  glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(6011.305,3861.112);
    glVertex2f(6111.305879047857, 3861.112897972926);
    glVertex2f(6261.305879047857, 3661.112897972926);
    glEnd();


                      glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2f(6261.305879047857, 3661.112897972926);
    glVertex2f(6561.305879047858, 3861.112897972926);
    glVertex2f(6561.305,3811.11);
    glEnd();

                  glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(6561.305,3811.11);
    glVertex2f(6561.305879047858, 3711.112897972926);
    glVertex2f(6261.305879047857, 3661.112897972926);
    glEnd();


                          glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2f(6261.305879047857, 3661.112897972926);
    glVertex2f(6561.305879047858, 3461.112897972926);
    glVertex2f(6511.305,3461.112);
    glEnd();

                  glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(6511.305,3461.112);
    glVertex2f(6411.305879047858, 3461.112897972926);
    glVertex2f(6261.305879047857, 3661.112897972926);
    glEnd();






}

void road(){
                      glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(5761.909891509336, 2213.330106852675);
    glVertex2f(6000, 2600);
    glVertex2f(6259.291550296617, 2894.4833022201356);
    glVertex2f(6522.14474726952, 3100.6051249083334);
    glVertex2f(6770.206,3250.499);
    glVertex2f(6855.017948309551, 3258.7152901137697);
    glVertex2f(6938.976029408643, 3199.3509903467166);

   /* glVertex2f(7244.239513061392, 3476.3088186304426);
    glVertex2f(7600, 3600);
    glVertex2f(8007.909867451307, 3677.7940167178326);
    glVertex2f(8365.239188411408, 3746.8235446306);
    glVertex2f(8749.948142215515, 3821.02707318485);
    glVertex2f(9075.837269866153, 3868.640358594306);
    glVertex2f(9500,3897.06);*/



    /*glVertex2f(9500,3472.71);
    glVertex2f(8919.925247720792, 3469.926822468964);
    glVertex2f(8308.467842547803, 3427.1444909085435);
    glVertex2f(7708.772068212914, 3357.4702930604926);
    glVertex2f(7320.720219004642, 3236.7986186256776);
    glVertex2f(7026.39,3113.335);*/
    glVertex2f(6932.4449851817435, 3095.8176696070104);
    glVertex2f(6709.488724429489, 2974.6446354915306);
    glVertex2f(6431.946634295153, 2770.272732756207);
    glVertex2f(6167.020093712377, 2467.49954351869);

    glVertex2f(5900.06,2035.95);

    glEnd();





                      glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(7244.239513061392, 3476.3088186304426);
    glVertex2f(7600, 3600);
    glVertex2f(8007.909867451307, 3677.7940167178326);
    glVertex2f(8365.239188411408, 3746.8235446306);
    glVertex2f(8749.948142215515, 3821.02707318485);
    glVertex2f(9075.837269866153, 3868.640358594306);
    glVertex2f(9500,3897.06);


    glVertex2f(9500,3594.81);
    glVertex2f(8946.960315218743, 3554.2297199849413);
    glVertex2f(8314.269638980795, 3451.5667045953855);
    glVertex2f(7708.772068212914, 3357.4702930604926);
    glVertex2f(7320.720219004642, 3236.7986186256776);
    glVertex2f(7025.69,3129.85);
    glEnd();






                          glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(6770.206,3250.49);
    glVertex2f(6932.4449851817435, 3095.8176696070104);
    glVertex2f(7025.69,3129.85);
    glVertex2f(7244.239513061392, 3476.3088186304426);

    glEnd();















}

void road2(){
                             glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(5943.902,2106.81);
    glVertex2f(6580.423366486937, 2127.129392901985);
    glVertex2f(7059.303454817346, 2222.5363774553507);
    glVertex2f(7445.924503936845, 2361.492183043149);
    glVertex2f(7529.677,2493.38);
    glVertex2f(7414.73,2495.77);
    glVertex2f(7319.166385428153, 2422.1869238519835);


        glVertex2f(6993.470994977052, 2357.44024984663);
    glVertex2f(6621.102694839659, 2318.351934404017);
    glVertex2f(6075.95,2320.28);


}

void object1(){

                                     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(500,1374.22);
    glVertex2f(3345.8362560524256, 1454.3332631993783);

    glEnd();

                                     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3345.8362560524256, 1454.3332631993783);
    glVertex2f(4000, 2000);

    glEnd();

                                         glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(4000, 2000);
    glVertex2f(3764.8686507135776, 2494.930376607931);

    glEnd();

                                             glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3764.8686507135776, 2494.930376607931);
    glVertex2f(3967.400974799801, 3172.366081310143);

    glEnd();

                                                 glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3967.400974799801, 3172.366081310143);
    glVertex2f(3500.56,4029.16);

    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(9500,1074.29);
    glVertex2f(6649.208300631173, 1573.059108353374);

    glEnd();


        glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
        glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(5985.740342417683, 1929.236643815362);

    glEnd();


            glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
     glVertex2f(5985.740342417683, 1929.236643815362);
    glVertex2f(5587.659567489588, 2425.091644164404);

    glEnd();


                glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
     glVertex2f(5587.659567489588, 2425.091644164404);
    glVertex2f(5846.062877530632, 3214.269320776259);

    glEnd();


                    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
     glVertex2f(5846.062877530632, 3214.269320776259);
    glVertex2f(5253.26,4028.344);

    glEnd();












}


void river3(){
 glBegin(GL_POLYGON);

                glColor3ub(0,191,255);

    glVertex2f(4000, 2000);
    glVertex2f(3764.8686507135776, 2494.930376607931);
    glVertex2f(3967.400974799801, 3172.366081310143);
    glVertex2f(5846.062877530632, 3214.269320776259);
    glVertex2f(5587.659567489588, 2425.091644164404);
    glVertex2f(5985.740342417683, 1929.236643815362);

    glEnd();


     glBegin(GL_POLYGON);

                glColor3ub(0,191,255);

    glVertex2f(4885.435447016233, 3197.7975450933245);
    glVertex2f(5253.26,4028.344);
    glVertex2f(5846.062877530632, 3214.269320776259);


    glEnd();



}


void object3(){
         glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

      glVertex2f(3967.400974799801, 3172.366081310143);

   glVertex2f(3969.927330319634, 3082.627491339491);
    glVertex2f(3783.82,2455.031);
     glVertex2f(3764.8686507135776, 2494.930376607931);

    glEnd();


                    glBegin(GL_POLYGON);

           glColor3ub(0,0,0);



   glVertex2f(5987.085229903402, 1893.4323444905895);
    glVertex2f(5985.740342417683, 1929.236643815362);
        glVertex2f(5587.659567489588, 2425.091644164404);
    glVertex2f(5589.176235059323, 2382.309375401798);

    glEnd();


                        glBegin(GL_POLYGON);

           glColor3ub(0,0,0);



   glVertex2f(5846.062877530632, 3214.269320776259);
    glVertex2f(5835.88,3183.18);
        glVertex2f(5218.59,4028.364);
    glVertex2f(5253.26,4028.344);

    glEnd();



}







  void DayScene()
  {
           glBegin(GL_POLYGON);

       glColor3ub(0,191,255);
    glVertex2f(500,0);
    glVertex2f(500, 5500);
    glVertex2f(9500, 5500);
    glVertex2f(9500, 0);
    glEnd();
                               glBegin(GL_POLYGON);
        float xOffse14 = (5847.1610333);
    float yOffse14 = (5259.0583724);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255,255,0);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 160;
        float x = r * cos(a) + xOffse14;
        float y = r * sin(a) + yOffse14;
        glVertex2f(x, y);
    }
    glEnd();





  }
  void NightScene()
  {
           glBegin(GL_POLYGON);

       glColor3ub(0,0,31);
    glVertex2f(500,0);
    glVertex2f(500, 5500);
    glVertex2f(9500, 5500);
    glVertex2f(9500, 0);
    glEnd();
                               glBegin(GL_POLYGON);
        float xOffse14 = (5847.1610333);
    float yOffse14 = (5259.0583724);
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255,255,255);
        float pi = 3.1416;
        float a = (i *2*  pi) / 300;
        float r = 160;
        float x = r * cos(a) + xOffse14;
        float y = r * sin(a) + yOffse14;
        glVertex2f(x, y);
    }


    glEnd();



    glBegin(GL_POLYGON);

           glColor3ub(50,205,50);

    glVertex2f(500,4030.579);
    glVertex2f(500,1374.227);
    glVertex2f(3345.8362560524256, 1454.3332631993783);
    glVertex2f(4000, 2000);
   glVertex2f(3764.8686507135776, 2494.930376607931);
    glVertex2f(3967.400974799801, 3172.366081310143);
    glVertex2f(3500.56,4029.168);
    glEnd();






glBegin(GL_POLYGON);
           glColor3ub(50,205,50);

    glVertex2f(5253.265,4028.344);
    glVertex2f(5846.062877530632, 3214.269320776259);
    glVertex2f(5587.659567489588, 2425.091644164404);
    glVertex2f(5985.740342417683, 1929.236643815362);
   glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(9500,1074.29);
    glVertex2f(9500,4026.34);
    glEnd();


            glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(50,205,50);
        glVertex2f(500,4030.57);
    glVertex2f(9500,4026.34);

    glEnd();



    glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

    glVertex2f(500,1374.22);
    glVertex2f(3345.8362560524256, 1454.3332631993783);

   glVertex2f(3350.5008455629645, 1411.996052951424);
    glVertex2f(500,1326.35);

    glEnd();


      glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

      glVertex2f(4000, 2000);
    glVertex2f(4000, 1950);

   glVertex2f(3350.5008455629645, 1411.996052951424);
    glVertex2f(3345.8362560524256, 1454.3332631993783);

    glEnd();



        glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

    glVertex2f(9500,1038.63);
    glVertex2f(9500,1074.95);

   glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(6648.385265102986, 1533.3517958943964);

    glEnd();



            glBegin(GL_POLYGON);

           glColor3ub(0,0,0);

    glVertex2f(6649.208300631173, 1573.059108353374);
    glVertex2f(6648.385265102986, 1533.3517958943964);

   glVertex2f(5987.085229903402, 1893.4323444905895);
    glVertex2f(5985.740342417683, 1929.236643815362);

    glEnd();






glColor3ub(255, 255, 255);  // Set the color for the stars (white)
    glPointSize(2.0f);  // Size of the stars

    glBegin(GL_POINTS);  // Begin drawing points (stars)

    // Manually placing stars at specific coordinates within the polygon bounds
    glVertex2f(1200, 5300);  // Star 1
    glVertex2f(1500, 5200);  // Star 2
    glVertex2f(3000, 5100);  // Star 3
    glVertex2f(4500, 5400);  // Star 4
    glVertex2f(6000, 5000);  // Star 5
    glVertex2f(7000, 5200);  // Star 6
    glVertex2f(8000, 5300);  // Star 7
    glVertex2f(9000, 5400);  // Star 8
    glVertex2f(5000, 4700);  // Star 9
    glVertex2f(6000, 4500);  // Star 10
    glVertex2f(7500, 4300);  // Star 11
    glVertex2f(8500, 4100);  // Star 12
    glVertex2f(1000, 5400);  // Star 13
    glVertex2f(2500, 5200);  // Star 14
    glVertex2f(3800, 5300);  // Star 15
    glVertex2f(4700, 5100);  // Star 16
    glVertex2f(5500, 4950);  // Star 17
    glVertex2f(6200, 4750);  // Star 18
    glVertex2f(6900, 5000);  // Star 19
    glVertex2f(7600, 5100);  // Star 20
    glVertex2f(8200, 4900);  // Star 21
    glVertex2f(8800, 4800);  // Star 22
    glVertex2f(9100, 4700);  // Star 23
    glVertex2f(5200, 4600);  // Star 24
    glVertex2f(4700, 4200);  // Star 25
    glVertex2f(3600, 4400);  // Star 26
    glVertex2f(2400, 4900);  // Star 27
    glVertex2f(1500, 4700);  // Star 28
    glVertex2f(800, 4900);   // Star 29
    glEnd();






   }


   void rain(int x,int y)
{

    glLineWidth(1.25);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(30+x, 82+y);

    glVertex2f(57+x, 25+y);

    glEnd();

}
void raining()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f, rainPositionY, 0.0f);
    for(int i=0; i<12000; i+=300)
    {
        for(int j=0; j<12000; j+=300)
        {
            rain(i,j);

        }
    }
    glPopMatrix();
}



void display() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
        if (isDay){
        DayScene();
    }
    else{ NightScene();
    }

//    sky();
    bird();

    river();
    river2();
    field1();
    road();
    tree2();
    road2();
    House();
    boat();
    tree();
    forest();
    cloud();
    object();
    object1();
    river3();
    object3();
        if (isRaining)
    {
        raining();  // Call the function to draw rain
    }


    glFlush();
}

void update1(int value) {
    _move1 += 7.5f;
    if (_move1 > 10000.0f) {
        _move1 = -6000.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(10, update1, 0);
}


void update2(int value) {
  if(isMoving){
    boatPosition-=boatSpeed;
    if(boatPosition<-6000){
        boatPosition=10000.0;
    }

  }
    glutPostRedisplay();
    glutTimerFunc(10, update2, 0);
}


void updateRain(int value)
{
    if (isRaining)
    {
        rainPositionY -= 30.0f;  // Adjust speed of rain falling
        if (rainPositionY < -5000.0f)    // Reset rain to top
        {
            rainPositionY = 10.0f;
            rainPositionY = 10.0f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(10, updateRain, 0);  // Ensure this is set in your main function
// Trigger redraw

}

void handlekeypress(unsigned char key,int x,int y)
{
    switch (key)
    {
    case 'd':
        isDay=true;
        break;
    case'n':
        isDay=false;
        break;

    case 'r':
        isRaining = true;

        break;
    case 'b':
        isRaining = false;
        break;
        glutPostRedisplay();

    }
}
void handleMouse(int button,int sate,int x,int y)
{
    if (button==GLUT_LEFT_BUTTON)
    {
      boatSpeed+=5.0f ;

    }
    if (button==GLUT_RIGHT_BUTTON)
    {
        boatSpeed-=5.0f ;
    }
     glutPostRedisplay();


}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 700);
    glutCreateWindow("OpenGL Setup");
    gluOrtho2D(500, 9500, 0, 5500);
    glutDisplayFunc(display);
    glutTimerFunc(20, update1, 0);
    glutTimerFunc(20, update2, 0);
     glutTimerFunc(10, updateRain, 0);
    glutKeyboardFunc(handlekeypress);
    glutMouseFunc(handleMouse);


    glutMainLoop();
    return 0;
}

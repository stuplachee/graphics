#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;


GLfloat car1Position=0.0f;
GLfloat car1Speed=20.0f;
bool isMoving=true;
bool isRaining=false;
GLfloat rainPositionY=11000.0f;

GLfloat car2Position=0.0f;
GLfloat car2Speed=20.0f;

GLfloat car3Position=0.0f;
GLfloat car3Speed=20.0f;




float _move4 =0.0f;
float _move5 =0.0f;
float _move6 =0.0f;
bool isDay=true;







void Building1()
{
    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2964.028,2888.52);
    glVertex2f(2964.7315018787226, 2721.85355098699);
    glVertex2f(6739.212158701505, 2722.77693462105);
    glVertex2f(6738.513,2888.4644);
    glEnd();

    /*  glLineWidth(1);
      glBegin(GL_LINES);
      glColor3ub(1,1,1);
      glVertex2f(2964.028,2888.52);
      glVertex2f(2964.7315018787226, 2721.85355098699);

      glEnd();

          glLineWidth(1);
      glBegin(GL_LINES);
      glColor3ub(1,1,1);
      glVertex2f(2964.028,2888.52);
     glVertex2f(6738.513,2888.4644);

      glEnd();

              glLineWidth(1);
      glBegin(GL_LINES);
      glColor3ub(1,1,1);
      glVertex2f(2964.028,2888.52);
    glVertex2f(6739.212158701505, 2722.77693462105);

      glEnd();
    */

    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(6524.586049600995, 2887.9140034603324);
    glVertex2f(6527.208310120082, 3095.0725844683293);
    glVertex2f(3190.2367530868687, 3109.52694702449);
    glVertex2f(3189.833540837503, 2887.1083529091416);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(3190.2367530868687, 3109.52694702449);
    glVertex2f(3271.699,3109.174);
    glVertex2f(3271.2613153622474, 4605.771301893608);
    glVertex2f(3184.986161396291, 4604.937362745289);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(102,0,0);
    glVertex2f(6442.221,3095.44);
    glVertex2f(6527.208310120082, 3095.0725844683293);
    glVertex2f(6543.363279163686, 4602.872222510862);
    glVertex2f(6447.779484646246, 4602.947674502936);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(165,42,42);
    glVertex2f(4297.439,3104.731);
    glVertex2f(5509.343339628172, 3099.098775783176);
    glVertex2f(5493.637734117932, 4863.361794766628);
    glVertex2f(4284.306109829531, 4873.832198440121);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(159,63,63);
    glVertex2f(3389.384,3108.664);
    glVertex2f(4297.439,3104.731);
    glVertex2f(4292.573,3760.177);
    glVertex2f(3394.01,3760.207);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(159,63,63);
    glVertex2f(3395.251,3934.958);
    glVertex2f(4291.308,3930.553);
    glVertex2f(4286.311,4603.655);
    glVertex2f(3400.011,4605.503);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(218,165,32);
    glVertex2f(3395.251,3934.958);
    glVertex2f(3394.01,3760.207);
    glVertex2f(4292.573,3760.177);
    glVertex2f(4291.308,3930.553);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(159,63,63);
    glVertex2f(5509.343339628172, 3099.098775783176);
    glVertex2f(6335.044000273773, 3110.074852745508);
    glVertex2f(6331.133,3760.115);
    glVertex2f(5503.45,3760.18);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(159,63,63);
    glVertex2f(5501.948,3929.774);
    glVertex2f(6330.141,3924.94);
    glVertex2f(6326.06,4602.566);
    glVertex2f(5495.98,4599.96);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(218,165,32);
    glVertex2f(5501.948,3929.774);
    glVertex2f(5503.45,3760.18);
    glVertex2f(6331.133,3760.115);
    glVertex2f(6330.141,3924.94);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(102,205,170);
    glVertex2f(4600, 3100);
    glVertex2f(5226.295800618684, 3107.7365507141826);
    glVertex2f(5228.851284074868, 3636.308355402888);
    glVertex2f(4596.744795993504, 3641.7575492656583);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(128,0,0);
    glVertex2f(4291.308,3930.553);
    glVertex2f(4292.573,3760.1776);
    glVertex2f(5503.458,3760.186);
    glVertex2f(5501.94,3929.778);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(4291.308,3930.553);
    glVertex2f(5501.94,3929.778);
    glVertex2f(5500.236,4122.12);
    glVertex2f(4289.87,4123.823);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(5000, 4400);
    glVertex2f(5289.7450138054855, 4401.723167712202);
    glVertex2f(5291.97468998613, 4604.623700150902);
    glVertex2f(5000, 4600);
    glVertex2f(5000, 4800);
    glVertex2f(4800, 4800);
    glVertex2f(4800, 4600);
    glVertex2f(4513.817702940979, 4597.934671608967);
    glVertex2f(4518.277055302269, 4403.952843892846);
    glVertex2f(4800, 4400);
    glVertex2f(4800, 4200);
    glVertex2f(5000, 4200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,0,0);
    glVertex2f(4284.306109829531, 4873.832198440121);
    glVertex2f(4119.588644284095, 5047.987114120027);
    glVertex2f(5653.149012056439, 5042.627627537683);
    glVertex2f(5493.637734117932, 4863.361794766628);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,0,0);
    glVertex2f(2954.165894796945, 4697.669022708141);
    glVertex2f(2954.9665917106313, 4603.83948198062);
    glVertex2f(4286.311,4603.6566);
    glVertex2f(4285.58,4701.388);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(128,0,0);
    glVertex2f(5495.98,4599.96);
    glVertex2f(5495.088,4700.36);
    glVertex2f(6725.447728395123, 4699.97882236965);
    glVertex2f(6725.2292267359535, 4603.730482560595);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153,255,204);
    glVertex2f(3567.4596642894517, 4421.6935571403665);
    glVertex2f(3567.2218320835163, 4113.28530340543);
    glVertex2f(4101.425676665022, 4110.573608762884);
    glVertex2f(4098.713982022476, 4425.130187298198);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153,255,204);
    glVertex2f(3567.4596642894517, 3589.474471343057);
    glVertex2f(4098.713982022477, 3592.911101500888);
    glVertex2f(4101.425676665023, 3278.3545229655742);
    glVertex2f(3567.2218320835163, 3281.06621760812);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153,255,204);
    glVertex2f(5655.464539049646, 4415.727828926767);
    glVertex2f(6186.718856782673, 4419.164459084598);
    glVertex2f(6189.43055142522, 4104.607880549284);
    glVertex2f(5655.22670684371, 4107.31957519183);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153,255,204);
    glVertex2f(5658.447403156446, 3583.508743129456);
    glVertex2f(6189.701720889473, 3586.945373287287);
    glVertex2f(6192.41341553202, 3272.3887947519734);
    glVertex2f(5658.20957095051, 3275.100489394519);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(112,128,144);
    glVertex2f(6739.212158701505, 2722.77693462105);
    glVertex2f(6738.51,2888.466);
    glVertex2f(2962.034,2896.15);
    glVertex2f(2962.5422354860516, 2730.2398451614995);
    glEnd();



    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(4915.55,3639.009);
    glVertex2f(4915.82706513778, 3102.1148142215998);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3837.77,4423.44);
    glVertex2f(3837.77,4111.911);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(3839.055,3591.23);
    glVertex2f(3841.655,3279.67);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(5922.78,4417.45);
    glVertex2f(5924.23,4105.95);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(5927.19,3585.24);
    glVertex2f(5927.53,3273.733);

    glEnd();








}


/*
void rain(){

           glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(4129.214948917479, 6338.029821515847);
   glVertex2f(4155.523244522861, 6280.560243737104);

    glEnd();

}

*/





void house2()
{

    glBegin(GL_POLYGON);
    glColor3ub(204,102,0);
    glVertex2f(134.4472633063567, 2999.898955208924);
    glVertex2f(1200, 3000);
    glVertex2f(1200.7130979563476, 4671.890846951911);
    glVertex2f(125.9292097542361, 4667.687014537314);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(112,128,144);
    glVertex2f(2964.028,2888.52);
    glVertex2f(3189.83,2887.108);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(77,57,57);
    glVertex2f(400.1,2999.92);
    glVertex2f(938.7,2999.97);
    glVertex2f(940.7172256901588, 3601.143759108187);
    glVertex2f(400.1, 3600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(129.86,3897.83);
    glVertex2f(130.36,3799.44);
    glVertex2f(1200.34,3799.99);
    glVertex2f(1200.38,3899.99);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(175,238,238);
    glVertex2f(220.9129547973629, 4008.248207123601);
    glVertex2f(1124.374588049909, 4011.736528912643);
    glVertex2f(1122.531395417062, 4200.5318880394);
    glVertex2f(222.6348424106242, 4207.925210003986);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(175,238,238);
    glVertex2f(213.5845696504841, 4348.833524228284);
    glVertex2f(211.490799493244, 4558.210539952285);
    glVertex2f(1121.6901357402367, 4554.511496548684);
    glVertex2f(1120.4726183245332, 4351.186088126235);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(1200,3000);
    glVertex2f(1862.64,3000.91);
    glVertex2f(1872.96,4501.87);
    glVertex2f(1200.64,4511.78);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123,104,238);
    glVertex2f(1340.69093399818, 4128.860636382928);
    glVertex2f(1739.1113201289925, 4130.072926462665);
    glVertex2f(1737.928500211661, 4346.09993040592);
    glVertex2f(1339.260917635229, 4342.218494533924);    //window
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(123,104,238);
    glVertex2f(1339.1889192985243, 3672.0906304712707);
    glVertex2f(1752.3263265110224, 3668.060021620417);
    glVertex2f(1752.3263265110224, 3891.7588128427888);
    glVertex2f(1339.225707295288, 3890.2053079320253);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123,104,238);
    glVertex2f(1744.9048410919522, 3413.5941746009767);
    glVertex2f(1336.3813540128874, 3416.448150177975);
    glVertex2f(1335.8795813531908, 3177.3789790071687);
    glVertex2f(1741.175127477313, 3179.8654547502615);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(46,39,39);
    glVertex2f(1200.64,4511.7887);
    glVertex2f(1200.7130979563476, 4671.890846951911);
    glVertex2f(1998.2594002619344, 4664.868517741193);
    glVertex2f(2000, 4500);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2f(125.9292097542361, 4667.687014537314);
    glVertex2f(1200.7130979563476, 4671.890846951911);
    glVertex2f(1200, 5000);
    glVertex2f(125.9292097542361, 4997.421921119453);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(46,39,39);
    glVertex2f(125.9292097542361, 4997.421921119453);
    glVertex2f(69.6922378226909, 4999.205534808846);
    glVertex2f(68.8382724235587, 5097.6266677291815);
    glVertex2f(1258.9876544840456, 5100.406432046152);
    glVertex2f(1260.498566906866, 4999.175299717173);
    glVertex2f(1200, 5000);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(139,0,0);
    glVertex2f(125.9292097542361, 4667.687014537314);
    glVertex2f(125.9292097542361, 4997.421921119453);
    glVertex2f(1200, 5000);
    glVertex2f(1200.7130979563476, 4671.890846951911);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(169,169,169);
    glVertex2f(0,2736.625);
    glVertex2f(0,3000);
    glVertex2f(2817.8663715357598, 3002.2372331571983);
    glVertex2f(2962.03,2896.15);
    glVertex2f(2962.5422354860516, 2730.2398451614995);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(676.255,3600.58);
    glVertex2f(673.85,2999.95);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(673.08,4204.224);
    glVertex2f(674.355,4009.99);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(667.51,4556.35);
    glVertex2f(668.54,4350.012);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(1540.133,4344.174);
    glVertex2f(1539.801,4129.46);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(1548.73,3890.99);
    glVertex2f(1547.99,3670.05);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(1540.011,3415.022);
    glVertex2f(1540.008,3178.63);

    glEnd();





}

void house3()
{

    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(7582.23299700192, 4491.650563988135);
    glVertex2f(8725.84848969883, 4498.483796194419);
    glVertex2f(8721.410078653806, 3998.4674608836053);
    glVertex2f(7219.6172935006825, 3993.5540201961835);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(7219.6172935006825, 3993.5540201961835);
    glVertex2f(7218.29,3002.18);
    glVertex2f(8725.877,3000.77);
    glVertex2f(8721.410078653806, 3998.4674608836053);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(183,23,23);
    glVertex2f(7219.02,3551.334);
    glVertex2f(7218.87,3442.24);
    glVertex2f(8723.9,3442.222);
    glVertex2f(8723.401,3553.76);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(218,165,32);
    glVertex2f(8725.84848969883, 4498.483796194419);
    glVertex2f(9085.290025155206, 4815.134672667887);
    glVertex2f(9433.123495431648, 4484.905923861364);
    glVertex2f(9433.680486314066, 3604.343903792587);
    glVertex2f(9504.893953680827, 3606.5018876521854);
    glVertex2f(9506.32,3000.05);


    glVertex2f(8725.877,3000.77);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex2f(7326.326750793623, 3922.853058691467);
    glVertex2f(7330.676766928356, 3623.502101227364);
    glVertex2f(7924.073842814183, 3623.933810985179);
    glVertex2f(7923.579827854335, 3933.761790692576);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex2f(8025.4265342296785, 3932.5154469455615);
    glVertex2f(8029.776550364411, 3633.1644894814585);
    glVertex2f(8623.17362625024, 3633.5961992392736);
    glVertex2f(8622.679611290392, 3943.4241789466705);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex2f(7338.631640836814, 3375.304495702298);
    glVertex2f(7342.981656971547, 3075.953538238195);
    glVertex2f(7936.378732857377, 3076.38524799601);
    glVertex2f(7935.884717897529, 3386.213227703407);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex2f(8038.384928444637, 3375.304495702298);
    glVertex2f(8042.73494457937, 3075.953538238195);
    glVertex2f(8636.132020465198, 3076.38524799601);
    glVertex2f(8635.63800550535, 3386.213227703407);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex2f(8782.138153827254, 4164.328984789261);
    glVertex2f(9379.391230887968, 4175.2377167903705);
    glVertex2f(9379.885245847816, 3865.409737082973);
    glVertex2f(8786.488169961987, 3864.978027325158);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex2f(8900, 3000);
    glVertex2f(9341.18,3000.207);
    glVertex2f(9341.186133485664, 3499.1237392591);
    glVertex2f(8900, 3500);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(169,169,169);
    glVertex2f(9554.73,2716.56);
    glVertex2f(9554.69,3000.008);
    glVertex2f(6964.87,3002.41);
    glVertex2f(6981.97,2721.96);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(183,23,23);
    glVertex2f(9433.94,3656.38);
    glVertex2f(9433.68,3604.34);
    glVertex2f(8723.177,3603.74);
    glVertex2f(8722.94,3654.57);
    glEnd();




    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(7625.31,3928.31);
    glVertex2f(7627.65,3623.71);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(7639.98,3380.808);
    glVertex2f(7639.24,3076.16);

    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(9083.293106664862, 4169.040425623871);
    glVertex2f(9083.53,3865.19);

    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(9126.43,3499.55);
    glVertex2f(9124.61,3007.244);

    glEnd();














}


void house4()
{



    glBegin(GL_POLYGON);
    glColor3ub(105,105,105);
    glVertex2f(1702.05,3000.69);
    glVertex2f(1700, 5900);
    glVertex2f(3400, 5900);
    glVertex2f(3389.4,2888.51);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2f(2036.96,3001.15);
    glVertex2f(2037.03,5800);
    glVertex2f(2300, 5800);
    glVertex2f(2299.99,3001.52);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2f(2399.99,3001.65);
    glVertex2f(2400,5800);
    glVertex2f(3200, 5800);
    glVertex2f(3189.833540837503, 2887.1083529091416);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2720, 5600);
    glVertex2f(2880, 5600);
    glVertex2f(2880, 5100);
    glVertex2f(2720, 5100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2478.565994991777, 5600.030275054002);
    glVertex2f(2640, 5600);
    glVertex2f(2640, 5400);
    glVertex2f(2480, 5400);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2478.4758903210045, 5299.328418283203);
    glVertex2f(2640, 5300);
    glVertex2f(2639.9098953292273, 5099.298143229201);
    glVertex2f(2479.9098953292273, 5099.298143229201);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2958.9477973108524, 5600.84391356717);
    glVertex2f(3120.381802319075, 5600.8136385131675);
    glVertex2f(3120.381802319075, 5400.8136385131675);
    glVertex2f(2960.381802319075, 5400.8136385131675);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2958.8576926400797, 5300.1420567963705);
    glVertex2f(3120.381802319075, 5300.8136385131675);
    glVertex2f(3120.2916976483025, 5100.111781742368);
    glVertex2f(2960.2916976483025, 5100.111781742368);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2958.341781821661, 4639.4043862230355);
    glVertex2f(3119.7757868298836, 4639.374111169032);
    glVertex2f(3119.7757868298836, 4439.374111169032);
    glVertex2f(2959.7757868298836, 4439.374111169032);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2958.251677150888, 4338.7025294522355);
    glVertex2f(3119.7757868298836, 4339.374111169032);
    glVertex2f(3119.685682159111, 4138.672254398235);
    glVertex2f(2959.685682159111, 4138.672254398235);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2958.759458931709, 3703.0497883225194);
    glVertex2f(3120.193463939933, 3703.019513268516);
    glVertex2f(3120.193463939933, 3503.0195132685167);
    glVertex2f(2960.193463939932, 3503.0195132685167);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2958.6693542609364, 3402.3479315517197);
    glVertex2f(3120.193463939933, 3403.0195132685167);
    glVertex2f(3120.1033592691597, 3202.3176564977193);
    glVertex2f(2960.1033592691592, 3202.3176564977193);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2479.781042292564, 3400.035025206074);
    glVertex2f(2641.3051519715605, 3400.706606922871);
    glVertex2f(2641.2150473007873, 3200.0047501520735);
    glVertex2f(2481.215047300787, 3200.0047501520735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2479.8711469633367, 3700.7368819768735);
    glVertex2f(2641.3051519715605, 3700.7066069228704);
    glVertex2f(2641.3051519715605, 3500.706606922871);
    glVertex2f(2481.3051519715596, 3500.706606922871);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2479.182669375875, 4640.003530857094);
    glVertex2f(2640.6166743840986, 4639.973255803091);
    glVertex2f(2640.6166743840986, 4439.973255803091);
    glVertex2f(2480.6166743840977, 4439.973255803091);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2719.1565607246157, 4641.593467593682);
    glVertex2f(2879.156560724616, 4641.593467593682);
    glVertex2f(2879.156560724616, 4141.593467593682);
    glVertex2f(2719.1565607246157, 4141.593467593682);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2718.0216965869836, 3697.9598895758077);
    glVertex2f(2878.021696586984, 3697.9598895758077);
    glVertex2f(2878.021696586984, 3197.9598895758077);
    glVertex2f(2718.0216965869836, 3197.9598895758077);
    glEnd();











}
void house5()
{

    glBegin(GL_POLYGON);
    glColor3ub(153,0,76);
    glVertex2f(6154.856131215006, 2990.2437532834447);
    glVertex2f(6152.643392844944, 5199.4101701667605);
    glVertex2f(7800, 5200);
    glVertex2f(7800.001,3001.64);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(128,0,128);
    glVertex2f(6401.415175142084, 2728.5779630069646);
    glVertex2f(6400, 5000);
    glVertex2f(6800, 5000);
    glVertex2f(6800.004,2722.3511);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,153,153);
    glVertex2f(7000, 5000);
    glVertex2f(7600, 5000);
    glVertex2f(7600, 4700);
    glVertex2f(7000, 4700);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,153,153);
    glVertex2f(7000, 4500);
    glVertex2f(7600, 4500);
    glVertex2f(7600, 4200);
    glVertex2f(7000, 4200);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,153,153);
    glVertex2f(7000, 4000);
    glVertex2f(7600, 4000);
    glVertex2f(7600, 3700);
    glVertex2f(7000, 3700);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,153,153);
    glVertex2f(7000, 3500);
    glVertex2f(7600, 3500);
    glVertex2f(7600, 3200);
    glVertex2f(7000, 3200);
    glEnd();



}


void tree()
{
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(2195.7537945626227, 2514.6217201172904);
    glVertex2f(2525.069599323987, 2508.1006150725107);
    glVertex2f(2459.5998021252835, 3799.133869292443);
    glVertex2f(2296.2445728448974, 3795.4386839970334);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(2101.336825241634, 4054.094898057145);
    glVertex2f(2024.6580654646743, 4044.510053085025);
    glVertex2f(2178.0155850185934, 4351.225092192874);
    glVertex2f(2107.7267218897136, 4312.885712304394);
    glVertex2f(2429.5994117345253, 4722.459659935656);
    glVertex2f(2698.79216183711, 4341.640247220755);
    glVertex2f(2631.6982470322705, 4373.589730461155);
    glVertex2f(2785.0557665861893, 4047.705001409065);
    glVertex2f(2705.18205848519, 4066.8746913533055);
    glVertex2f(2800, 3800);
    glVertex2f(2000, 3800);
    glEnd();






}



void tree2()
{

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(6722.899759235629, 2577.5995627294205);
    glVertex2f(6990.915342570069, 2575.403318409896);
    glVertex2f(6922.352793525979, 3699.5228806126624);
    glVertex2f(7037.384429581172, 3742.0210689968153);
    glVertex2f(7000, 3800);
    glVertex2f(6858.892038367701, 3730.1215762492507);
    glVertex2f(6903.090154287227, 3840.6168660480675);
    glVertex2f(6848.692473155503, 3862.715924007831);
    glVertex2f(6802.794429700611, 3740.321141461449);
    glVertex2f(6714.398197861558, 3816.817880552938);
    glVertex2f(6695.698994972528, 3757.3204168151133);
    glVertex2f(6785.228832451364, 3687.0570659695154);
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse1 = 6619.4299999;
    float yOffse1 =3799.1287460;
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
    float xOffse2 = 6486.652676;
    float yOffse2 =3975.582860;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse2;
        float y = r * sin(a) + yOffse2;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    float xOffse3 = 6445.97217;
    float yOffse3 =4178.453490;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse3;
        float y = r * sin(a) + yOffse3;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse4 = 6661.5325867;
    float yOffse4 =4321.22726790;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse4;
        float y = r * sin(a) + yOffse4;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse5 = 7061.85907;
    float yOffse5 =4324.0267536790;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse5;
        float y = r * sin(a) + yOffse5;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse6 = 7311.0132907;
    float yOffse6 =4184.052462177536790;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse6;
        float y = r * sin(a) + yOffse6;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse7 = 7269.0210907;
    float yOffse7 =3976.890577536790;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse7;
        float y = r * sin(a) + yOffse7;
        glVertex2f(x, y);
    }
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse8 = 7100;
    float yOffse8 =3800;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 150;
        float x = r * cos(a) + xOffse8;
        float y = r * sin(a) + yOffse8;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse9 = 6871.0080;
    float yOffse9 =3959.85918143159;
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

    glBegin(GL_POLYGON);
    float xOffse10 = 6879.8924811096385;
    float yOffse10 =4114.065316442035;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(34,139,34);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 300;
        float x = r * cos(a) + xOffse10;
        float y = r * sin(a) + yOffse10;
        glVertex2f(x, y);
    }
    glEnd();





}


void cloud()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move4, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    float xOffse1 = 7135.875345182996;
    float yOffse1 =5414.86296365927;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse1;
        float y = r * sin(a) + yOffse1;
        glVertex2f(x, y);
    }
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse2 = 7538.700694721944;
    float yOffse2 =5616.275638428745;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse2;
        float y = r * sin(a) + yOffse2;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    float xOffse3 = 7928.098532609594;
    float yOffse3 =5649.84441755699;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse3;
        float y = r * sin(a) + yOffse3;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse4 = 8129.511207379069;
    float yOffse4 =5421.576719484919;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse4;
        float y = r * sin(a) + yOffse4;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse5 = 7881.10224183005;
    float yOffse5 =5233.591556366742;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse5;
        float y = r * sin(a) + yOffse5;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse6 = 7558.8419621988917;
    float yOffse6 =5200.022777238497;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse6;
        float y = r * sin(a) + yOffse6;
        glVertex2f(x, y);
    }
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse7 = 8344.3513937998496;
    float yOffse7 =6482.3501399374865927;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse7;
        float y = r * sin(a) + yOffse7;
        glVertex2f(x, y);
    }
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse12 = 8740.46298751314944;
    float yOffse12 =6462.20887246058745;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse12;
        float y = r * sin(a) + yOffse12;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    float xOffse8 = 9056.0095113186499594;
    float yOffse8 = 6287.6512209936699;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse8;
        float y = r * sin(a) + yOffse8;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse9 = 8821.02805742092869;
    float yOffse9 =6052.66976709594;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse9;
        float y = r * sin(a) + yOffse9;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse10 = 8478.6265103128235;
    float yOffse10 =6139.9485928293842;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse10;
        float y = r * sin(a) + yOffse10;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse11 = 8116.083695727778917;
    float yOffse11 =6240.654930214117;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse11;
        float y = r * sin(a) + yOffse11;
        glVertex2f(x, y);
    }
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse13 = 1999.7420780827738;
    float yOffse13 = 6383.7104299695427;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse13;
        float y = r * sin(a) + yOffse13;
        glVertex2f(x, y);
    }
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse14 = 2402.5674276217223944;
    float yOffse14 =6585.12310473901745;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse14;
        float y = r * sin(a) + yOffse14;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    float xOffse15 = 2791.965265509372;
    float yOffse15 = 6618.691883867261;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse15;
        float y = r * sin(a) + yOffse15;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse16 =2993.37794027884769;
    float yOffse16 =6390.424185795189;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse16;
        float y = r * sin(a) + yOffse16;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse17 = 2744.96897472982665;
    float yOffse17 =6202.439022677013342;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse17;
        float y = r * sin(a) + yOffse17;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse18 =2422.70869509866917;
    float yOffse18 =6168.8702435487687;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse18;
        float y = r * sin(a) + yOffse18;
        glVertex2f(x, y);
    }
    glEnd();



    glBegin(GL_POLYGON);
    float xOffse19 = 965.793933480986296;
    float yOffse19 = 6053.20744383265927;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse19;
        float y = r * sin(a) + yOffse19;
        glVertex2f(x, y);
    }
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse20 = 1368.6192830199343944;
    float yOffse20 =6254.620118602335058745;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse20;
        float y = r * sin(a) + yOffse20;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    float xOffse21 = 1758.017120907584394;
    float yOffse21 = 6288.1888977305819;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse21;
        float y = r * sin(a) + yOffse21;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse22 =1959.429795677059269;
    float yOffse22 =6059.9211996585094;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse22;
        float y = r * sin(a) + yOffse22;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse23 = 1711.0208301280395;
    float yOffse23 =5871.93603654033342;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse23;
        float y = r * sin(a) + yOffse23;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse24 =1388.760550496881517;
    float yOffse24 =5838.3672574120877;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(220,220,220);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 280;
        float x = r * cos(a) + xOffse24;
        float y = r * sin(a) + yOffse24;
        glVertex2f(x, y);
    }
    glEnd();






    glPopMatrix();
}

void road()
{

    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(0,2222.62);
    glVertex2f(0,0);
    glVertex2f(9555.15,0);
    glVertex2f(9554.81,2211.85);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(6490.165048487075, 1206.3216291768313);
    glVertex2f(6490.165048487075, 1056.3216291768313);
    glVertex2f(8890.165048487077, 1056.3216291768313);
    glVertex2f(8890.165048487077, 1206.3216291768313);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(5713.802050256294, 1049.1515095419988);
    glVertex2f(5713.802050256294, 1199.1515095419988);
    glVertex2f(3313.8020502562917, 1199.1515095419988);
    glVertex2f(3313.8020502562917, 1049.1515095419988);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(2701.217086611675, 1049.5088544240361);
    glVertex2f(2701.217086611675, 1199.5088544240361);
    glVertex2f(301.2170866116704, 1199.5088544240361);
    glVertex2f(301.2170866116704, 1049.5088544240361);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(0,2222.62);
    glVertex2f(0,2736.62);
    glVertex2f(9554.73,2716.56);
    glVertex2f(9554.81,2211.56);
    glEnd();

}

void car()
{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car1Position, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(165,42,42);
    glVertex2f(5000, 200);
    glVertex2f(5124.289044905651, 398.2723966588142);
    glVertex2f(5603.747980342506, 445.3121825484159);
    glVertex2f(5800, 600);

    glVertex2f(6359.984884006852, 598.0138650191024);
    glVertex2f(6559.8809165867915, 396.7610997970423);
    glVertex2f(6600, 200);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex2f(5300, 380);
    glVertex2f(5300, 320);
    glVertex2f(6460, 320);
    glVertex2f(6460, 380);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(5699.467346536245, 453.3389600528147);
    glVertex2f(6100, 460);
    glVertex2f(6099.405388074275, 559.6162018601244);
    glVertex2f(5826.7203597528905, 556.8194323388794);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(6140, 460);
    glVertex2f(6460, 460);
    glVertex2f(6363.475179886204, 561.1231297968964);
    glVertex2f(6140, 560);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,69,0);
    glVertex2f(5093.92,349.82);
    glVertex2f(5124.289044905651, 398.2723966588142);
    glVertex2f(5199.44,405.64);
    glVertex2f(5186.938973109265, 353.9310915729397);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,69,0);
    glVertex2f(5093.92,349.82);
    glVertex2f(5124.289044905651, 398.2723966588142);
    glVertex2f(5199.44,405.64);
    glVertex2f(5186.938973109265, 353.9310915729397);
    glEnd();



    glBegin(GL_POLYGON);
    float xOffse = 5628.447849;
    float yOffse = 201.537978;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(58,42,42);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 110;
        float x = r * cos(a) + xOffse;
        float y = r * sin(a) + yOffse;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse1 = 6269.6778309;
    float yOffse1 = 197.77709898;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(58,42,42);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 110;
        float x = r * cos(a) + xOffse1;
        float y = r * sin(a) + yOffse1;
        glVertex2f(x, y);
    }
    glEnd();
    ///Car3

    glBegin(GL_POLYGON);
    glColor3ub(72,61,139);
    glVertex2f(947.0428113639814, 451.6248365450355);
    glVertex2f(1071.3318562696327, 649.89723320385);
    glVertex2f(1550.7907917064872, 696.9370190934517);
    glVertex2f(1747.0428113639814, 851.6248365450358);

    glVertex2f(2307.0276953708335, 849.638701564138);
    glVertex2f(2506.923727950773, 648.3859363420781);
    glVertex2f(2547.0428113639814, 451.6248365450355);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(25,25,112);
    glVertex2f(1247.0428113639814, 571.6248365450358);
    glVertex2f(1247.0428113639814, 631.6248365450358);
    glVertex2f(2407.042811363982, 631.6248365450358);
    glVertex2f(2407.042811363982, 571.6248365450358);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(5699.467346536245, 453.3389600528147);
    glVertex2f(6100, 460);
    glVertex2f(6099.405388074275, 559.6162018601244);
    glVertex2f(5826.7203597528905, 556.8194323388794);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(1773.763171116872, 808.4442688839151);
    glVertex2f(2046.4481994382563, 811.24103840516);
    glVertex2f(2047.0428113639814, 711.6248365450358);
    glVertex2f(1646.5101579002262, 704.9637965978504);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(2087.0428113639814, 811.6248365450356);
    glVertex2f(2087.0428113639814, 711.6248365450358);
    glVertex2f(2407.042811363982, 711.6248365450358);
    glVertex2f(2310.5179912501853, 812.7479663419319);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,69,0);
    glVertex2f(1033.94,590.25);
    glVertex2f(1133.9817844732465, 605.5559281179753);
    glVertex2f(1209.58,663.46);
    glVertex2f(1071.3318562696327, 649.89723320385);
    glEnd();

    /*
                          glBegin(GL_POLYGON);
        glColor3ub(255,255,0);
        glVertex2f(652.4771542747347, 537.7558770106245);
        glVertex2f(577.3683551668116, 571.5004099431702);
        glVertex2f(1000.8078168042335, 637.9009424878567);
        glVertex2f(1000, 600);
        glEnd(); */



    glBegin(GL_POLYGON);
    float xOffse24 = 1575.4906607;
    float yOffse24 = 453.16281518;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(58,42,42);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 110;
        float x = r * cos(a) + xOffse24;
        float y = r * sin(a) + yOffse24;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse25 =2216.72064216650469;
    float yOffse25 =449.40193547826468;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(58,42,42);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 110;
        float x = r * cos(a) + xOffse25;
        float y = r * sin(a) + yOffse25;
        glVertex2f(x, y);
    }
    glEnd();

    glPopMatrix();
}

void car4()
{




    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car2Position, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(154,205,50);
    glVertex2f(1372.2953533709908, 1644.0600093955359);
    glVertex2f(1400, 1800);
    glVertex2f(1663.3805342751932, 2037.9485634580199);
    glVertex2f(2161.6009067728846, 2037.85740833987);
    glVertex2f(2429.8027768061215, 1851.2489640392876);

    glVertex2f(2800, 1800);
    glVertex2f(2881.8125818515127, 1648.17209510585);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(1559.408713729074, 1781.3785346295706);
    glVertex2f(1559.3021045909081, 1821.972264853831);
    glVertex2f(2299.635274965655, 1821.972264853831);
    glVertex2f(2299.159081097376, 1782.7623772436114);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(1564.1298234268288, 1875.7561875149258);
    glVertex2f(1668.7668070936495, 1977.901814427775);
    glVertex2f(1865.5839906574315, 1975.4104576738032);
    glVertex2f(1864.2125575905222, 1872.406332072254);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(1934.8639834111648, 1982.141525368146);
    glVertex2f(1936.367205237136, 1870.903110246283);
    glVertex2f(2298.8503166336695, 1870.9664388819656);
    glVertex2f(2164.1936386531083, 1980.2916625889563);
    glEnd();






    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(2800, 1800);
    glVertex2f(2816.665,1769.07);
    glVertex2f(2744.130114410272, 1780.7489408321212);
    glVertex2f(2743.47,1807.82);
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse = 2395.9840203058416;
    float yOffse = 1646.7292091657137;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(58,42,42);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 110;
        float x = r * cos(a) + xOffse;
        float y = r * sin(a) + yOffse;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse1 =1751.6698980241429;
    float yOffse1 = 1646.1614273797625;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(58,42,42);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 110;
        float x = r * cos(a) + xOffse1;
        float y = r * sin(a) + yOffse1;
        glVertex2f(x, y);
    }
    glEnd();




    glPopMatrix();

}


void car5()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car3Position, 0.0f, 0.0f);


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(7289.3717752894545, 1428.62406927959);
    glVertex2f(7317.076421918464, 1584.5640598840541);
    glVertex2f(7580.456956193657, 1822.5126233420738);
    glVertex2f(8078.6773286913485, 1822.421468223924);
    glVertex2f(8346.879198724586, 1635.8130239233417);

    glVertex2f(8717.076421918464, 1584.5640598840541);
    glVertex2f(8798.889003769978, 1432.7361549899042);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(100,149,237);
    glVertex2f(7476.378526509372, 1606.536324737885);
    glVertex2f(7476.485135647538, 1565.9425945136247);
    glVertex2f(8216.23550301584, 1567.3264371276655);
    glVertex2f(8216.711696884118, 1606.536324737885);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(7481.206245345293, 1660.32024739898);
    glVertex2f(7585.843229012114, 1762.465874311829);
    glVertex2f(7782.660412575896, 1759.9745175578573);
    glVertex2f(7781.288979508986, 1656.970391956308);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(173,216,230);
    glVertex2f(7853.4436271556, 1655.467170130337);
    glVertex2f(7851.940405329628, 1766.7055852522);
    glVertex2f(8081.270060571572, 1764.8557224730105);
    glVertex2f(8215.926738552134, 1655.5304987660197);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,69,0);
    glVertex2f(8629.86,1596.63);
    glVertex2f(8656.688275813685, 1559.800424003672);
    glVertex2f(8736.95,1547.677);
    glVertex2f(8717.076421918464, 1584.5640598840541);
    glEnd();






    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(7780.18,1822.47);
    glVertex2f(7870.133,1822.455);
    glVertex2f(7870, 1860);
    glVertex2f(7780, 1860);
    glEnd();


    glBegin(GL_POLYGON);
    float xOffse26 = 8313.0604422243056;
    float yOffse26 =1431.2932690497678;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(58,42,42);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 110;
        float x = r * cos(a) + xOffse26;
        float y = r * sin(a) + yOffse26;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    float xOffse27 =7668.746319942606529;
    float yOffse27=1430.7254872638166625;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(58,42,42);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 110;
        float x = r * cos(a) + xOffse27;
        float y = r * sin(a) + yOffse27;
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();



}

void plane()
{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move5, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255,255,224);
    glVertex2f(5822.017119407064, 6513.02048653817);
    glVertex2f(6095.574619521543, 6711.514094748493);

    glVertex2f(7422.017119407064, 6713.02048653817);
    glVertex2f(7622.017119407065, 6513.02048653817);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(220,20,60);
    glVertex2f(6685.531,6712.18);
    glVertex2f(6822.017119407064, 6913.02048653817);
    glVertex2f(6970.967932530621, 6946.377945235436);
    glVertex2f(6860.43,6712.38);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(220,20,60);
    glVertex2f(6859.109,6513.02);
    glVertex2f(6978.308872478241, 6290.401295717223);
    glVertex2f(6822.017119407064, 6313.02048653817);
    glVertex2f(6679.45,6513.02);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(220,20,60);

    glVertex2f(7422.017119407064, 6713.02048653817);
    glVertex2f(7916.3096955694045, 6948.387400313036);
    glVertex2f(7622.017119407065, 6513.02048653817);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(7342.017119407064, 6645.7459717736365);
    glVertex2f(7437.162220437912, 6647.091675393936);
    glVertex2f(7437.3761338527665, 6592.982450111236);
    glVertex2f(7342.017119407064, 6593.02048653817);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(7342.017119407064, 6645.7459717736365);
    glVertex2f(7437.162220437912, 6647.091675393936);
    glVertex2f(7437.3761338527665, 6592.982450111236);
    glVertex2f(7342.017119407064, 6593.02048653817);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(7202.017119407064, 6645.7459717736365);
    glVertex2f(7297.162220437912, 6647.091675393936);
    glVertex2f(7297.376133852767, 6592.982450111236);
    glVertex2f(7202.017119407064, 6593.02048653817);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(7065.886841933281, 6646.003953275394);
    glVertex2f(7161.0319429641295, 6647.349656895694);
    glVertex2f(7161.245856378985, 6593.240431612994);
    glVertex2f(7065.886841933281, 6593.278468039928);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(6922.017119407064, 6645.7459717736365);
    glVertex2f(7017.162220437912, 6647.091675393936);
    glVertex2f(7017.376133852767, 6592.982450111236);
    glVertex2f(6922.017119407064, 6593.02048653817);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(6782.017119407064, 6645.7459717736365);
    glVertex2f(6877.162220437912, 6647.091675393936);
    glVertex2f(6877.376133852767, 6592.982450111236);
    glVertex2f(6782.017119407064, 6593.02048653817);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(6642.017119407064, 6645.7459717736365);
    glVertex2f(6737.162220437912, 6647.091675393936);
    glVertex2f(6737.376133852767, 6592.982450111236);
    glVertex2f(6642.017119407064, 6593.02048653817);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(6502.017119407064, 6645.7459717736365);
    glVertex2f(6597.162220437912, 6647.091675393936);
    glVertex2f(6597.376133852767, 6592.982450111236);
    glVertex2f(6502.017119407064, 6593.02048653817);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(6363.2798774504145, 6645.606389097113);
    glVertex2f(6458.424978481263, 6646.952092717413);
    glVertex2f(6458.6388918961175, 6592.842867434712);
    glVertex2f(6363.2798774504145, 6592.880903861646);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(6222.391218570182, 6645.29793716007);
    glVertex2f(6317.2365542281195, 6645.009653465051);
    glVertex2f(6317.668979770634, 6593.406872056448);
    glVertex2f(6172.017119407064, 6593.02048653817);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(6052.017119407064, 6593.02048653817);
    glVertex2f(6112.428083397673, 6644.6764520931);
    glVertex2f(6172.166286571862, 6644.836944784469);
    glVertex2f(6172.017119407064, 6593.02048653817);
    glEnd();







    glPopMatrix();




}



void lamppost()
{

    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(8316.745001803407, 2719.004378442951);
    glVertex2f(8466.745001803407, 2719.004378442951);
    glVertex2f(8466.745001803407, 3919.004378442951);
    glVertex2f(8316.745001803407, 3919.004378442951);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,215,0);
    glVertex2f(8216.745001803407, 3919.0043784429545);
    glVertex2f(8216.745001803407, 4119.004378442956);
    glVertex2f(8568.361781095084, 4118.921852021142);
    glVertex2f(8568.245879117118, 3917.943200239488);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(1080.0871483642036, 2733.2714884397656);
    glVertex2f(1230.0871483642059, 2733.2714884397656);
    glVertex2f(1228.708566820854, 3680.135875901328);
    glVertex2f(1080, 3680);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,215,0);
    glVertex2f(990, 3680);
    glVertex2f(990, 3870);
    glVertex2f(1327.4733791039844, 3867.6437452656373);
    glVertex2f(1326.6009425007921, 3679.6336572705577);
    glEnd();



}





void bird()
{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(5897.681280976709, 5847.966386030548);
    glVertex2f(5940.368372319254, 5815.951067523639);
    glVertex2f(5940.368372319254, 5815.951067523639);
    glVertex2f(6008.972626262631, 5873.883548631379);

    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(6021.168938074787, 5773.263976181094);
    glVertex2f(6050, 5750);
    glVertex2f(6050, 5750);
    glVertex2f(6093.4719160168215, 5795.353667066475);

    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(5943.829525695556, 5666.675531311423);
    glVertex2f(5975.207803521544, 5636.218783143926);
    glVertex2f(5975.207803521544, 5636.218783143926);
    glVertex2f(6048.385674394478, 5703.298498110783);

    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(6081.545919794066, 5648.2612408046225);
    glVertex2f(6104.668055247981, 5629.956216903606);
    glVertex2f(6104.668055247981, 5629.956216903606);
    glVertex2f(6142.241525360592, 5676.200487811436);

    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(6161.870738139406, 5753.214287938192);
    glVertex2f(6189.312439716757, 5730.3462032904);
    glVertex2f(6189.312439716757, 5730.3462032904);
    glVertex2f(6257.916693660133, 5805.048613139854);

    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(6119.527288552164, 5890.0309990885335);
    glVertex2f(6153.067146035592, 5858.015680581624);
    glVertex2f(6153.067146035592, 5858.015680581624);
    glVertex2f(6232.343172814604, 5915.9481616893645);

    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(5824.5074400458525, 5753.370008341182);
    glVertex2f(5870.343468289202, 5714.64686376039);
    glVertex2f(5870.343468289202, 5714.64686376039);
    glVertex2f(5964.79515385243, 5779.882945058532);

    glEnd();



    glPopMatrix();

}
void DayScene()
{
    glBegin(GL_POLYGON);
    glColor3ub(135,206,250);
    glVertex2f(0,0);
    glVertex2f(9555.1568,0);
    glVertex2f(9557.940909997464, 9000);
    glVertex2f(0,9000);
    glEnd();
    glBegin(GL_POLYGON);
    float xOffse33 =5208.716355970165;
    float yOffse33 =6409.6881097104477;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255,255,0);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 400;
        float x = r * cos(a) + xOffse33;
        float y = r * sin(a) + yOffse33;                                              //sun
        glVertex2f(x, y);
    }
    glEnd();

}
void NightScene()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,31);
    glVertex2f(0,0);
    glVertex2f(9555.1568,0);
    glVertex2f(9557.940909997464, 9000);
    glVertex2f(0,9000);
    glEnd();
    glBegin(GL_POLYGON);
    float xOffse33 =5208.716355970165;
    float yOffse33 =6409.6881097104477;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255,255,255);
        float pi = 3.1416;
        float a = (i * 2 * pi) / 300;
        float r = 400;
        float x = r * cos(a) + xOffse33;
        float y = r * sin(a) + yOffse33;                                              //sun
        glVertex2f(x, y);
    }
    glEnd();

    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(2034.55, 5220.34);
    glVertex2f(4561.29, 4840.87);
    glVertex2f(8124.37, 4635.22);
    glVertex2f(1323.11, 5331.55);
    glVertex2f(5644.99, 5105.41);
    glVertex2f(2890.32, 5280.72);
    glVertex2f(7520.47, 5355.18);
    glVertex2f(4035.76, 4742.94);
    glVertex2f(6288.11, 5382.09);
    glVertex2f(1742.93, 4655.11);
    glVertex2f(9153.24, 5401.64);
    glVertex2f(3410.77, 4987.12);
    glVertex2f(6571.30, 5300.14);
    glVertex2f(8315.99, 4809.43);
    glVertex2f(5134.55, 4894.29);
    glVertex2f(2684.90, 5241.61);
    glVertex2f(7851.38, 5080.32);
    glVertex2f(1078.32, 4517.23);
    glVertex2f(4872.77, 4982.91);
    glVertex2f(6962.34, 4621.19);
    glVertex2f(1345.23, 6211.56);
    glVertex2f(5478.67, 5894.33);
    glVertex2f(8321.12, 6789.01);
    glVertex2f(2712.98, 4356.45);
    glVertex2f(7123.55, 5098.22);
    glVertex2f(1987.64, 3524.01);
    glVertex2f(6344.77, 4105.19);
    glVertex2f(8455.34, 6011.76);
    glVertex2f(3562.49, 4829.11);
    glVertex2f(978.33, 5432.12);
    glVertex2f(6122.89, 6678.44);
    glVertex2f(5032.10, 7221.89);
    glVertex2f(4001.57, 5219.44);
    glVertex2f(2234.67, 4651.22);
    glVertex2f(7129.44, 6809.33);
    glVertex2f(5901.23, 3301.88);
    glVertex2f(8073.41, 4482.56);
    glVertex2f(3999.00, 6889.45);
    glVertex2f(1233.77, 5290.78);
    glVertex2f(8501.12, 5908.22);

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

void display()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    if (isDay)
    {
        DayScene();
    }
    else
    {
        NightScene();
    }
    //sky();
    // sun();
    cloud();
    ///  rain();
    bird();
    house4();
    house5();
    Building1();
    house2();
    house3();
    tree();
    tree2();
    plane();
    road();
    car();
    car4();
    car5();
    lamppost();
    if (isRaining)
    {
        raining();  // Call the function to draw rain
    }

    glFlush();
}


void update1(int value)
{
    if(isMoving)
    {
        car1Position-=car1Speed;
        if(car1Position<-6000)
        {
            car1Position=10000.0;
        }

    }
    glutPostRedisplay();
    glutTimerFunc(10, update1, 0);
}
void update2(int value)
{
    if(isMoving)
    {
        car2Position+=car2Speed;
        if(car2Position>10000)
        {
            car2Position=-6000.0f;
        }

    }
    glutPostRedisplay();
    glutTimerFunc(10, update2, 0);
}
void update3(int value)
{
    if(isMoving)
    {
        car3Position+=car3Speed;
        if(car3Position>10000)
        {
            car3Position=-8000.0f;
        }

    }
    glutPostRedisplay();
    glutTimerFunc(10, update3, 0);
}

void update4(int value)
{

    _move4 +=30.0f;
    if (_move4 > 10000)
    {
        _move4 = -8000.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update4, 0);
}


void update5(int value)
{

    _move5 -=40.0f;
    if (_move5 < -8000)
    {
        _move5 = 10000.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update5, 0);
}




void update6(int value)
{

    _move6 -= 7.50f;
    if (_move6 < -6000)
    {
        _move6 = 10000.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update6, 0);
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
        car1Speed+=5.0f ;
        car2Speed+=5.0f ;
        car3Speed+=5.0f;

    }
    if (button==GLUT_RIGHT_BUTTON)
    {
        car1Speed-=5.0f ;
        car2Speed-=5.0f ;
        car3Speed=-5.0f;
    }
    glutPostRedisplay();


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 700);
    glutCreateWindow("OpenGL Setup");
    gluOrtho2D(0, 9555, 0, 7017);
    glutDisplayFunc(display);
    glutTimerFunc(20, update1, 0);
    glutTimerFunc(20, update2, 0);
    glutTimerFunc(20, update3, 0);
    glutTimerFunc(20, update4, 0);
    glutTimerFunc(10, update5, 0);
    glutTimerFunc(10, update6, 0);
    glutTimerFunc(10, updateRain, 0);
    glutKeyboardFunc(handlekeypress);
    glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;
}


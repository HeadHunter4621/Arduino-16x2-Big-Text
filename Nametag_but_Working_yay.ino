#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte a[8] = { 
B11111, 
B11111, 
B11111, 
B11111, 
B11100, 
B11100, 
B11100, 
B11100 };

byte b[8] = { 
B11111,
B11111, 
B11111, 
B11111, 
B00111, 
B00111, 
B00111, 
B00111 };

byte c[8] = { 
B11100,
B11100,
B11100, 
B11100, 
B11100, 
B11100, 
B11100, 
B11100 };

byte d[8] = { 
B11111,
B11111,
B11111,
B11111,
B00000,
B00000, 
B00000, 
B00000 };

byte e[8] = { 
B11100, 
B11100, 
B11100,
B11100, 
B11111,
B11111, 
B11111, 
B11111 };

byte f[8] = { 
B00111,
B00111, 
B00111, 
B00111,
B11111, 
B11111, 
B11111, 
B11111 };

byte g[8] = { 
B00111, 
B00111, 
B00111, 
B00111, 
B00111, 
B00111, 
B00111, 
B00111 };

byte h[8] = { 
B00000, 
B00000, 
B00000, 
B00000, 
B11111, 
B11111, 
B11111, 
B11111 };

int letterSpace = 0;

int letterA[4] = {0, 1, 0, 1};
int letterB[4] = {4, " ", 2, 1};
int letterC[4] = {0, 6, 2, 7};
int letterD[4] = {4, 1, 4, 3};
int letterE[4] = {0, 3, 2, " "};
int letterF[4] = {0, 6, 0, 6};
int letterG[4] = {0, 6, 2, 3};
int letterH[4] = {2, 3, 0, 1};
int letterI[4] = {1, 0, 3, 2};
int letterJ[4] = {4, " ", 4, 3};
int letterK[4] = {2, 0, 0, 2};
int letterL[4] = {4, " ", 2, 7};
int letterM[4] = {1, 0, 4, 5};
int letterN[4] = {0, 1, 4, 5};
int letterO[4] = {0, 1, 2, 3};
int letterP[4] = {0, 1, 4, 6};
int letterQ[4] = {0, 1, 2, 2};
int letterR[4] = {0, 1, 4, 2};
int letterS[4] = {0, 6, 7, 3};
int letterT[4] = {1, 0, 5, 4};
int letterU[4] = {4, 5, 2, 3};
int letterV[4] = {4, 5, 1, 0};
int letterW[4] = {4, 5, 3, 2};
int letterX[4] = {2, 3, 3, 2};
int letterY[4] = {2, 3, 5, 4};
int letterZ[4] = {6, 1, 2, 7};

int spaceX = 0;
int spaceY = 0;
int letterNumber = 0;

void printBigA() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterA[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterA[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterA[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterA[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigB() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterB[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(" ");
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterB[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterB[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigC() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterC[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterC[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterC[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterC[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigD() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterD[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterD[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterD[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterD[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigE() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterE[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterE[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterE[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(" ");
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigF() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterF[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterF[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterF[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterF[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigG() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterG[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterG[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterG[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterG[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigH() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterH[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterH[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterH[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterH[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigI() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterI[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterI[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterI[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterI[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigJ() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterJ[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(" ");
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterJ[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterJ[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigK() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterK[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterK[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterK[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterK[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigL() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterL[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(" ");
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterL[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterL[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigM() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterM[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterM[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterM[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterM[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigN() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterN[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterN[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterN[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterN[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigO() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterO[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterO[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterO[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterO[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigP() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterP[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterP[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterP[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterP[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigQ() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterQ[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterQ[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterQ[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterQ[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigR() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterR[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterR[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterR[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterR[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigS() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterS[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterS[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterS[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterS[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigT() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterT[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterT[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterT[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterT[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigU() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterU[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterU[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterU[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterU[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigV() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterV[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterV[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterV[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterV[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigW() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterW[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterW[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterW[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterW[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigX() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterX[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterX[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterX[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterX[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigY() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterY[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterY[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterY[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterY[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};
void printBigZ() {
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterZ[0]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterZ[1]);
  spaceX ++;
  spaceY ++;
  spaceX = 0;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterZ[2]);
  spaceX ++;
  lcd.setCursor(letterNumber * 3 + spaceX, spaceY);
  lcd.write(letterZ[3]);
  letterNumber ++;
  spaceX = 0;
  spaceY = 0;
};

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);

  lcd.createChar(0, a);
  lcd.createChar(1, b);
  lcd.createChar(4, c);
  lcd.createChar(6, d);
  lcd.createChar(2, e);
  lcd.createChar(3, f);
  lcd.createChar(5, g);
  lcd.createChar(7, h);

  printBigH();
  printBigE();
  printBigL();
  printBigL();
  printBigO();

}

void loop() {}

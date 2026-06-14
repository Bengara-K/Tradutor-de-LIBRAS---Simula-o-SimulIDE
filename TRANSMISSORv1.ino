
int FLEX0 = A0;
int FLEX1 = A1;
int FLEX2 = A2;
int FLEX3 = A3;
int FLEX4 = A4;
int pinoX = A5;
int pinoY = A6;
int pinoZ = A7;
int dif = 2;

int val0 = 0;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int valX = 0;
int valY = 0;
int valZ = 0;

void setup() {
Serial.begin(9600);
pinMode(dif, INPUT);
}

void loop() {

val0 = analogRead(FLEX0);
val1 = analogRead(FLEX1);
val2 = analogRead(FLEX2);
val3 = analogRead(FLEX3);
val4 = analogRead(FLEX4);
valX = analogRead(pinoX);
valY = analogRead(pinoY);
valZ = analogRead(pinoZ);

bool A = ((val0==326)&&(val1==362)&&(val2==368)&&(val3==357)&&(val4==368));
bool B = ((val0==321)&&(val1==304)&&(val2==304)&&(val3==300)&&(val4==300));
bool C = ((val0==308)&&(val1==357)&&(val2==346)&&(val3==340)&&(val4==346));
bool D = ((val0==335)&&(val1==304)&&(val2==351)&&(val3==326)&&(val4==326));
bool E = ((val0==375)&&(val1==409)&&(val2==388)&&(val3==381)&&(val4==394));
bool F = ((val0==300)&&(val1==321)&&(val2==304)&&(val3==300)&&(val4==300));
bool G = ((val0==304)&&(val1==304)&&(val2==330)&&(val3==326)&&(val4==326));
bool H = ((val0==316)&&(val1==304)&&(val2==304)&&(val3==340)&&(val4==346));
bool I = ((val0==316)&&(val1==381)&&(val2==346)&&(val3==340)&&(val4==316));
bool J = ((val0==316)&&(val1==381)&&(val2==346)&&(val3==340)&&(val4==316));
bool K = ((val0==316)&&(val1==304)&&(val2==304)&&(val3==340)&&(val4==346));
bool L = ((val0==300)&&(val1==308)&&(val2==330)&&(val3==326)&&(val4==326));
bool M = ((val0==326)&&(val1==304)&&(val2==304)&&(val3==300)&&(val4==394));
bool N = ((val0==326)&&(val1==304)&&(val2==304)&&(val3==381)&&(val4==394));
bool O = ((val0==308)&&(val1==357)&&(val2==351)&&(val3==346)&&(val4==351));
bool P = ((val0==326)&&(val1==304)&&(val2==321)&&(val3==340)&&(val4==346));
bool Q = ((val0==304)&&(val1==304)&&(val2==340)&&(val3==335)&&(val4==351));
bool R = ((val0==316)&&(val1==300)&&(val2==304)&&(val3==340)&&(val4==346));
bool S = ((val0==362)&&(val1==381)&&(val2==368)&&(val3==362)&&(val4==368));
bool T = ((val0==308)&&(val1==321)&&(val2==304)&&(val3==300)&&(val4==300));
bool U = ((val0==316)&&(val1==300)&&(val2==300)&&(val3==340)&&(val4==346));
bool V = ((val0==316)&&(val1==300)&&(val2==300)&&(val3==340)&&(val4==346));
bool W = ((val0==326)&&(val1==300)&&(val2==304)&&(val3==300)&&(val4==346));
bool X = ((val0==316)&&(val1==316)&&(val2==321)&&(val3==316)&&(val4==316));
bool Y = ((val0==300)&&(val1==340)&&(val2==330)&&(val3==326)&&(val4==300));
bool Z = ((val0==335)&&(val1==304)&&(val2==351)&&(val3==326)&&(val4==326));
bool horizontal = (((valX>=302)&&(valX<=374))&&((valY>=255)&&(valY<=342)));
bool vertical = (((valX>=427)&&(valX<=470))&&((valY>=310)&&(valY<=411)));
bool rotacao = (((valZ>=352)&&(valZ<=415)));
bool aberto = (digitalRead(dif));


if(A){
Serial.println("A");}
if(B)
{Serial.println("B");}
 if(C && !rotacao)
{Serial.println("C");}
 if(C && rotacao)
{Serial.println("Ç");}
 if(D)
{Serial.println("D");}
 if(E)
{Serial.println("E");}
 if(F)
{Serial.println("F");}
 if(G)
{Serial.println("G");}
 if(H && rotacao && !horizontal)
{Serial.println("H");}
 if(I && !rotacao)
{Serial.println("I");}
 if(J && rotacao)
{Serial.println("J");}
 if(K && horizontal && !rotacao)
{Serial.println("K");}
 if(L)
{Serial.println("L");}
 if(M)
{Serial.println("M");}
 if(N)
{Serial.println("N");}
 if(O)
{Serial.println("O");}
 if(P)
{Serial.println("P");}
 if(Q)
{Serial.println("Q");}
 if(R)
{Serial.println("R");}
 if(S)
{Serial.println("S");}
 if(T)
{Serial.println("T");}
 if(U && !aberto)
{Serial.println("U");}
 if(V && aberto)
{Serial.println("V");}
 if(W)
{Serial.println("W");}
 if(X && horizontal)
{Serial.println("X");}
 if(Y)
{Serial.println("Y");}
 if(Z && vertical)
{Serial.println("Z");}
if(!A && !B && !C && !D && !E && !F && !G && !H && !I && !J && !K && !L && !M && !N && !O && !P && !Q && !R && !S && !T && !U && !V && !W && !X && !Y && !Z ) {
  Serial.println("?");
}


delay(2000);

}

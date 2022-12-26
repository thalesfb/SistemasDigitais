int delayTime = 1;
int charBreak = 2;
int flag=0;

#define Sensor_hall 2
#define LED1 10
#define LED2 9
#define LED3 8
#define LED4 7
#define LED5 6
#define LED6 5
#define LED7 4

void setup()
 { // put your setup code here, to run once: 
  pinMode(Sensor_hall,INPUT_PULLUP);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  attachInterrupt(0,int_on,FALLING); 
 }

//Maisculas
int A[] = {B0011111,B0101000,B1001000,B0101000,B0011111};
int B[] = {B1111111,B1001001,B1001001,B1001001,B0110110};
int C[] = {B0011100,B0100010,B1000001,B1000001,B1000001};
int D[] = {B1111111,B1000001,B1000001,B0100010,B0011100};
int E[] = {B1111111,B1001001,B1001001,B1001001,B1001001};
int F[] = {B1111111,B1001000,B1001000,B1001000,B1001000};
int G[] = {B0011111,B1000001,B1001001,B0001001,B0001111};
int H[] = {B1111111,B0001000,B0001000,B0001000,B1111111};
int I[] = {B0000000,B1000001,B1111111,B1000001,B0000000};
int J[] = {B1000001,B1000010,B1111110,B1000000,B1000000};
int K[] = {B1111111,B0001000,B0010100,B0100010,B1000001};
int L[] = {B1111111,B0000001,B0000001,B0000001,B0000001};
int M[] = {B1111111,B0110000,B0001000,B0110000,B1111111};
int N[] = {B1111111,B0110000,B0001000,B0000110,B1111111};
int O[] = {B0011100,B0100010,B1000001,B0100010,B0011100};
int P[] = {B1111111,B1001000,B1001000,B0110000,B0000000};
int Q[] = {B0011100,B0100010,B1000001,B0100010,B0011101};
int R[] = {B1111111,B1001000,B1001100,B0110010,B0000001};
int S[] = {B0000000,B0110001,B0110001,B1000110,B0000000};
int T[] = {B1000000,B1000000,B1111111,B1000000,B1000000};
int U[] = {B1111110,B0000001,B0000001,B0000001,B1111110};
int V[] = {B1111000,B0000110,B0000001,B0000110,B1111000};
int W[] = {B1111110,B0000001,B0000110,B0000001,B1111110};
int X[] = {B1000001,B0110110,B0011100,B0110110,B1000001};
int Y[] = {B1110000,B0001000,B0000111,B0001000,B1110000};
int Z[] = {B1000011,B1000101,B1001001,B1010001,B1100001};
//Minusculas
int a[] = {B0001100,B0010010,B0010010,B0001110,B0000001};
int b[] = {B0111111,B0010010,B0010010,B0001110,B0000001};
int c[] = {B0001110,B0010010,B0010010,B0010010,B0010010};
int d[] = {B0001110,B0010010,B0010010,B0010010,B1111111};
int e[] = {B0001110,B0010101,B0010101,B0010101,B0001001};
int f[] = {B0000000,B0000000,B0011111,B0010100,B0010000};
int g[] = {B0001000,B0010101,B0010101,B0010101,B0011110};
int h[] = {B0000000,B0011111,B0000100,B0000100,B0000011};
int i[] = {B0000000,B0000000,B0101110,B0000000,B0000000};
int j[] = {B0000000,B0000001,B0000001,B0010111,B0000000};
int k[] = {B0000000,B0011111,B0000100,B0001010,B0010001};
int l[] = {B0000000,B0000000,B0011111,B0000000,B0000000};
int m[] = {B0000111,B0000100,B0000110,B0000100,B0000111};
int n[] = {B0000000,B0000111,B0000100,B0000111,B0000000};
int o[] = {B0000000,B0000111,B0000101,B0000111,B0000000};
int p[] = {B0000000,B0001111,B0001010,B0001110,B0000000};
int q[] = {B0000000,B0001110,B0001010,B0001111,B0000000};
int r[] = {B0000000,B0001111,B0001000,B0001000,B0000000};
int s[] = {B0000000,B0001101,B0010101,B0010101,B0010010};
int t[] = {B0000000,B0001000,B0011111,B0001001,B0000000};
/*int u[] = {B0001100,B0010010,B0010010,B0001110,B0000001};
int v[] = {B0001100,B0010010,B0010010,B0001110,B0000001};
int w[] = {B0001100,B0010010,B0010010,B0001110,B0000001};
int x[] = {B0001100,B0010010,B0010010,B0001110,B0000001};
int y[] = {B0001100,B0010010,B0010010,B0001110,B0000001};
int z[] = {B0001100,B0010010,B0010010,B0001110,B0000001};*/

//Caracteres Especiais
int pontoFinal[] = {B0000000,B0000001,B0000000,B0000000,B0000000};
int exclamacao[] = {B0000000,B1111101,B0000000,B0000000,B0000000};
int interrogacao[] = {B0110000,B1000000,B1000101,B1001000,B0110000};
int hifen[] = {B0000000,B0001000,B00010000,B0001000,B0000000};
int plus[] = {B0000000,B0001000,B00111000,B0001000,B0000000};

void displayLine(int line){
int myline;
myline = line;
if (myline>=64) {digitalWrite(LED1, LOW); myline-=64;} else {digitalWrite(LED1, HIGH);}
if (myline>=32) {digitalWrite(LED2, LOW); myline-=32;} else {digitalWrite(LED2, HIGH);}
if (myline>=16) {digitalWrite(LED3, LOW); myline-=16;} else {digitalWrite(LED3, HIGH);}
if (myline>=8)  {digitalWrite(LED4, LOW); myline-=8;}  else {digitalWrite(LED4, HIGH);}
if (myline>=4)  {digitalWrite(LED5, LOW); myline-=4;}  else {digitalWrite(LED5, HIGH);}
if (myline>=2)  {digitalWrite(LED6, LOW); myline-=2;}  else {digitalWrite(LED6, HIGH);}
if (myline>=1)  {digitalWrite(LED7, LOW); myline-=1;}  else {digitalWrite(LED7, HIGH);}
}

void displayChar(char ch){
if (ch == 'a'){for (int var = 0; var <5; var++){displayLine(a[var]);delay(delayTime);}displayLine(0);}
if (ch == 'b'){for (int var = 0; var <5; var++){displayLine(b[var]);delay(delayTime);}displayLine(0);}
if (ch == 'c'){for (int var = 0; var <5; var++){displayLine(c[var]);delay(delayTime);}displayLine(0);}
if (ch == 'd'){for (int var = 0; var <5; var++){displayLine(d[var]);delay(delayTime);}displayLine(0);}
if (ch == 'e'){for (int var = 0; var <5; var++){displayLine(e[var]);delay(delayTime);}displayLine(0);}
if (ch == 'f'){for (int var = 0; var <5; var++){displayLine(f[var]);delay(delayTime);}displayLine(0);}
if (ch == 'g'){for (int var = 0; var <5; var++){displayLine(g[var]);delay(delayTime);}displayLine(0);}
if (ch == 'h'){for (int var = 0; var <5; var++){displayLine(h[var]);delay(delayTime);}displayLine(0);}
if (ch == 'i'){for (int var = 0; var <5; var++){displayLine(i[var]);delay(delayTime);}displayLine(0);}
if (ch == 'j'){for (int var = 0; var <5; var++){displayLine(j[var]);delay(delayTime);}displayLine(0);}
if (ch == 'k'){for (int var = 0; var <5; var++){displayLine(k[var]);delay(delayTime);}displayLine(0);}
if (ch == 'l'){for (int var = 0; var <5; var++){displayLine(l[var]);delay(delayTime);}displayLine(0);}
if (ch == 'm'){for (int var = 0; var <5; var++){displayLine(m[var]);delay(delayTime);}displayLine(0);}
if (ch == 'n'){for (int var = 0; var <5; var++){displayLine(n[var]);delay(delayTime);}displayLine(0);}
if (ch == 'o'){for (int var = 0; var <5; var++){displayLine(o[var]);delay(delayTime);}displayLine(0);}
if (ch == 'p'){for (int var = 0; var <5; var++){displayLine(p[var]);delay(delayTime);}displayLine(0);}
if (ch == 'q'){for (int var = 0; var <5; var++){displayLine(q[var]);delay(delayTime);}displayLine(0);}
if (ch == 'r'){for (int var = 0; var <5; var++){displayLine(r[var]);delay(delayTime);}displayLine(0);}
if (ch == 's'){for (int var = 0; var <5; var++){displayLine(s[var]);delay(delayTime);}displayLine(0);}
if (ch == 't'){for (int var = 0; var <5; var++){displayLine(t[var]);delay(delayTime);}displayLine(0);}
/*if (ch == 'u'){for (int var = 0; var <5; var++){displayLine(u[var]);delay(delayTime);}displayLine(0);}
if (ch == 'v'){for (int var = 0; var <5; var++){displayLine(v[var]);delay(delayTime);}displayLine(0);}
if (ch == 'w'){for (int var = 0; var <5; var++){displayLine(w[var]);delay(delayTime);}displayLine(0);}
if (ch == 'x'){for (int var = 0; var <5; var++){displayLine(x[var]);delay(delayTime);}displayLine(0);}
if (ch == 'y'){for (int var = 0; var <5; var++){displayLine(y[var]);delay(delayTime);}displayLine(0);}
if (ch == 'z'){for (int var = 0; var <5; var++){displayLine(z[var]);delay(delayTime);}displayLine(0);}
*/if (ch == 'A'){for (int var = 0; var <5; var++){displayLine(A[var]);delay(delayTime);}displayLine(0);}
if (ch == 'B'){for (int var = 0; var <5; var++){displayLine(B[var]);delay(delayTime);}displayLine(0);}
if (ch == 'C'){for (int var = 0; var <5; var++){displayLine(C[var]);delay(delayTime);}displayLine(0);}
if (ch == 'D'){for (int var = 0; var <5; var++){displayLine(D[var]);delay(delayTime);}displayLine(0);}
if (ch == 'E'){for (int var = 0; var <5; var++){displayLine(E[var]);delay(delayTime);}displayLine(0);}
if (ch == 'F'){for (int var = 0; var <5; var++){displayLine(F[var]);delay(delayTime);}displayLine(0);}
if (ch == 'G'){for (int var = 0; var <5; var++){displayLine(G[var]);delay(delayTime);}displayLine(0);}
if (ch == 'H'){for (int var = 0; var <5; var++){displayLine(H[var]);delay(delayTime);}displayLine(0);}
if (ch == 'I'){for (int var = 0; var <5; var++){displayLine(I[var]);delay(delayTime);}displayLine(0);}
if (ch == 'J'){for (int var = 0; var <5; var++){displayLine(J[var]);delay(delayTime);}displayLine(0);}
if (ch == 'K'){for (int var = 0; var <5; var++){displayLine(K[var]);delay(delayTime);}displayLine(0);}
if (ch == 'L'){for (int var = 0; var <5; var++){displayLine(L[var]);delay(delayTime);}displayLine(0);}
if (ch == 'M'){for (int var = 0; var <5; var++){displayLine(M[var]);delay(delayTime);}displayLine(0);}
if (ch == 'N'){for (int var = 0; var <5; var++){displayLine(N[var]);delay(delayTime);}displayLine(0);}
if (ch == 'O'){for (int var = 0; var <5; var++){displayLine(O[var]);delay(delayTime);}displayLine(0);}
if (ch == 'P'){for (int var = 0; var <5; var++){displayLine(P[var]);delay(delayTime);}displayLine(0);}
if (ch == 'Q'){for (int var = 0; var <5; var++){displayLine(Q[var]);delay(delayTime);}displayLine(0);}
if (ch == 'R'){for (int var = 0; var <5; var++){displayLine(R[var]);delay(delayTime);}displayLine(0);}
if (ch == 'S'){for (int var = 0; var <5; var++){displayLine(S[var]);delay(delayTime);}displayLine(0);}
if (ch == 'T'){for (int var = 0; var <5; var++){displayLine(T[var]);delay(delayTime);}displayLine(0);}
if (ch == 'U'){for (int var = 0; var <5; var++){displayLine(U[var]);delay(delayTime);}displayLine(0);}
if (ch == 'V'){for (int var = 0; var <5; var++){displayLine(V[var]);delay(delayTime);}displayLine(0);}
if (ch == 'W'){for (int var = 0; var <5; var++){displayLine(W[var]);delay(delayTime);}displayLine(0);}
if (ch == 'X'){for (int var = 0; var <5; var++){displayLine(X[var]);delay(delayTime);}displayLine(0);}
if (ch == 'Y'){for (int var = 0; var <5; var++){displayLine(Y[var]);delay(delayTime);}displayLine(0);}
if (ch == 'Z'){for (int var = 0; var <5; var++){displayLine(Z[var]);delay(delayTime);}displayLine(0);}
if (ch == '!'){for (int var = 0; var <5; var++){displayLine(exclamacao[var]);delay(delayTime);}displayLine(0);}
if (ch == '?'){for (int var = 0; var <5; var++){displayLine(interrogacao[var]);delay(delayTime);}displayLine(0);}
if (ch == '.'){for (int var = 0; var <5; var++){displayLine(pontoFinal[var]);delay(delayTime);}displayLine(0);}
if (ch == '-'){for (int var = 0; var <5; var++){displayLine(hifen[var]);delay(delayTime);}displayLine(0);}
if (ch == '+'){for (int var = 0; var <5; var++){displayLine(plus[var]);delay(delayTime);}displayLine(0);}
delay(charBreak);
}

void displayString(char* s){
  for (int i = 0; i<=strlen(s); i++){
  displayChar(s[i]);
  }
}

void int_on(){
 noInterrupts();
 flag=1;
}

void loop()
{
  delay(2);
  if(flag){
    displayString("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    delay(2);
    displayString("abcdefghijklmnopqrst");
    delay(2);
    displayString("?!.");
    flag=0;
    interrupts();
    }   
}


int rele_a  =  22;
int rele_b  =  23;
int rele_c  =  24;
int rele_d  =  25;
int rele_e  =  26;
int rele_f  =  27;
int rele_g  =  28;
int rele_h  =  29;
int rele_i  =  30;
int rele_j  = 31;
int rele_k  = 32;
int rele_l =  33;
int rele_m  = 34;
int rele_n  = 35;
int rele_o =  36;
int rele_p =  37;
int rele_q =  38;
int rele_r =  39;
int rele_s =  40;
int rele_t =  41;
int rele_u = 44; // rele que ativa o serial 4 e desativa o serial 1
int rele_v = 46; // rele que ativa o serial 5 e desativa o serial 2
int rele_x = 48; // rele que ativa o serial 6 e desativa o serial 3

void setup() {

  Serial.begin(9600);
  Serial1.begin(9600);
  Serial2.begin(9600);
  Serial3.begin(9600);
  pinMode (rele_a, OUTPUT);
  pinMode (rele_b, OUTPUT);
  pinMode (rele_c, OUTPUT);
  pinMode (rele_d, OUTPUT);
  pinMode (rele_e, OUTPUT);
  pinMode (rele_f, OUTPUT);
  pinMode (rele_g, OUTPUT);
  pinMode (rele_h, OUTPUT);
  pinMode (rele_i, OUTPUT);
  pinMode (rele_j, OUTPUT);
  pinMode (rele_k, OUTPUT);
  pinMode (rele_l, OUTPUT);
  pinMode (rele_m, OUTPUT);
  pinMode (rele_n, OUTPUT);
  pinMode (rele_o, OUTPUT);
  pinMode (rele_p, OUTPUT);
  pinMode (rele_q, OUTPUT);
  pinMode (rele_r, OUTPUT);
  pinMode (rele_s, OUTPUT);
  pinMode (rele_t, OUTPUT);
  pinMode (rele_u, OUTPUT);
  pinMode (rele_v, OUTPUT);
  pinMode (rele_x, OUTPUT);
  }

void loop() {
  
char leitura;
leitura = Serial.read();
                              
if (leitura == '1') // USE MODO CENTRAL (ATU-C)
  {
    digitalWrite(rele_k, HIGH);
  }
   else
   if (leitura == '2') // DESBILITA TODOS RELES (EXCETO RELE K)
  {
    digitalWrite(rele_a, LOW);
    digitalWrite(rele_b, LOW);
    digitalWrite(rele_c, LOW);
    digitalWrite(rele_d, LOW);
    digitalWrite(rele_e, LOW);
    digitalWrite(rele_f, LOW);
    digitalWrite(rele_g, LOW);
    digitalWrite(rele_h, LOW);
    digitalWrite(rele_i, LOW);
    digitalWrite(rele_j, LOW);
    digitalWrite(rele_l, LOW);
    digitalWrite(rele_m, LOW);
    digitalWrite(rele_n, LOW);
    digitalWrite(rele_o, LOW);
    digitalWrite(rele_p, LOW);
    digitalWrite(rele_q, LOW);
    digitalWrite(rele_r, LOW);
    digitalWrite(rele_s, LOW);
    digitalWrite(rele_t, LOW);
    digitalWrite(rele_u, LOW);
    digitalWrite(rele_v, LOW);
    digitalWrite(rele_x, LOW);
  }
   else
   if (leitura == '3') // DESBILITA TODOS RELES
  {
    digitalWrite(rele_a, LOW);
    digitalWrite(rele_b, LOW);
    digitalWrite(rele_c, LOW);
    digitalWrite(rele_d, LOW);
    digitalWrite(rele_e, LOW);
    digitalWrite(rele_f, LOW);
    digitalWrite(rele_g, LOW);
    digitalWrite(rele_h, LOW);
    digitalWrite(rele_i, LOW);
    digitalWrite(rele_j, LOW);
    digitalWrite(rele_k, LOW);
    digitalWrite(rele_l, LOW);
    digitalWrite(rele_m, LOW);
    digitalWrite(rele_n, LOW);
    digitalWrite(rele_o, LOW);
    digitalWrite(rele_p, LOW);
    digitalWrite(rele_q, LOW);
    digitalWrite(rele_r, LOW);
    digitalWrite(rele_s, LOW);
    digitalWrite(rele_t, LOW);
    digitalWrite(rele_u, LOW);
    digitalWrite(rele_v, LOW);
    digitalWrite(rele_x, LOW);
  }
   else
   if (leitura == 'f') // GRAU DE DESEQUILIBRIO GDMT, ADSL2 e ADSL2plus
  {
    digitalWrite(rele_m, HIGH);
    digitalWrite(rele_n, HIGH);
    
    digitalWrite(rele_a, LOW);
    digitalWrite(rele_b, LOW);
    digitalWrite(rele_c, LOW);
    digitalWrite(rele_d, LOW);
    digitalWrite(rele_e, LOW);
    digitalWrite(rele_f, LOW);
    digitalWrite(rele_g, LOW);
    digitalWrite(rele_h, LOW);
    digitalWrite(rele_i, LOW);
    digitalWrite(rele_j, LOW);
    digitalWrite(rele_k, LOW);
    digitalWrite(rele_l, LOW);
    digitalWrite(rele_o, LOW);
    digitalWrite(rele_p, LOW);
    digitalWrite(rele_q, LOW);
    digitalWrite(rele_r, LOW);
    digitalWrite(rele_s, LOW);
    digitalWrite(rele_t, LOW);
  }
   else
   if (leitura == 'g') // GRAU DE DESEQUILIBRIO GDMT, ADSL2 e ADSL2plus - CALIBRAR
  {
    digitalWrite(rele_e, HIGH);
  }
   else
   if (leitura == 'h') // GRAU DE DESEQUILIBRIO GDMT, ADSL2 e ADSL2plus - MEDIR
  {
    digitalWrite(rele_e, LOW);
    digitalWrite(rele_m, HIGH);
    digitalWrite(rele_n, HIGH);
    digitalWrite(rele_b, HIGH);
    digitalWrite(rele_c, HIGH);
    }
   else
   if (leitura == 'i') // TENSÃO LONGITUDINAL GDMT, ADSL2 e ADSL2plus
  {
    digitalWrite(rele_i, HIGH);
    digitalWrite(rele_o, HIGH);
  }
   else
   if (leitura == 'j') // RESISTÊNCIA ADSL2 e ADSL2plus
  {
    digitalWrite(rele_b, HIGH);
    digitalWrite(rele_p, HIGH);
    digitalWrite(rele_t, HIGH);
  }
    else
    if (leitura == 'k') // RESISTÊNCIA ADSL2 e ADSL2plus - DESCONECTA USE (PARA RECONHECTAR USE FUNÇÃO ACIMA CARACTER J)
  {
    digitalWrite(rele_b, LOW);
    digitalWrite(rele_p, HIGH);
    digitalWrite(rele_t, HIGH);
  }
    else
    if (leitura == 'l') // IMPEDÂNCIA ADSL2 e ADSL2plus - MEDIR V1
  {
    digitalWrite(rele_b, HIGH);
    digitalWrite(rele_d, HIGH);
    digitalWrite(rele_q, HIGH);
    digitalWrite(rele_s, HIGH);
  }
    else
    if (leitura == 'm') // IMPEDÂNCIA ADSL2 e ADSL2plus - MEDIR V2
  {
    digitalWrite(rele_q, LOW);
    digitalWrite(rele_b, HIGH);
    digitalWrite(rele_d, HIGH);
    digitalWrite(rele_s, HIGH);
  }
    else
    if (leitura == 'n') // POTÊNCIA ADSL2 e ADSL2plus
  {
    digitalWrite(rele_r, HIGH);
  }
    else
    if (leitura == 'o') // POTÊNCIA ADSL2 e ADSL2plus - MEDIR (DESCONECTAR AUXILIAR POR 3 SEGUNDOS)
  {
    digitalWrite(rele_r, HIGH);
    digitalWrite(rele_j, HIGH);
    delay(3000);
    digitalWrite(rele_j, LOW);
  }
  
  
  // COMUNICAÇÃO
  
  
    else
    if (leitura == 'p') // DESEMPENHO USE ATU-R e ATU-C MODO GDMT - CONDIÇÃO 1
  {
      digitalWrite(rele_l, HIGH);
      digitalWrite(rele_u, HIGH); // Rele u em nivel alto habilita COM 4 e desabilita COM 1
      delay (1000);
      Serial1.println("*RST");  //  Enviar comandos para configurar comprimento de 4600 pes, bitola 26 AWG e ruido ETSI B
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LOOP VARIABLE_26_AWG");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LINE 4600 ft");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT OFF");
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :QUIET");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :SHAPED :TYPE OFF");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :xtalkc :type ADSLB");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :xtalkc :level -43.0 dBm");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT ON");
      Serial1.println("*ESR?");
      delay(1000);
      digitalWrite(rele_u, LOW); // desabilita COM 4
  }
    else
    if (leitura == 'q') // DESEMPENHO USE ATU-R e ATU-C MODO GDMT - CONDIÇÃO 2 ou MODO GLite - CONDIÇÃO 2
  {
      digitalWrite(rele_l, HIGH); 
      digitalWrite(rele_u, HIGH); // Rele u em nivel alto habilita COM 4 e desabilita COM 1
      delay (1000);
      Serial1.println("*RST");  //  Enviar comandos para configurar comprimento de 13750 pes, bitola 26 AWG e ruido ETSI A
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LOOP VARIABLE_26_AWG");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LINE 13750 ft");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT OFF");
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :QUIET");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :SHAPED :TYPE 10-tone");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :SHAPED :LEVEL -79.2 dBm");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :xtalkc :type ADSLA");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :xtalkc :level -49.4 dBm");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT ON");
      Serial1.println("*ESR?");
      delay(1000);
      digitalWrite(rele_u, LOW); // desabilita COM 4
  }
    else
    if (leitura == 'r') // DESLIGA RUIDO e configura 5000 pes de comprimento
  {
      digitalWrite(rele_u, HIGH); // Rele u em nivel alto habilita COM 4 e desabilita COM 1
      delay (1000);  
      Serial1.println("*RST");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT OFF");
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LOOP VARIABLE_26_AWG");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LINE 5000 ft");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT OFF");
      Serial1.println("*ESR?");
      delay(1000);
      digitalWrite(rele_u, LOW); // desabilita COM 4
  }
    else
    if (leitura == 's') // DESEMPENHO USE ATU-R MODO GLite - CONDIÇÃO 1
  {
      digitalWrite(rele_l, HIGH);  
      digitalWrite(rele_u, HIGH); // Rele u em nivel alto habilita COM 4 (DLS400BR) e desabilita COM 1
      delay (1000);
      Serial1.println("*RST");  //  Enviar comandos para configurar comprimento de 9200, bitola 26 AWG e ruido ETSI A
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LOOP VARIABLE_26_AWG");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LINE 9200 ft");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT OFF");
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :QUIET");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :SHAPED :TYPE 10-tone");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :SHAPED :LEVEL -79.2 dBm");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :xtalkc :type ADSLA");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :xtalkc :level -49.4 dBm");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT ON");
      Serial1.println("*ESR?");
      delay(1000);
      digitalWrite(rele_u, LOW); // desabilita COM 4
  }
    else
    if (leitura == 't') // DESEMPENHO USE ATU-R MODO ANSI
  {
      digitalWrite(rele_u, HIGH); // Rele u em nivel alto habilita COM 4 (DLS400BR)e desabilita COM 1
      delay (1000);
      Serial1.println("*RST");  //  Enviar comandos para configurar comprimento 13750, bitola 26 AWG e ruido ANSI
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LOOP VARIABLE_26_AWG");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LINE 13750 ft");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT OFF");
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :QUIET");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :xtalka :type DSLNEXT");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :xtalka :level -53.8 dBm");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :pwrline :metallic :harmonic1 1");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :pwrline :metallic :harmonic2 2");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :pwrline :metallic :offset 0.0 dB");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEA :LOAD1 OFF");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEA :LOAD2 ON");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :LOAD1 OFF");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :LOAD2 ON");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :pwrline :longitudinal :level 50 Vrms");
      Serial1.println("*ESR?");
      Serial1.println(":sourceB :pwrline :frequency 60 Hz");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT ON");
      Serial1.println("*ESR?");
      delay(1000);
      digitalWrite(rele_u, LOW); // desabilita COM 4
  }
    else
    if (leitura == 'u') // PSD ATU-R e ATU-C
  {
      delay (1000);
      digitalWrite(rele_u, HIGH); // Rele u em nivel alto habilita COM 4 (DLS400BR) e desabilita COM 1
      delay (1000);
      Serial1.println("*RST");  //  Enviar comandos para configurar comprimento 5000 pes e bitola 26 AWG
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LOOP VARIABLE_26_AWG");
      Serial1.println("*ESR?");
      Serial1.println(":SET:CHAN:LINE 5000 ft");
      Serial1.println("*ESR?");
      Serial1.println(":SOURCEB :OUTPUT OFF");
      Serial1.println("*ESR?");
      Serial1.println("*ESR?");
      delay(1000);
      digitalWrite(rele_u, LOW); // desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:UPP:STAT OFF");
      Serial1.println("CALC:LIM2:LOW:STAT OFF");
}
 
  else
  if (leitura == '_') // MASCARA GDMT ATU-R
  {
      delay (500);  
      digitalWrite(rele_g, HIGH);
      digitalWrite(rele_l, HIGH);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'R_GDMT'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'R_GDMT'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
  }
  else
  if (leitura == '#') // MASCARA GLITE ATU-R
  {
      delay (500);
      digitalWrite(rele_g, HIGH);
      digitalWrite(rele_l, HIGH);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'R_GLITE'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'R_GLITE'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
  }  
  else
  if (leitura == '$') // MASCARA ADSL2 ATU-R
  {
      delay (500);
      digitalWrite(rele_g, HIGH);
      digitalWrite(rele_l, LOW);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'R_ADSL2'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'R_ADSL2'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
      delay (500);
      digitalWrite(rele_v, LOW); // Rele u em nivel baixo habilita COM 2 e desabilita COM 5
      delay (500);
      Serial2.print("\n");
      Serial2.print("\n");
      Serial2.print("\n");
      Serial2.print("admin\n");
      Serial2.print("admin\n");
      Serial2.print("enable\n");
      Serial2.print("admin\n");
      delay (500);
      Serial2.print("con int adsl 2/4\n");
      delay (500);
      Serial2.print("adsl profile albertini\n");
      delay (500);
      Serial2.print("ads tran\n");
      delay (500);
      Serial2.print("7\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("1\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      delay (500);  
  }  
  else
  if (leitura == '%') // MASCARA ADSL2plus
  {
      delay (500);
      digitalWrite(rele_g, HIGH);
      digitalWrite(rele_l, LOW);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'R_ADSL2+'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'R_ADSL2+'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
      delay (500);
      digitalWrite(rele_v, LOW); // Rele u em nivel baixo habilita COM 2 e desabilita COM 5
      delay (500);
      Serial2.print("\n");
      Serial2.print("\n");
      Serial2.print("\n");
      Serial2.print("admin\n");
      Serial2.print("admin\n");
      Serial2.print("enable\n");
      Serial2.print("admin\n");
      delay (500);
      Serial2.print("con int adsl 2/4\n");
      delay (500);
      Serial2.print("adsl profile albertini\n");
      delay (500);
      Serial2.print("ads tran\n");
      delay (500);
      Serial2.print("7\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("1\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      Serial2.print("0\n");
      delay (500);  
  }
  else
  if (leitura == 'e') // MASCARA GDMT ATU-C SOB e Não SOB
  {
      delay (500);  
      digitalWrite(rele_g, HIGH);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'C_GDMT'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'C_GDMT'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
    }
  else
  if (leitura == '!') // MASCARA G.Lite ATU-C SOB e Não SOB
  {
      delay (500);  
      digitalWrite(rele_g, HIGH);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'C_GLITE'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'C_GLITE'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
  }
  else
  if (leitura == '-') // MASCARA ADSL2 ATU-C SOB
  {
      delay (500);  
      digitalWrite(rele_g, HIGH);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'CS_ADSL2'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'CS_ADSL2'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
  }  
  else
  if (leitura == '(') // MASCARA ADSL2plus ATU-C SOB
  {
      delay (500);  
      digitalWrite(rele_g, HIGH);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'CS_ADSL2+'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'CS_ADSL2+'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
  }
  else
  if (leitura == ')') // MASCARA ADSL2 ATU-C Não SOB
  {
      delay (500);  
      digitalWrite(rele_g, HIGH);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'CN_ADSL2'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'CN_ADSL2'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
  }  
  else
  if (leitura == '+') // MASCARA ADSL2plus ATU-C Não SOB
  {
      delay (500);  
      digitalWrite(rele_g, HIGH);
      delay (500);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("CALC:LIM1:NAME 'CN_ADSL2+'");
      Serial1.println("CALC:LIM1:UPP:STAT ON");
      Serial1.println("CALC:LIM2:NAME 'CN_ADSL2+'");
      Serial1.println("CALC:LIM2:LOW:STAT ON");
  }  
  else
  if (leitura == 'x') // Faixa de frequência entre 1 a 4 kHz - ATU-R e ATU-C GDMT, G.Lite, ADSL2 e ADSL2+
  {
      digitalWrite(rele_h, LOW); // Coloca microfiltro
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 1kHz");
      Serial1.println("FREQ:STOP 4.5kHz");
      Serial1.println("BAND 100Hz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV -10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 4khz");
      Serial1.println("calc:mark2:x 1khz");
      Serial1.println("calc:mark1:x 2.75khz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      delay (500);  
  }
    else
    if (leitura == 'y') // Faixa de frequecia etre 8 a 15 kHz - ATU-R e ATU-C GDMT, G.Lite, ADSL2 e ADSL2+
  {
      digitalWrite(rele_h, HIGH); // Elimina microfiltro
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 7.5kHz");
      Serial1.println("FREQ:STOP 15.5kHz");
      Serial1.println("BAND 100Hz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV -25dBm");
      Serial1.println("INP:ATT 10 DB");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 15khz");
      Serial1.println("calc:mark2:x 8khz");
      Serial1.println("calc:mark1:x 11.5khz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      delay (500);
  }
   
    else
    if (leitura == 'v') // Acima de 20kHz GDMT, GLITE e ADSL2
  {
      digitalWrite(rele_h, HIGH);  // desabilita microfiltro
      digitalWrite(rele_u, LOW); // desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 11.04MHz");
      Serial1.println("BAND:AUTO OFF");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID:AUTO OFF");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 11Mhz");
      Serial1.println("calc:mark2:x 20.5khz");
      Serial1.println("calc:mark1:x 5.53Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      delay (500);
  }
  else
  if (leitura == 'c') // Acima de 20kHz ADSL2plus
  {
      delay (500);
      digitalWrite(rele_h, HIGH);
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 12MHz");
      Serial1.println("BAND:AUTO OFF");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID:AUTO OFF");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 11.5Mhz");
      Serial1.println("calc:mark2:x 20.5khz");
      Serial1.println("calc:mark1:x 6.01Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
  }
  
  // PRINTS
  
  
  // PRINTs GDMT
  
  
  else
  if (leitura == 'z') // Primeiro print
  {
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("INIT:CONT OFF");
      delay(1500); // tempo para aguardar a varredura
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GDMT_P1.BMP'");
      Serial1.println("HCOP:IMM");
      delay (500);
  }
      else
      if (leitura == 'w') // Segundo print
  {
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("INIT:CONT OFF");
      delay(1500); // tempo para aguardar a varredura
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GDMT_P2.BMP'");
      Serial1.println("HCOP:IMM");
      delay (500);
  }
      else
      if (leitura == '@')   // terceiro e quarto prints
  {
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 588kHz");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 580khz");
      Serial1.println("calc:mark2:x 25khz");
      Serial1.println("calc:mark1:x 304khz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      
      digitalWrite(rele_j, HIGH);
     
      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (2000);
      Serial1.println("INIT:CONT OFF");
      delay (500);
      
      digitalWrite(rele_j, LOW);
      
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GDMT_P3.BMP'");
      Serial1.println("HCOP:IMM");   

      delay (2000);
      
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 588kHz");
      Serial1.println("FREQ:STOP 11.04MHz");
      Serial1.println("calc:mark3:x 11Mhz");
      Serial1.println("calc:mark2:x 580khz");
      Serial1.println("calc:mark1:x 5.814Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");

      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (11000);
      Serial1.println("INIT:CONT OFF");
      delay (500);

      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GDMT_P4.BMP'");
      Serial1.println("HCOP:IMM");
      
      delay (1000);
  }
  
      else
      if (leitura == '*')   // terceiro print (ATU-C)
  {
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 11.04MHz");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 11Mhz");
      Serial1.println("calc:mark2:x 20.5khz");
      Serial1.println("calc:mark1:x 5.53Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      
      digitalWrite(rele_j, HIGH);
     
      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (3500);
      Serial1.println("INIT:CONT OFF");
      delay (500);
      
      digitalWrite(rele_j, LOW);
      
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GDMT_P3.BMP'");
      Serial1.println("HCOP:IMM");   
 
  }
 
  
  // PRINTs G.Lite
  
  
  
  else
  if (leitura == '4') // Primeiro print
  {
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("INIT:CONT OFF");
      delay(1500); // tempo para aguardar a varredura
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GLITE_P1.BMP'");
      Serial1.println("HCOP:IMM");
      delay (500);
  }
      else
      if (leitura == '5') // Segundo print
  {
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("INIT:CONT OFF");
      delay(1500); // tempo para aguardar a varredura
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GLITE_P2.BMP'");
      Serial1.println("HCOP:IMM");
      delay (500);
  }
      else
      if (leitura == '6')   // terceiro e quarto prints
  {
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 588kHz");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 580khz");
      Serial1.println("calc:mark2:x 25khz");
      Serial1.println("calc:mark1:x 304khz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      
      digitalWrite(rele_j, HIGH);
     
      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (2000);
      Serial1.println("INIT:CONT OFF");
      delay (500);
      
      digitalWrite(rele_j, LOW);
      
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GLITE_P3.BMP'");
      Serial1.println("HCOP:IMM");   

      delay (2000);
      
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 588kHz");
      Serial1.println("FREQ:STOP 11.04MHz");
      Serial1.println("calc:mark3:x 11Mhz");
      Serial1.println("calc:mark2:x 580khz");
      Serial1.println("calc:mark1:x 5.814Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");

      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (11000);
      Serial1.println("INIT:CONT OFF");
      delay (500);

      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GLITE_P4.BMP'");
      Serial1.println("HCOP:IMM");
      
      delay (1000);
  }
  
      else
      if (leitura == '&')   // terceiro print (ATU-C)
  {
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 11.04MHz");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 11Mhz");
      Serial1.println("calc:mark2:x 20.5khz");
      Serial1.println("calc:mark1:x 5.53Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      
      digitalWrite(rele_j, HIGH);
     
      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (3500);
      Serial1.println("INIT:CONT OFF");
      delay (500);
      
      digitalWrite(rele_j, LOW);
      
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_GLITE_P3.BMP'");
      Serial1.println("HCOP:IMM");   
 
  }
  
  // PRINTs ADSL2
  
  
  else
  if (leitura == '7') // Primeiro print
  {
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("INIT:CONT OFF");
      delay(1500); // tempo para aguardar a varredura
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2_P1.BMP'");
      Serial1.println("HCOP:IMM");
      delay (500);
  }
      else
      if (leitura == '8') // Segundo print
  {
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("INIT:CONT OFF");
      delay(1500); // tempo para aguardar a varredura
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2_P2.BMP'");
      Serial1.println("HCOP:IMM");
      delay (500);
  }
      else
      if (leitura == '9')   // terceiro e quarto prints
  {
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 588kHz");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 580khz");
      Serial1.println("calc:mark2:x 25khz");
      Serial1.println("calc:mark1:x 304khz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      
      digitalWrite(rele_j, HIGH);
     
      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (2000);
      Serial1.println("INIT:CONT OFF");
      delay (500);
      
      digitalWrite(rele_j, LOW);
      
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2_P3.BMP'");
      Serial1.println("HCOP:IMM");   

      delay (2000);
      
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 588kHz");
      Serial1.println("FREQ:STOP 11.04MHz");
      Serial1.println("calc:mark3:x 11Mhz");
      Serial1.println("calc:mark2:x 580khz");
      Serial1.println("calc:mark1:x 5.814Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");

      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (11000);
      Serial1.println("INIT:CONT OFF");
      delay (500);

      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2_P4.BMP'");
      Serial1.println("HCOP:IMM");
      
      delay (1000);
  }
  
      else
      if (leitura == ',')   // terceiro print (ATU-C)
  {
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 11.04MHz");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 11Mhz");
      Serial1.println("calc:mark2:x 20.5khz");
      Serial1.println("calc:mark1:x 5.53Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      
      digitalWrite(rele_j, HIGH);
     
      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (3500);
      Serial1.println("INIT:CONT OFF");
      delay (500);
      
      digitalWrite(rele_j, LOW);
      
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2_P3.BMP'");
      Serial1.println("HCOP:IMM");   
  
  }
  
  // PRINTs ADSL2plus
  
  else
  if (leitura == 'a') // Primeiro print
  {
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("INIT:CONT OFF");
      delay(1500); // tempo para aguardar a varredura
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2plus_P1.BMP'");
      Serial1.println("HCOP:IMM");
      delay (500);
  }
      else
      if (leitura == 'b') // Segundo print
  {
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("INIT:CONT OFF");
      delay(1500); // tempo para aguardar a varredura
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2plus_P2.BMP'");
      Serial1.println("HCOP:IMM");
      delay (500);
  }
      else
      if (leitura == 'd')   // terceiro e quarto prints
  {
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 2.67MHz");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 2.5Mhz");
      Serial1.println("calc:mark2:x 20.5khz");
      Serial1.println("calc:mark1:x 1.345hz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      
      digitalWrite(rele_j, HIGH);
     
      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (2000);
      Serial1.println("INIT:CONT OFF");
      delay (500);
      
      digitalWrite(rele_j, LOW);
      
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2plus_P3.BMP'");
      Serial1.println("HCOP:IMM");   

      delay (2000);
      
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 2.67MHz");
      Serial1.println("FREQ:STOP 12MHz");
      Serial1.println("calc:mark3:x 2.7Mhz");
      Serial1.println("calc:mark2:x 7Mhz");
      Serial1.println("calc:mark1:x 7.335Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");

      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (11000);
      Serial1.println("INIT:CONT OFF");
      delay (500);

      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2plus_P4.BMP'");
      Serial1.println("HCOP:IMM");
      
      delay (1000);
  }
  
      else
      if (leitura == '?')   // terceiro print (ATU-C)
  {
      digitalWrite(rele_u, LOW); // Rele u em nivel baixo habilita COM 1 e desabilita COM 4
      delay (500);
      Serial1.println("\n");
      Serial1.println("\r");
      delay (500);
      Serial1.println("SYST:DISP:UPD ON");
      Serial1.println("INIT:CONT ON");
      Serial1.println("FREQ:STAR 20kHz");
      Serial1.println("FREQ:STOP 11.04MHz");
      Serial1.println("BAND 10kHz");
      Serial1.println("BAND:VID 100Hz");
      Serial1.println("DISP:WIND:TRAC:Y:RLEV 10dBm");
      Serial1.println("INP:ATT:AUTO ON");
      Serial1.println("calc:mark4 off");
      Serial1.println("calc:mark3:x 11Mhz");
      Serial1.println("calc:mark2:x 20.5khz");
      Serial1.println("calc:mark1:x 5.53Mhz");
      Serial1.println("CALC:MARK1:FUNC:NOIS ON");
      
      digitalWrite(rele_j, HIGH);
     
      Serial1.println("INIT:CONT OFF");
      delay (500);
      Serial1.println("INIT:CONT ON");
      delay (3500);
      Serial1.println("INIT:CONT OFF");
      delay (500);
      
      digitalWrite(rele_j, LOW);
      
      Serial1.println("HCOP:CMAP:DEF3");
      Serial1.println("HCOP:DEST 'MMEM'");
      Serial1.println("MMEM:CDIR 'z:\'");
      Serial1.println("MMEM:NAME 'PSD_ADSL2plus_P3.BMP'");
      Serial1.println("HCOP:IMM");   
  
  }
  
  
  // DISPONIVEIS

}

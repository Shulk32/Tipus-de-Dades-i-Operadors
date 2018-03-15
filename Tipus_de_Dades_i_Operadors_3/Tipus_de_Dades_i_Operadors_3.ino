/******************************************************************* 
**                                                                **
**                            TITOL:                              **
**                                                                **
**                                                                **               
**  Nom: Adrian Navarro    oooO 
                          (....)     Oooo
                           ...(     (....)
                            ._)      )../
                                     (_/ 
                        Solo pasaba por aquí 
                              ¡Saludos!       Data:               **                                                                   
*******************************************************************/
//************************** INCLUDE *******************************


//************************* VARIEBLES ******************************
int a = 10;
int b = 5;
int h = 0;
//*************************** SETUP ********************************
void setup()              
{
Serial.begin(9600);     // set up Serial library at 9600 bps
   Serial.println("Vamoh a calcular la hipotenusa chunga");

   Serial.print("a = ");
   Serial.println(a = a);

   Serial.print("b = ");
   Serial.println(b = b);

   Serial.print("h = ");
   Serial.println(h = (sqrt((a*a)+(b*b))));
}

//*************************** LOOP *********************************
void loop()                     
{
  
}
//************************* FUNCIONES ******************************
//Calcula l'hipotenusa (h) partir d'una formula (podem cambiar el nombre de les lletres a i b i variará el resultat de la h

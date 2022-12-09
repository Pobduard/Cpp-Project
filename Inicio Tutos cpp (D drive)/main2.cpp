#include <iostream>
using namespace std;

// int main(){

/* Esto es mucho despues pero no importa, Operadores:
// ------------------------------------------------
// ---------------[Operadores]---------------
// ------------------------------------------------
*/


/* Los Operadores son:
+ =     Suma -----      a + b       11 + 5 = 16
- =     Resta -----     a - b       11 - 5 = 6
, * =   Multiplicacion  a * b       11 * 5 = 55
+ =     Division -----  a / b       5 / 2.0 = 2.5
+ =     Modulus         a % b       5 % 2 = 1      // Es el restante de la division, sirve por ejemplo para decir si un numero es par o impar al dividir por 2
++ =     Suma -----      a++         11++   = 11 + 1
-- =     Resta -----     a--         11--   = 11 - 1

Y su orden va como: Real Life PEMDAS
"Please Excuse My Dear Aunt Sally"
Parenthesis -> Exponents -> Multiply -> Division -> Adittion -> Substraccion

Programing Order:
Parenthesis -> Multiply/Divide -> Add & Susbtrac
*/


/* Operador Comma:
"  ,  "
Basicamente con este podemos hacer una secuencia de cosas en sucesion, guardando el resultado de lo anterior.
Entonces podemos por ejemplo crear diferentes variables del mismo tipo en la misma linea, e incluso darles valores:

int a = 10, b = 20, c = 39, d ; 

o hacer diferentes operaciones, qu se haran empezando de la izquierda

d = (a++ , b + a, b + c); 

La explicacion es que se suma 1 a A, siendo ahora 11, luego se le suma B, siendo 31, luego c, suendo 39
lo que resulta en d = 70
*/


/* Operador Condicional:
. ? =     Condicion 
Basicamente este operaciodr hace la condicion de una, y si es cierto que de X resultado que pongamos, si no que de Y, como un IF
pero mas corto y pequeño, desconosco si sirve fuera de numeros. va Asi

( [la comparacion/condicion] )  ?  [Si es Verdadero]  :  [Si es Falso])

entonces: 

int a = 1, b;
b = (a < 10) ? 2 : 5;

Valor de b? Es 2 (la 1ra fue verdadera proque 1 es menor a 10. entonces a b se le dio el valor del verdadero)*/


/* Los Operadores de Relacion (Verdadero o falso) son:
==      Igual a (Excatamente igual)         a == b
. !=    No Igual/Diferente de               a != b
>       Mayor que                           a > b
<       Menor que                           a < b
>=      Mayor o igual a                     a >= b
<=      Menor o igual a                     a <= b 
*/


/* Operadores Logicos (Los Condicionales/Comparacion Realmente, Cerdadero y Falso) son: 
&&      AND (Ambos Verdaderos)              a && b
||      OR (Alguna condicion Verdadera)     a || b
. !     NOT (No Verdadero / Falsa)          !a
*/


/* Operadores de Asignacion (Al momento de hacer el = )
=           Simple Asifnacion                                           a = 2
=+          Suma Ambos, luego iguala el de la izquierda al resultado    a = 2, b = 3 --> b =+ a  --> b = 5
-=          Resta Ambos, luego iguala el de la izquierda al resultado   a = 2, b = 3 --> b -= a -->  b = -1 
. *=          Multiplica Ambos, luego iguala el de la izquierda al resultado   a = 2, b = 3 --> b *= a -->  b = 6
/=          Divide el de la izquierda (Arriba) por el de abajo luego iguala a su resultado   a = 6, b = 3 --> b /= a -->  b = 2
*/


/* Escape Secuences 
       \' 	    single quote
       \" 	    double quote
       \? 	    question mark
       \\ 	    backslash
       \a 	    audible bell
       \b 	    backspace
       \f 	    form feed - new page
       \n 	    line feed - new line
       \r 	    carriage return
       \t 	    horizontal tab
       \v 	    vertical tab
*/


// ------------------------------------------------
// ---------------[Hello World]---------------
// ------------------------------------------------

// int main(){
//     cout << "Hello World" << endl;

//     return 0;
// }


// ------------------------------------------------
// ---------------[Basic Data Types]---------------
// ------------------------------------------------

// int main(){
// char alone_string = 'A';
// string is_a_phrase = "This is a Phrase";
// int whole_or_Real_Numbers = 2003;
// float Floating_Point_numbers = 2003.69;
// double Same_as:float_but_more_decimal_points = 2003.69420;

// bool Is_a_True_False_Question = true;
// return 0;
//}


// ----------------------------------------------------
// ---------------[Working With Strings]---------------
// ----------------------------------------------------

// int main(){
// string Phrase = "Giraffe Academy";
// cout << Phrase << endl;
// cout << Phrase[2] << endl;
// Phrase [0] = B
// cout << Phrase[2] << endl;

// cout << Phrase.find("ffe", 0) << endl;
// cout << Phrase.substring(8, 3) << endl;   
// //reemplaza o sustituye el string, empezando con el 1er parametro, y la longitud hacia adelante para que agarre

// El Index de c++ empieza en 0 al igual que Python
// return 0;
//}


// ----------------------------------------------------
// ---------------[Strings Functions]---------------
// ----------------------------------------------------

string first_name;
cout << "Enter Your First Name:";
getline(cin, first_name);


/* string.lenght == Devuelve el lenght/lo largo de un string (cuantos caracteres)*/
int Length = first_name.lenght();

/*string.empty == Devuelve true si un string esta vacio*/
if (first_name.empty()) {
    cout << "You didn't enter a name! >:(" << endl;
}
else {
    cout << "Welcome " << first_name << endl;
}

/*string.clear == Limpia un String, osea lo vacia */
first_name.clear();    cout << "Your name has been cleared" << endl;

/*string.append(string2) == Appends a string, osease lo añade al final*/
string user_name;
cout << "Enter Your User Name";
getline(cin, user_name);
cout << "Yoour email now is: " << user_name.append("gmail.com") << endl;

/*string1.at(x) == Returns a Character at a Given Index*/
string first1_name = Jaiber, middle1_name = Eduardo, last1_name = Arellano;
cout << "Your Name is Jaiber Eduardo Arellano, so your initials are: ";
cout << first1_name.at(0) << middle1_name.at(0) << last1_name.at(0) << endl;

/*string.substr(int x, int y) == Retrieve a portion of a string, following the given indexes*/
cout << "Hello: " << first1_name.substr(3, 5) << endl;

/*string.insert(int x, string2) == Inserts a string with the given index, moves the characters to the right of the inserted string*/
cout << "Your user name was: " << user_name << " But now is: " << user_name.insert(2, "XyZ") << endl;

/*string.find(string2) == Returns the index of a string2 (the startig point of it)*/
cout << "Found char "b" in the first1_name vaariable at position: " << first1_name.find("b") << endl; // no creo que funcione

/*string.erase(x, y) == erases a portion of a string*/
last1_name.erase(2, 5);
cout << "Shouldn't be \'Arellano\' Anymore: " << last1_name << endl;

// return 0;
// }


// ----------------------------------------------------
// ---------------[Working With Numbers]---------------
// ----------------------------------------------------

// int main(){
// cout << 5 + 7;   5 - 7;  5 * 7;  5/7; 5 % 7 << endl;
// cout << 5 + 7 - 7 * 5 / 7 % 7 << endl;
// //lo hace ipo DMAS, osea Division, Mulitplicacion, Adiccion, y Susbtraccion

// int wnum = 10;
// double dnum = 10.5;

// wnum++;
// cout << wnum << endl;

// wnum--;
// cout << wnum << endl;

// wnum*= 80;
// cout << wnum << endl;

// wnum*= 2;
// cout << wnum << endl;

// wnum/= 5;
// cout << wnum << endl;

// cout << 10/3 << endl;
// cout << 10.0/3 << endl;

// #include <cmath>
// cout << pow(3, 3) << endl;       //Power, osea potenciar, el 1ro al 2do
// cout << sqrt(36) << endl;        //queare Rout, osea raiz 
// cout << round(4.6) << endl;      //Round, osea redondear normal
// cout << ceil (5.6) << endl;      //ceeling, osea redondear pa arriba
// cout << floor(5.6) << endl;      //floor, osea redondear pa abajo
// cout << fmax(3, 10) << endl;     //Function Max, osea el numero mas grande
// cout << fmin(3, 10) << endl;     //Function Minus, osea el numero mas pequeño

// return 0;
//}



// ----------------------------------------------------
// ---------------[Integers Functions]---------------
// ----------------------------------------------------

#include <algorithm>
double x, y;
cout << "This program will retrieve the min of two numbers" << endl;
cout << "Enter number X (Not an Odd Number): ";
cin >> x;
cout << "Enther number Y (Please a decimal number): ";
cin >> y;

cout << "This program will retrieve the min of the two numbers" << endl;
double z = min(x, y);
cout << z;

cout << "This program will retrieve the max of the two numbers" << endl;
z = max(x, y);
cout << z;

cout << "This program will return x ^ y" << endl;
z = pow(x, y);
cout << z;

cout << "This program will Return the Squeare Root of a X" << endl;
z = sqrt(x);
cout << z;

cout << "This program will Return the Absolute Value of a #" << endl;
// Basicamente es su magnitud, osease que tan lejos esta X numero de 0, y regresa un numero positivo
z = abs(x);
cout << z;

cout << "This program will Round the Y number to the nearest whole integer" << endl;
z = round(y);
cout << z;

cout << "This program will Round the Y number UP" << endl;
z = celi(y);
cout << z;

cout << "This program will Round the Y number DOWN" << endl;
z = floor(y);
cout << z;
/**/



// --------------------------------------------------------
// ---------------[Getting Input from Users]---------------
// --------------------------------------------------------

// int main(){
// int age;
// cout << "Enter Yur age: ";
// cin >> age;

// cout << "You are" << age << "Yers Old"
// //For strings is different

// string name;
// cout << "Enter Yur name: ";
// getline(cin, name);

// cout << "You are supposed to be" << name << ", Welcome" << name << "!!!"

// //Curioso para saber, el "cin" en si es el "command prompt" que da, ya luego con lo demas lo guardamos en otros lados

// return 0;
//}


// --------------------------------------------------------
// ---------------[Building a Calculator]------------------
// --------------------------------------------------------

// int main(){
// double num_1, num_2;
// //si las variables son del mismo typo, las podemos "asignar/declarar" en la misma linea, ya que nos les estamos dando valor aun

// cout << "enter First number: ";
// cin >> num_1;
// cout << "enter Second number: ";
// cin >> num_2;

// cout << num_1 + num_2;

// return 0;
//}


// --------------------------------------------------------
// ---------------[Building a Mad Libs Game]---------------
// --------------------------------------------------------

// int main(){
// string color, Plural_Noun, Celebrity

// cout << "Enter a Color: ";
// getline(cin, color);
// cout << "Enter a Plural Noun: ";
// getline(cin, Plural_Noun);
// cout << "Enter a Celebrity: ";
// getline(cin, Celebrity);

// cout << "Rose are " << color << endl;
// cout << Plural_Noun << " are blue" << endl;
// cout << "I Love " << Celebrity << endl;

// return 0;
//}


// --------------------------------------------------------
// ------------------------[Arrays]------------------------
// --------------------------------------------------------

/* Para crear un array, se coloca el tipo de sus valores, luego el nombre, seguido de un "[]" para indicar que es un array, y los elementos se colcan en un "{} ", ejemplo:
string array1[] = {"Elemtno1", "elemento2"};
problema? en C++ TODOS los elementos del array deben ser del mismo tipo o dara error */


// int main(){
// int lucky_Numbers[] == {4, 8, 15, 16, 23, 42};

// cout << lucky_Numbers[0];

// lucky_Numbers[2] = 30
// cout << lucky_Numbers[2];

// // de antes podemos asignar la variable del array para que tenga X numero de valores, para posteriormente asignarlos

// int Lucky_nums[20];
// lucky_nums[5] = 70; 
// cout << lucky_nums[5];

// return 0;
// }


// --------------------------------------------------------
// ------------------------[Functions]---------------------
// --------------------------------------------------------

// // de por si el "main" ya es una funcion, para crear funciones en C++ tenemos que asignar que van a regresar, si no pensamos que regrese nada, usamos el "Void"

// void sayHi(){
//     cout << "Hello User "
// }

// void sayHi2(string name){
//     cout << "Hello " << name;
// }

// void sayHi3(string name, int age){
//     cout << "Hello " << name << "You are " << age << endl;
// }

// int main(){

// cout << "top" << endl;
// sayHi() << endl;
// cout << "Bo'oom" << endl;


// cout << "top" << endl;
// sayHi2("mike") << endl;
// cout << "Bo'oom" << endl;


// sayHi3("mike", 60);
// sayHi3("lukas", 20);
// sayHi3("Selen", 19);

// return 0;
// }

// // curioso de saber, en c++ podemos poner las funciones al fuinal/luego del main, siempre y cuando las hallamos declarado arriba del main 1ro, osea podemos declarar, y al final poner su funcionalidad, ej:


// void sayHi3(string name, int age);

// int main(){
// sayHi3("mike", 60);
// sayHi3("lukas", 20);
// sayHi3("Selen", 19);

// return 0;
// }

// void sayHi3(string name, int age){


//     cout << "Hello " << name << "You are " << age << endl;
// }


// --------------------------------------------------------
// ------------------------[Return Statement]---------------------
// --------------------------------------------------------

// // para el return, y crear funciones en general, 1ro debemos declarar de que typo sera la info que regresemos, en lo anterior se uso "void" porque no regresaria nada, pero en general serian typos como "double", "string", "int", "char", "arrays", "bool" etc

// double cube(double num){
//     double result = num * num * num;

//     return result;
// }

// // otra forma 
// // double cube(double num){
// //     return num * num * num;
// // }

// int main(){
// cout << cube(2.0) << endl;

// double answer = cube(5.0);
// cout << answer << endl;

// return 0;
// }

// // cuando c++ llega al "return" en una funcion, hast ahi llega, si hay algo mas despues no sera ejecutado, similar al "break" en python, mas no estory seguro de si el return de ahi tambien lo hace o nop


// --------------------------------------------------------
// ------------------------[If Statements]-----------------
// --------------------------------------------------------

// int main(){

// bool isMale = true;
// bool isTall = true;

// if(isMale){
//     cout << "You are a Male";
// } else {
//     cout << "Yore gay, probably";
// }

// // el "and" en c++ es " && "
// if(isMale && isTall){
//     cout << "You are a High king";
// } else {
//     cout << "Yore a short gay, probably";
// }

// // el "or" en c++ es " || "
// if(isMale || isTall){
//     cout << "You are a High king";
// } else {
//     cout << "Yore a short gay, probably";
// }

// bool isMale = false;
// bool isTall = false;

// // el "elif" en c++ es " else if ", asi como el "Not" es " ! "
// if(isMale || isTall){
//     cout << "You are a High king";
// } else if(isMale && !isTall){
//     cout << "Youre a short king buddy"
// } else if(!isMale && isTall){
//     cout << "Mika Melatika says: ¿¡Mommy!? "
// }

// return 0;
// }

// --------------------------------------------------------
// ----------------[More if Statemens]---------------------
// --------------------------------------------------------

// int getMax(int num1, int num2);
// int getMax2(int num1, int num2, int num3);

// int main(){

// cout << getMax(2, 5) << endl;

// cout << getMax2(2, 50, 10) << endl;

// return 0;
// }



// int getMax(int num1, int num2){
//     int result;

//     if(num1 > num2){
//         result = num1;
//     } else {
//         result = num2;
//     }

//     return result;
// }

// int getMax2(int num1, int num2, int num3){
//     int result;

//     if (num1 >= num2 && num1 >= num3){
//         result = num1;
//     }   else if (num2 >= num1 && num2 >= num3){
//         result = num2;
//     }   else {
//         result = num3;
//     }

//     return result;
// }


//  " > " Mayor que
//  " < " Menor que
//  " == " Igual que/a
//   " ! "Not/no
//   " =! " Not equals/no igual a 


// --------------------------------------------------------
// ------------[Building a Better Calculator]--------------
// --------------------------------------------------------

// int main(){

// double num_1, num_2;
// char op;

// cout << "Enter First Number: ";
// cin >> num_1;
// cout << "Enter Firsr op: ";
// cin >> op;
// cout << "Enter Second Number: ";
// cin >> num_2;

// int result;

// if(op == '+'){
//     result = num_1 + num_2;
// } else if(op == '-'){
//         result = num_1 - num_2;
// } else if(op == '*'){
//         result = num_1 * num_2;
// } else if(op == '/'){
//         result = num_1 / num_2;
// } else {
//         cout << "Invalid Operator";
// }
// }

// cout << result;

// return 0;
// }

// --------------------------------------------------------
// ------------------------[Switch Statement]---------------------
// --------------------------------------------------------

/*
// el Switch en si es como una serie de ifs, que supuestamente se comparan mas rapido, se ponen los casos (luego de "case" se pone lo que debe ser verdad/igual)
// Y posteriormente lo que pasa si, es importante colocar el "break" al final de cada caso, de lo contrario seguira al siguiente caso automaticamente com si este tambien fuera verdad
*/

//  string getDayOfWeek(int dayNum)
//      string dayName;

//      switch(dayNum){
//          case 0:
//              dayName = "Sunday";
//              break;
//          case 1:
//              dayName = "Monday";
//              break;
//          case 2:
//              dayName = "Tuesday";
//              break;
//          case 3:
//              dayName = "Wednesday";
//              break;
//          case 4:
//              dayName = "Thursday";
//              break;
//          case 5:
//              dayName = "Friday";
//              break;
//          case 6:
//              dayName = "Saturday";
//              break;
//          default:
//              dayName = "Invalid Day Number";
//              // el Default es lo que se va a ejecutar de normal sin ninguno de los casos son ciertos, cada caso compara si es erdad, en esge caso si el dayNum es igual al "numero" del caso
//              // si es  erdad, se ejecuta lo siguiente y asi, un elif pero mas reducido y veloz
//      }

//      return dayName;
//  }

//  int main(){

//      cout << getDayOfWeek(2) << endl;

//  return 0;
//  }

// --------------------------------------------------------
// ------------------------[While Loop 2H:10mins]---------------------
// --------------------------------------------------------


// int main(){

// int index = 1;
// while(index <= 5){
//     cout << index << endl;
//     index++; // suma +1 por el "++"
// }

// return 0;
// }
// // son iguales que los if, en el sentido de que la condicion es lo de adentro

// // es importante destacar que en c++, para siquiera entrar en el while loop, la condicion debe ser cierta en un inicio, si no ni siquiera entra 1 vez
// // para ello estarian los do-while-loop
// // vamos a ver otro tipo de while, [Do while Loop], es como el while pero en reversa, osea, 1ro hacemos el codigo, y luego chekeamos la condicion

// int main(){

// int index = 7;
// do{    cout << index << endl;
//     index++; // suma +1 por el "++"
// } while(index <= 5);

// return 0;
// }
// //No es muy evidente, pero 1ro se ejecuto el codigo, al ver que el while era falso, entonces lo dejo hasta ahi, osea el codigo fue 1ro antes de la condicion, como se dijo arriba, sin embargo todo lo que se puede hacer con este, se ouede hacer con eñ, normal
// // [Otro ejemplo de do-while-loop(BroCode)]

int main() {
    string answer;

    do {
        cout << "You are playing The GAme" << endl;
        cout << "* Pew Pew *" << endl;
        cout << "Press q to exit The Game" << endl;
        getline(cin, answer);
        cout << "***********" << endl;
    } while(answer.at(0) != 'q' && answer.at(0) != 'Q');
}
// --------------------------------------------------------
// ------------------------[Guessing Game 2H:19mins]---------------------
// --------------------------------------------------------

// int main(){

//     int secretNum = 7;
//     int guess;
//     int tryes = 0;
//     bool outOfTryes = false;


//    while(secretNum != guess && !outOfTryes) {
//        // osea si outOfTryes es falsa
//     if (tryes < 3) {
//         cout << "Enter guess: ";
//         cin >> guess;
//         tryes++;
//     } else {
//         outOfTryes = true;
//     }
// }
//     if (outOfTryes) {
//         cout << "You lost!";
//     } else {
//         cout << "You win!";
//     }

// return 0;
// }

// --------------------------------------------------------
// ------------------------[For Loops]---------------------
// --------------------------------------------------------

// /* 
// en c++ el For loop, tiene 3 condiciones, la 1ra (que al ser c++ se tiene que declarar que es), la 2da que es la que se chequea si es verdad
// y la 3ra. que basicamente es algo que se ejecuta cada vez que se pasa por el loop, generalmente incrementar la 1ra
// y todas se separan por " ; " 
// la "Formula" del for es: 
// for (statement1; statement 2; statement3) {
//     //Do Stuff
// }

// Nota, no es necesario colocar el 3er Argumento, sin embargo se acostumbra para ser el "Guardia de el loop, pero si no se coloca se puede incremental al final del llop normal"
// */

// int main(){

// for(int i = 1; i <= 5; i++) {
//     cout << i << endl;
// }

// return 0;
// }

// // Se puede poner que suba de a mas a la vez
// int main(){

// for(int i = 10; i >= 0;) {
//     cout << i << endl;
//     i-=2
// }

// return 0;
// }

// /* [Para pasar por un array] */
// int main(){

// int nums[] = {3,4,7,1,8,5,9};

// for(int i = 0; i < 7; i++) {
//     cout << nums[i] << endl;
// }

// return 0;
// }


// // [Otro ejemplo de For Loops (BroCode)]

int main() {
    string word;

    cout << "Enter the Word to Spell: " << endl;
    cin >> word;

    for (int i=0; i < word.length(); i++) {
        cout << word.at(i) << " ";
    }
}

// --------------------------------------------------------
// ------------------------[Exponent Function ("To the power of")]---------------------
// --------------------------------------------------------

/*
//  interesante, si hay un comentario cerca/arriba de cualquier cosa, este sale en su explicacion, esa que se muestra al tener
// el mouse encima de la funcion o al usarla, y si son varias lineas juntas se muestran todas 
*/
// int power(int baseNumb, int powNumb) {
//     int result = 1;

//     for(int i = 0; i < powNumb; i++) {
//         result = result * baseNumb;
//     }
//     return result;
// }
// int main(){

// cout << power(2, 3);

// return 0;
// }

// --------------------------------------------------------
// ------------------------[2D Arrays & Nested Loops]---------------------
// --------------------------------------------------------

// int main(){
// //necesita 2 [] para ser 2d, y neceista tener el numero correcto de elementos para que no de error
// int numberGrid[3][2] = {
//     {1, 2},
//     {3, 4},
//     {5, 6}
// };

// cout << numberGrid[0][1] << endl;

// for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 2; j++) {
//         cout << numberGrid[i][j] << endl;
//     }
// }
// return 0;
// }


// // [Different Example (BroCode)]


int main() {
    char symbol;
    int width;
    int height;

    cout << "Enter a Symbol to use: ";
    cin >> symbol;

    cout << "Enter the Width: ";
    cin >> width;

    cout << "Enter the Height: ";
    cin >> height;

    for (int i = 0; i < width; i++){
        for (int j = 0; j < depth; j++) {
            cout << symbol;
        }
        cout << endl;
    }
} // // usualemnte luego de la i de index, en los nested se suele usar j, quizas porque sigue en el alfabeto


// --------------------------------------------------------
// ------------------------[Printf Funcion]---------------------
// --------------------------------------------------------

// // Lo mas importante de redordar de aqui, es que parece ser que siempre qye hay peos con alguna variable en C, podemos usar los pointers
// // para ir a esa variable y ser capaces de mostrarla y usarla, osea si en vez de colocar la variable, colocamos el "Reverso" de su pointer


// // El Printf es util cuando queremos mostrar informacion de cierta forma especifica

// // En si el printf(), es para mostrar algo con formato, osea colocar los simbolos de formato "%" en partes especificas del string, que luego se van a reemplazar por lo que deseemos
// // para hacerlo correctamente el formato tiene diferentes cosas que se tienen que poner luego de este, dependiendo del tipo de lo que se quiera mostrar
// // ejemplo string = %s, int = %d, double/float = %f, char = %c
// // solo que, esta funcion es de c, y gracias a ello no posee el String de forma basica/original/de fabrica, por ello si es un string, se tiene que colocar " [string].c_str() " para que no de errores
// // (Esta funcion le dice al comoilador que muestre el contenido del pointer de esa variable, ya que si no da error o mejor dicho muestra algo random)


string make = "Ford", model = "Mustang";
int year = 2021;
double price = 9999.000;
char for_sale = 'Y';

printf("Your car is made by %s", "Ford"); cout << endl; // si se hace de esa forma sin peos, solo separar el cout y el endl, supondo da errores si no
// printf("Your car is made by %s", model); cout << endl; // si se hace asi peos, seguir lo de arriba
printf("(Usando a String Variable) Your car is made by %s", make.c_str()); cout << endl;
printf("(Sin Usar) Your car a: %s %s", "Ford", "Mustang"); cout << endl; // se puede poner mas de 1, por ello es util
printf("(Usando unas Strings Variables) Your car a: %s %s", make.c_str(), model.c_str()); cout << endl;

printf("The YEar is: %d", year);            cout << endl;
printf("The Price is: %f", year);           cout << endl;
printf("Is it for sale?: %c", for_sale;     cout << endl;

// // Ahora el printf es util porque posee limmitantes que podemos poner, su estructura es realmente:
// // printf [Flags] [Width] [.Precision] [Length] specifier
// // tonces si queremos por ejemplo limitar la cantidad de decimales: 

printf("The Price (with 2 decimals) is: %.2f", year);           cout << endl;
printf("This precedes with blank spaces: %10s", "Ford");           cout << endl; // en realidad muestra 6 espacios, pero es porque cuenta tambien los de el string, osea 6 + foxrd = 10
printf("This precedes with zeros: %010s", "Ford");           cout << endl;
printf("Left Justify: %-10s%-10s", "Ford", "Mustang");           cout << endl; // asi lo alineamos/Justificamos a la izquierda, en vez de a la derecha

// --------------------------------------------------------
// ------------------------[Comments *Pepega*]---------------------
// --------------------------------------------------------

// int main(){

//     //ya lo dije arriba, pero si pones el comentario arriba de algo, lo vas a ver si su explicacion, pero este es de 1 linea 
//     cout << "Comments are Fun! *Pepega*";

//     /* encambio los de bloque son de esta forma, se abre asi
//     y luego lo cierras
//     asi */
// return 0;
// }

// --------------------------------------------------------
// ------------------------[Pointers 2:59:00 mins]---------------------
// --------------------------------------------------------

/*
// % Address-of Operator
// * de-reference Operator
*/

// int main(){

// int age =19;
// double gpa = 2.9;
// string name = "mike";

// /* 
// para sacar la direccionde memoria de una variable o llamado "Pointer", se le coloca
// un "amperstand" osease un " & " Antes de la Variable, asi: 
// */

// cout << &age << endl;

// cout << "Age: " << &age << endl;
// cout << "Gpa: " << &gpa << endl;
// cout << "Name: " << &name << endl;

// /* 
// tambien podemos crear una variable "Pointer" o con el pointer para guardarlo
// y para ello, hacemos:
// */

// int *pAge = &age;
// double *pGpa = &gpa;
// string *pName = &name;

// /*
// Basicamente colocar la estrellita esa antes de la variable, asi se indica que es un Pointer, y luego por
// costumbre se coloca p minuscula antes del nombre, se iguala a la direccion del poiner y listo.
// Se tiene que recordar que se debe colocar el tipo correcto de lo que sea que 
// ese pointer contiene, o dara errork si es un int, pos el poiner es int
// */

// cout << "Valor guardado en variable, desde el pointer " << pAge << endl;

// /*
// Tambien los podemos "des-referenciar", osea hacerlos al inverso, puede llegar a ser util
// para ello basicamente es poner otro * antes del propio pointer "* pGpa ", y nos dara el valor original, lo podemos hacer en la misma
// variable tambien " *&gpa " y nos dara el valor del pointer nuevamente, y asi
// */

// cout << "Deberia dar el valor original (Age) " << *pAge << endl;
// cout << "Ahora el pointer nuevamente (Age) " << &*pAge << endl;
// cout << "Ahora el pointer nuevamente (variable gpa) " << &gpa << endl;
// cout << "y ahora el valor original (variable gpa) " << *&gpa << endl;

// return 0;
// }

// --------------------------------------------------------
// ------------------------[Classes & Objects (3:14:00)]---------------------
// --------------------------------------------------------

// /*
// Al igual que en Python, basicamente las clases son para crear nuevos typos de objetos, lo cual puede ser super util
// ya que puede tener muchas cosas adentro (sean curiosidades, scrips, cualidades, funciones etc).
// Para ello le tenemos que dar atributos, y las clases se crean solo con los {}, para diferenciar de las funciones
// */
// class Book {
//     public:
// //Aqui se ponen los atributos
//         string title;
//         string author;
//         int pages;
// //Hay que recordar que esto es solo un blueprint, la plantilla, para usarla posteriormente, osea en verdad crearla
// };

// int main(){

//     Book book1;
//     book1.title = "Harry Potter";
//     book1.author = "JK Rowling";
//     book1.pages = 500;
// //Aqui ya hemos creado el objeto en si, como se ve es mas facil guardar las cosas asi, y crear diferentes objetos de esa forma
// // Y empezamos con el uso de el punto en si, para las funciones de objetos

//     cout << "Author of boom1 is: " << book1.author << endl;

//     Book book2;
//     book2.title = "Lord Of The Rings";
//     book2.author = "Tolkein";
//     book2.pages = 700;
//     cout << "Title of boom 2 is: " << book2.title << endl;
// // y tambien podemos cambiar las cosas durante el programa, igual que una variable normal
//     book2.title = "Hunger Games";
//     cout << "Nwe title of book 2 is: " << book2.title << endl;

//     /* */

//     return 0;
// }


// --------------------------------------------------------
// ------------------------[Overloaded Functions (BroCode)]---------------------
// --------------------------------------------------------

/* 
// El Concepto es muy simple, pero lo voy a explicar por si acaso ya que es algo a tener en cuenta, veremos algunos ejemplos mas adelnate en las
// classes y en los constructors, pero basicamente en C++ se puede tener varias funciones con EL MISMO NOMBRE, siempre y cuando TENGAN DIFERENTES
// PARAMETROS (osea l informacion que pide la funcion), no se porque es debido, pero si se hace de esa forma C++ simplemnete va a usar la funcion
// que necesite/posea la informacion correspondiente, ejemplo si una pide "Edad, Altura, Peso", y otra pide "Altura", si solo le damos la altura 
// entonces usara la 2da, a pesar de que posean el mismo nombre, de la misma forma si le damos "Altura, Edad y Peso" usaria la 1ra
*/
string bread = "Thick Crust", sauce = "Marinara", cheese = "Mozzarella", topping = "Pepperoni";

void bakePizza(string bread, string sauce, string cheese, string topping){
    cout << "Here is your (full): " << bread << " " << sauce << " " << cheese << " " << topping << " Pizza" << endl;
}

void bakePizza(string bread, string sauce, string cheese){
    cout << "Here is your (no toppings)): " << bread << " " << sauce << " " << cheese << " Pizza" << endl;
}

void bakePizza(string bread, string sauce, string topping){
    cout << "Here is your (no cheese moster)): " << bread << " " << sauce << " Pizza" << endl;
}

void bakePizza(string bread, string sauce, string topping){
    cout << "Here is your (Only_bread)): " << bread << " Pizza" << endl;
}

int main(){
// string bread = "Thick Crust", sauce = "Marinara", cheese = "Mozzarella", topping = "Pepperoni";

    cout << "Lest try bread, sauce & cheese" << endl;
    bakePizza(bread, sauce, cheese);
    cout << "Now Lest try bread, sauce cheese & Toppings" << endl;
    bakePizza(bread, sauce, cheese, topping);
    cout << "What about BREAD?" << endl;
    bakePizza(bread);
    cout << "Last but not least:" << endl;
    bakePizza(bread, sauce);
    return 0
}

// --------------------------------------------------------
// ------------------------[Constructors Functions (3:25:42)]---------------------
// --------------------------------------------------------

/*
Un Constructor es algo que sera llamado cada vez que creeemos un obejto de la clase, osease la usemos, imagino tipo el __Innit__ o __Self__ de python 
*/
// class Book {
//     public:
//         string title;
//         string author;
//         int pages;
//         Book(){ //Este es el Constructor
//             cout << "Creating Object" << endl;
//         }
// };

// class Book22 {
//     public:
//         string title;
//         string author;
//         int pages;
//         // Pero tambien les podemos poner parametros
//         Book22(string name){
//             cout << "Creating " << name << endl;
//         }

// };

// //Este es la Clase, ya bien con el Constructor a lo __Self__ o __Innit__
// class Book2232 {
//     public:
//         string title;
//         string author;
//         int pages;

//         Book2232(){
//             //Sin parametros por defecto, osea se activa si no se le pasa nada al llamarlo
//             title = "No title";
//             author = "No Author";
//             pages = 0;
//         };
//         Book2232(string aTitle, string aAuthor, int aPages){
//             // El Constructor bien hecho para que sea automatico la delcaracion de cada cosa
//             title = aTitle;
//             author = aAuthor;
//             pages = aPages;
//         }

// };

// int main(){

//     Book book1;
//     book1.title = "Harry Potter";
//     book1.author = "JK Rowling";
//     book1.pages = 500;
// cout << "Dedio haber aparecido el 'Creating Object' " << endl;

//     Book22 book2("Algun Nombre que pida");
//     book2.title = "Lord Of The Rings";
//     book2.author = "Tolkein";
//     book2.pages = 700;
// cout << "Debio haber aparecido el 'Algun Nombre que pida' " << endl;

// /* Como se nota, al usar las clases u crear sus objetos, toma mucho tiempo el poner el Xcosa.Ycosa para igualarlos, y toma mucho espacio/Lineas.
// Gracias a los Constructors, podemos hacerlo mucho mas rapido y automatico, ya que de por si podemos igualar las cosas y que se llenen solas al llamar a creacion del objeto de la clase.
// Como dije igual que el __Self__ de Python, o era __Innit__, no recuerdo. Veamos un ejemplo con el Book2232 clase*/

//     Book2232 book2232("Tensei Shitara Datta Ken", "Fuze", 1000);
//     Book2232 book2232_2("Takagi-San", "Yamamoto", 100);

// cout << "Created: " << book2232.title << endl;
// cout << "Author 2 is: " << book2232_2.author << endl;

// /* Como se puede apreciar, es muchisimo mas rapido de esta forma, automatico y tambien compacto.
// Aun podemos cambiar las cosas manualemnte si es necesairo de la forma anterior, pero no suele ser necesario

// Al igual que con el Innit creo era, podemos darle valores iniciales/Por default a una clase, y en C++ se hace con los contructors, 
// ya que pueden haber varios en la misma clase, otro ejemplo con el 2232 */

//     Book2232 book2232_3; //Se creo sin parametros dados, osea va al de por defecto

// cout << "Basic Title is: " << book2232_3.title << endl;

// return 0;
// }

// --------------------------------------------------------
// ------------------------[Object Functions (3:34:42)]---------------------
// --------------------------------------------------------

// // Estos son las funciones que podemos meter dentro de las clases, y los objetos las pueden usar como deseen
// // Una funcion se caracteriza/distingue por tener el valor de lo que debe devolver antes de su nombre, ya sea int/string/bool/etc ...
// //  o void si no devuelve nada, a diferencia del contructor que no tiene nada de esos valores, y supongo por ello se ejecuta de una

// class Student {
//     public:
//         string name;
//         string major;
//         double gpa;
//         Student (string aName, string aMajor, double aGpa) {
//             name = aName;
//             major = aMajor;
//             gpa = aGpa;
//         };
// // Hasta aqui todo normal, pero pasamos a intentar crear la funcion, en este caso para ver si alguien esta en el coso de Honor, digamos con 3.5 gpa

//         bool hasHonors(){
//             if(gpa >= 3.5) {
//                 return true;
//             } else {
//                 return false;
//             }
//         };
// };

// int main(){

//     Student student1("Jim", "Business", 2.4);
//     Student student2("Pam", "Art", 3.6);


//     cout << student1.hasHonors() <<  " --> si es un 0, es falso, si es un 1, es verdadero " << endl;
//     cout << student2.hasHonors() <<  " --> si es un 0, es falso, si es un 1, es verdadero " << endl;

// /* Como se ve, a pesar de que ambos objetos usan lo mismo, mismas variables y asi, sus valores siguen siendo diferentes dependiendo
// de cual objeto sea el llamado, lo que permite mucha mas flexibilidad, automatizacion y que sea mucho mas compacto. 
// Sin mencionra claro en el momento de hacer cambios, es mucho mas masivo con poco esfuerzo, porque puede cambiar todos a la vez*/
// return 0;
// }


/*
// --------------------------------------------------------
// ------------------------[Public & Private / Getters & Setters (3:41:43)]---------------------
// --------------------------------------------------------
*/


// /* Ok, hay MUCHO que explicar aqui, empecemos con public y con private: 
// > Public: Basicamente es algo que se pone en una clase (creo solo clases), para que el codigo public contenga/este en esa zona
// pueda ser accedido de forma "Publica" o global, osease cualquier cosa en cualquier parte del codigo puede acceder a este, sus variables,
// funciones, atributos, etc ... 

// Private: Es similar al public en el sentido que se pone en una clase, para darle una "Restriccion" al codigo que se encuentre dentro de private,
// siendo la restriccion, que solo el codigo dentro de la misma clase puede acceder al codigo dentro de private, sin embargo
// el resto del codigo en el programa no puede acceder a lo que se encuentre dentro private

// Para que sirve eso?, sencillo, si queremos poner algo que no pueda ser modificado, o que tenga algun tipo de restriccion ("Solo pueden ser XYZ cosas")
// hacerlo a traves del private es una buena forma, entonces para acceder a ello, podemos simplemente poner funciones en la clase  y obtener o 
// modificar el codigo dentro de private de esa forma, porque nuevamente, lo que se encuentre dentro de la clase si puede acceder al codigo en private
// Dichas funciones se conocen como "Getters" si es para obtener informacion del private, o "Setters" si es para modificar su informcion

// Ejemplo: 
//     En este vamos a hacer una clase de "Movie", en la cual va a haber una variable de "Rating" (de vista, de PG) que pondremos en private
//     para que no se pueda acceder a este de normal. Y a su vez poder "Limitar" que el Rating solo reciba ciertas opciones, siendo estas [
//     "G", "PG", "PG-13", "R"], y si recibe algo diferente a esas, poner ["NR"] en el Rating, ya que realmente, podriamos poner lo que nos de la gana
//     en Rating, como por ejemplo "Dog", asi que queremos evitarlo.

//     Y para poder modificar el Rating en si (darle valores, y/o cambiarlo) lo haremos a traves de un constructor (Ya que hay que recordar
//     que solo el codigo dentro de la propia clase puede acceder o modificar el de private, en este caso el Rating, por ello la necesidad del
//     contructor). Ademas pondremos una funcion en la clase para poder ver/verificar el valor del Rating y asi podero "cout".
// */

// class Movie {
//     private:
//         string movRating;
//     public:
//         string movTitle;
//         string movDirector;

//         Movie() {
//             movTitle = "No Title";
//             movDirector = "No Director";
//             movRating = "Not Rated";
//         };

//         Movie(string aMovTitle, string aMovDirector, string aMovRating) {
//                 aMovTitle = movTitle;
//                 aMovDirector = aMovDirector;
//                 if (aMovRating == "G" || aMovRating == "PG" || aMovRating == "PG-13" || aMovRating == "R") {
//                         aMovRating = movRating;
//                 } else {
//                     movRating = "NR";
//                 };
//         }; 
// Esta mal        // comentario de lo proffessional, esta funcion devuelve lo que diga el rating, y lo cout de una
// Para chekear        // void CheckRating(){
// A Futuro con       //     cout << "El Rating de " << movTitle << " es: " << movRating << endl;
// Mas conocimiento         // };
// };

// class MovieMike {
//         /* En el tutorial mike lo hizo de forma diferente, en vez de darle valor a rating a traves de un contructor, lo hizo con una funcion
//         la cual es llamada en el contructor, de esta forma: */
//     private:
//         string rating;
//     public:
//         string title;
//         string director;
//         MovieMike(string aTitle, string aDirector, string aRating) {
//             title = aTitle;
//             director = aDirector;
//             setRating(aRating);
//         }

//         void setRating(string aRating) {
//             if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R") {
//                 rating = aRating;
//             } else {
//                 rating = "NR";
//             }
//         }

//         string getRating() {
//             return rating;
//         }
// };

// int main(){
//     Movie Avengers("The Avengers", "Joss Whedon", "PG-13");
// Efectivamente es un error    // Movie.CheckRating(); //Deberia dar error, ya que use la clase para ello, no el objeto de clase
// didn't work, to check in the future    Avengers.CheckRating(); //Este si deberia de cout el rating
//     cout << endl;

//     MovieMike Avengers2("The Incredible Avengers", "Joss Whedon", "R");
//     cout << "The Rating of the movie " << Avengers2.title << " is: " << Avengers2.getRating() << endl;
//     cout << "Changed the Rating to Dog" << endl;
//     Avengers2.setRating("Dog");
//     cout << "The New Rating of the movie " << Avengers2.title << " is: " << Avengers2.getRating() << endl;

// return 0;
// }


/*
// --------------------------------------------------------
// ------------------------[Inheritance (3:54:04)]---------------------
// --------------------------------------------------------
*/ 


// /* Ya  sabes que es, Heredar todas las cosas de otra clase en una nueva para modificarla, añadirle mas, distinguirla o asi, pero en c++ es un poco diferente, ya que para indicar de donde lo hereda, se coloca:
//             [Clase que Hereda] : [Clase a Heredar] {}
// al momento de crear la clase, pero se sigue podiendo sobreescribir luego y todo eso al igual que con Python, ahora se puede herdar
// de mas de 1 clase? o se hereda todo de una 1ra clase, si se hace desde una 2da para 3ra? (osea varias generaciones de la misma, si se mantiene
// o si solo se sacan de la generacion anterior) [IDK, Probar] 

// Also como ya Sabes, la clase original se le suele llamar SuperClass, y las otras SubClasses*/


// // Va a ser la clase original
// class Chef {
//     public:
//         void makeChicken(){
//             cout << "The Chef Makes Chicken" << endl;
//         };
//         void makeSalad(){
//             cout << "The Chef Makes Salad" << endl;
//         };
//         void makeSpecialDish(){
//             cout << "The Chef Makes Special Dish" << endl;
//         };
// };

// // La clase que va a heredar, asi que lo colocamos de la siguiente forma: 
// /* ahora como se ve mas abajo, se coloco public tambien antes de "[Clase a Heredar]", no se si se puede sacar tambien de private, o si de ambas o que, pero
// es algo a tener en cuenta, y tambien con lo que experiemntar */
// class ItalianChef : public Chef {
// // aunque este vacia, ya es algo nuevo y se puede usar al igual que la clase original, pero en este caso le queremos colocar mas, y sobreescirbir, so:
//         public: //Recordar poner esto porque es nuevo, osea lequeremos agregar? debemos seguir las reglas normales tambien.
//             void makePasta(){
//                 cout << "The Chef Makes Pasta" << endl;
//             }
//             void makeSpecialDish(){
//                 cout << "The Chef Makes a Different Special Dish, so chimken Parm" << endl;
//             }
// };

// int main(){

//     Chef chef1;
//     chef1.makeChicken();

//     ItalianChef italianChef1;
//     italianChef1.makeChicken();
//     italianChef1.makePasta();

//     cout << " " << endl;
//     cout << "Ahora reemplazar el Special Dish" << endl;
//     cout << " " << endl;

// //    cout << "Special Dish original --> " << chef1.makeSpecialDish() << endl;
// //    cout << "Special Dish Sobreescirto --> " << italianChef1.makeSpecialDish() << endl;
// /* Asi estaba escrito originalmente por mi, pero de esa forma se caga porque es diferente (cout << cout es lo que sucede)
// y no se esperaba/es compatible, por ello da error, probemos en diferentes lienas a ver (sin el endl a ver si se unen en la misma)*/

//     // cout << "Special Dish original --> " ; chef1.makeSpecialDish() << endl;
//     // cout << "Special Dish Sobreescirto --> " ; italianChef1.makeSpecialDish() << endl;
// /* Se vuelve a cagar por ser endl << endl, probemos puro a ver*/

//     cout << "Special Dish original --> " ; chef1.makeSpecialDish();
//     cout << "Special Dish Sobreescirto --> " ; italianChef1.makeSpecialDish();
// /* Ora si, Nicesuuuu*/
// return 0;
// }


/*
// --------------------------------------------------------
// ------------------------[Pseudo-Random Numbers (BroCode), que si para juegos o asi, no seguridad]---------------------
// --------------------------------------------------------
*/ 


// Necesitamos 1ro incluir lo siguiente
#include <stdlib.h> // para la "srand" y "rand" functions
#include <time.h> // para usar el tiempo



int main(){

/* 1ro, para "Generar" un numero random, usaremos el tiempo como "Semilla", osea generara un numero diferente deacuerdo al tiempo, de la siguiente forma: 
(Hay mas formas de hacerlo, pero esta es una de las mas usadas o comunnmete vistas) */

    srand(time(NULL));

/* ahora vamos a asignar un numero random a una variable, usando el rand(), y luego de eso " % [Rango maximo de numeros random]" (ejemolo las caras de un cado)
recordar que en programacion se cuenta el 0, entonces si pones "6" nos dara un numero entre "1 y 5", pero podemos colocar "6 + 1" para que nos de
el numero de posibilidades que ponemos*/

    int number1 = rand() % 6 + 1;
    int number2 = rand() % 10 + 1;
    int number3 = rand() % 20 + 1;

    cout << "Para probar los numeros Random: " << number1 << " " << number2 << " " << number3 << endl;

// El chamo menciona aqui que aja, el esta simplemente demostrando pero es como una Slot machine y ais, y ya si sabemos usar algun "GUI Component" podriamos mostrar la imagen y asi 

return 0;
}


/*
// --------------------------------------------------------
// ------------------------[Guessing Game(BroCode)]---------------------
// --------------------------------------------------------
*/ 


/* Gracias a lo que vimos en el coso anterior, nos va a mostrar como hacer un juego simple*/
#include <algorithm>
#include <stdlib.h>
#include <time.h>


int main (){
    int number, response, score = 0;

    srand(time(NULL));

    number = rand() % 10 + 1;

    do {
        cout << "Enter Your 1st Guess (1 ~ 10): ";
        cin >> response;

        if (response > number) {
            cout << "That was too High!" << endl;
        } 
        else if (response < number) {
            cout << "That was too Low :(" << endl;
        }
        else {
            cout << "That was the number, Congrats! :D" << endl;
        }
        score++;
    } while(number != response);

    cout << "\nNumber is: *" << number << "* In a amout og guesses of: /" << score << "\ ";
    cout << endl;
    return 0;
};


// --------------------------------------------------------
// ------------------------[Arrays A Fondo (BroCode)]------------------------
// --------------------------------------------------------

/* Recordar que para crear un array, se coloca el tipo de sus valores, luego el nombre, seguido de un "[]" para indicar que es un array, y los elementos se colcan en un "{} ", ejemplo:
string array1[] = {"Elemtno1", "elemento2"};
problema? en C++ TODOS los elementos del array deben ser del mismo tipo o dara error */

// Algo curioso con los arrays en si, es que si le haces cout al array puro (al nombre, osea sin ningun "[]" muestra es la direccion del pointer del array)


int main(){
    string cars[] = { "Corvette", "Tesla", "Ferrari", "Audi" }

    cout << "Deberia dar la direccion del poiner del car: " << cars << endl;
// Como ya sabes para valores individuales se pone la posicion de dicho valor en el array
    cout << "Deberia dar el 1er carro" << cars[0] << endl;
    cout << "Deberia dar el 2do carro" << cars[1] << endl;
    cout << "Deberia dar el 3er carro" << cars[2] << endl;
    cout << "Deberia dar el 4to carro" << cars[3] << endl;
// Algo a saber, si se pude in index que evidentemente es mayor a los elementos que posseemos, osea no exoste, dara error, pero este error es llamado "Index Out Od Bounds"

// Para cambiar valores ya existentes es igual a python
    cars[3] = "Mustang";
    cout << "Deberia haber cambiado del 3er carro" << cars[3] << endl;

/* Para mostrar todos los valores del array la mejor forma es con un for-loop, pero se puede con un de-referencing de su pointer? idk 
Aqui en el for loop lo hicimos con el size, pero no se podria solo con el nombre del array[] mejor? idk*/
    for (int i = 0; i < size(cars) ; i++) {
        cout << cars[i] << endl;
    };

    int years[] = {2021, 2022, 2000, 1999, 1842};

    for (int i = 0; i < size(years) ; i++) {
    cout << years[i] << endl;
    };
}


/*
// --------------------------------------------------------
// ------------------------[Danamicly alocate an array after the compilation fase, using a pointer (BROCODE)]---------------------
// --------------------------------------------------------
*/ 


int main(){
    int number;

cout << "How many car do you have?: " << endl;
cin >> number;
/* Pareciera ser, que aqui hay algun error con el buffer al momento de hacer cin, si lo compilasemos asi, muestra el "Enter car number X" 2 veces, parece que tarda en poner el numero el cin
en la vaiable y por eso agarra un problema, para solucionarlo podemos limpiar el buffer, coloando " cin.ignore(); ", de la siguiente forma: */
cin.ignore();

/* Para poder hacer esto, alocar la memoria antes de que compile, vamos a crear un Pointer de strings(array), usando como el valor del array (numero de valores)
el number de mas arriba (que se supone es el numero de carros)
que es ese "NEW"???? */
    string* pCars = new string[number]; // Pointer

    for (int i = 0; i < number; i++ ){
        cout << "Enter your car #" << i + 1 << " " << endl; // se puso el +1, ya que si no se mostraria carro#0, y no queremos eso, con solo poer el +1 lo arreglamos y no modificamos el valor del index i
        getline(cin, pCars[i]); 
    }

cout << "\nHeres Your Garage!!!:\n";
cout << "------------------------" << endl;

    for (int i = 0; i < number; i++ ){
        cout << "Parking Spot #" << i + 1 << " "<< pCars[i] << endl; //Es un pointer, pero supongo como es el elemento del pointer quizas se pone bien?, yeah lo pone bien.
    }

/*  */

cout << endl;
return 0;
}


/*
// --------------------------------------------------------
// ------------------------[2D Arrays (BroCode)]---------------------
// --------------------------------------------------------
*/ 
/* Al ser un Array2D, necesitamos colocar mas [] al lado del nombre del array al momento de definirlo*/

int main(){
    /*          Rows   Columns */
    int numbers[3][4] = {
                        {0, 1, 2, 3}, 
                        {4, 5, 6, 7}, 
                        {8, 9, 10, 11}
    };

    cout << "Mostrar el elemento '6' de la tabla, y el '11': " << numbers[1][2] << " " << numbers[2][3] << endl;

    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            /* Ya teniamos las filas y columnas de antes, entonces por eso pusimos el numero en si, pero usualmente no lo 
            haria, servira igualar el tamaño del [X][Y] del Array con size(), a una variable? */
            cout << "Fila: " << row << " - Columna: " << column << " - Elemento: " << numbers[row][column] << " ";
        }
        cout << endl;
    }

/*  */
cout << endl;
return 0;
}


/*
// --------------------------------------------------------
// ------------------------["Virtual" Keyboard (Solo display)(BroCode)(Proyect)]---------------------
// --------------------------------------------------------
*/ 




int main(){
    // El keyboard que mostratemos
    char keyboard[4][10] = {
                        { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' },
                        { 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P' },
                        { 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';' },
                        { 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/' }
                        };

    for (int row = 0; row < 4; row++){
        for (int column = 0; column < 10; colum++) {
            cout << keyboard[row][column] << " ";
        }
        cout << endl;
    }
/* El Bro menciona como si un dia aprendemos a hacer labels y buttons, y reemplazamos 
esos caracteres qu tenemos ahorita con el loop, con botones, ya seria el keyboard y podria ser muy util*/

cout << endl;
return 0;
}


/*
// --------------------------------------------------------
// ------------------------[OPP (Object Oriented Programing)(BroCode)]---------------------
// --------------------------------------------------------
*/ 
/* El Object es como una nueva "clase/raza" de type, y la clase es el blueprint 
para ese objeto, de cuales funciones y caracteristicas deberia tener dicho
*/


class Human {
// Usualmente el public no esta, osea lo mas comun es que las cosas sean privadas
public:
    // Caracteristicas que todos los humanos deberian tener:
    string name;
    int age;
    double weight;

    // Que cosas puede hacer el humano?
    void eat() {
        cout << "The Person: " << this->name << " Has Eaten" << endl;
    }

    void drink() {
        cout << "The Person: " << this->name << " Has Drank" << endl;
    }

    void sleep() {
        cout << "The Person: " << this->name << " Has Slept" << endl;
    }
    /* Creo se nota, pero para usar los atributos especificos del objeto en especifico
    se debe colocar ese " this->[Atributo] ", 
    // // [Delete] // // de esa forma puede diferenciar si es un valor de la clase
    // // [Delete] // // o si es de fuera de esta, supongo, [buscar]
    ya que ese " this-> " reemplaza/zara el nombre que sea que se coloca/o al momento de crear el objeto de la clase*/
};

int main(){

// Crear el Objeto en si: [Nombre de la clase, para decir que es/que datatype es] [Nombre del objeto]
// Tambien se le puede llamar "Inicializar" el objeto, "Initialize/Instanciate"
    Human human1;
    Human human2;
    Human human3;
// Se creo el humano, y tiene sus variables ya creadas, pero no estan asignadas a nada aun, tons:
// Para mostrar los valores, se coloca " [Nombre del objeto].[Atributo] ", tanto para asignarlo como usarlo/llamarlo
    human1.name = "Rick";
    human1.age = 65;
    human1.weight = 55.5;

    human2.name = "Morty";
    human2.age = 16;
    human2.weight = 45.5;

    human3.name = "Jerry";
    human3.age = 45;
    human3.weight = 45.5;

    cout << "El Humano 1 es: " << human1.age << " Con una edad de: " << human1.name << endl;
    cout << "El Humano 2 es: " << human2.age << " Con una edad de: " << human2.name << endl;

// Para usar las funciones, se coloca " [Nombre del objeto].[Nombre de la funcion]() ", tons: 
    human1.drink();

/*  */
cout << endl;
return 0;
}


/*
// --------------------------------------------------------
// ------------------------[Constructors (BroCode)]---------------------
// --------------------------------------------------------
*/ 
/* Constructor = Special funcion that is automatically called when an object is instantiated.
It can be very useful for assigning values to variables */


class Human {
public:
    string name;
    int age;
    double weight;
    /* 
    //El contructor se pone usando el mismo nombre de la clase, y se diferencia de las funciones
    // porque no necesita/ponemos un return type, sin embargo al usar un contructor, "Se vuelve necesario"
    // LLamar al objeto con atributos, como si fuera una funcion con atributos, y evidentemente definir esos 
    atributos en el propio constructor, pero la cuestion es: 
    Un Constructor es UNA FUNCION MAS, osease, como se vio arriba, se puede tener diferentes funciones con el mismo nombre
    siempre y cuando posean/pidan diferentes parametros/atributos, esto quiere decir podemos tener un constructor "Custom" como haremos abajo
    y tambien podemos tener uno "Default", en caso de que se cree el objeto sin pasarle/enviarle los atributos
    a diferencia de omo si vamos a hacer ahorita:
    */
    Human(string name-t, int age-t, double weight-t) {
        // esa " -t " es solo para demostrar que son diferentes a los de la clase, los de la clase son los que les
        // estamos poniendo el " this-> ", los otros son del constructor, osea los que se pasan/envian al momento de crear la clase 
        this->name = name-t;
        this->age = age-t;
        this->weight = weight-t;
    }

    /* Algo a saber, tambien se puede solamente definir el constructor y asignarle su funcion en otro lado
    al igual que a las funciones, ya que nuevamente es una funcion mas, para ello se usa el: 
    " Scope Resolution Operator (  ::  ) "
    Asumo yo, al ver el uso de ese " :: " en la programacion de c normal, osea sin el "using namespace std"
    que ese " :: " es para inidacr que estas usando algo dentro de una clase quizas, y por ello el uso de eso aqui quizas?
    idk, el caso es que se usa: 
    " [Nombre de la clase]::[Nombre de la funcion, en este caso constructor](Atributos que se desean como funcion normal) "
    vamos a ver como es: */

    Human();
    // Constructor definido, vacio aproposito para cuando no se le pasen argumentos, vamos a definirlo afuera 
    // de la clase entonces
};

Human::Human() {
    cout << "Esta clase esta vacia, ya que no se le pasaron argumentos" << endl;
};

int main(){

    Human human1("Rick", 65, 80);
    Human human2("Morty", 16, 60);
    Human 

    cout << "Info de Human1: \n -----------------" << endl;
    cout << "Name: " << human1.name << endl;
    cout << "Age: " << human1.age << "yo" << endl;
    cout << "Weight: " << human1.weight << "kgs" << endl;
    cout << endl;

    cout << "Info de Human2: \n -----------------" << endl;
    cout << "Name: " << human2.name << endl;
    cout << "Age: " << human2.age << "yo" << endl;
    cout << "Weight: " << human2.weight << "kgs" << endl;
    cout << endl;

/* La Maypr ventaja de los Constructors es el hecho de que una vez esta hecho, podemos rehusarlo tsnto como queramos
y crear objetos de forma muy rapida y facil: */
    Human human3("Jerry", 45, 85);
// 1 linea, 3 Atributos, creado.

    cout << "Info de Human3: \n -----------------" << endl;
    cout << "Name: " << human3.name << endl;
    cout << "Age: " << human3.age << "yo" << endl;
    cout << "Weight: " << human3.weight << "kgs" << endl;
    cout << endl;
// y usado, seria mejor usar eso en una funcion no obstante, como se usa una funcion externa con los atributos de una clase?
/*  */

return 0;
}



/*
// --------------------------------------------------------
// ------------------------[Overloaded Constructors (BroCode)]---------------------
// --------------------------------------------------------
*/ 
/* Realmente ya lo explique arriba, osea al igual que en las funciones normales se puede tener varias funciones con el
mismo nombre siempre y cuando pidan diferentes combinaciones de Parametros/atributos, siendo llamadas "Overloaded Functions" 
y como un constructor es una funcion mas pues:
.\* Overloaded Constructors .*/

class Pizzas {
public:
    string bread;
    string sauce;
    string cheese;
    string toppings;
    // Solo definire los constructors, y les asignare su funcion debajo de la clase, para probar el uso de eso realmente

    tvPizza(string bread, string sauce, string cheese, string toppings);
    tvPizza(string bread, string sauce, string cheese);
    tvPizza(string bread, string sauce);
    tvPizza(string bread);
    tvPizza();

    // Asumo tambien se podria solo definir las funciones de la clase, y asignarles su funcion afuera de esta
    // de la misma forma que los constructors, no veo el porque se haria, pero asumo se puede, no se como se haria
    // con el return type, pero asumo se puede.

    void orderPizza() {
        cout << "Here is your: ";
        if (!bread.empty) {
            cout<< bread << "-";
        }
        if (!sauce.empty) {
            cout<< sauce << "-";
        }
        if (!cheese.empty) {
            cout<< cheese << "-"; 
        }
        if (!toppings.empty) {
            cout<< toppings << "-";
        }
        cout << " pizza" << endl;
    }
};

// Pondre los Constructors con la indentacion/espacio extra para que sean mas facil de reconocer
// y de trabajar con ellos, no veo porque alguien lo haria de esta forma y no definirlos y asignarlos de una
// pero en fin, es por probar en este caso
        Pizzas::tvPizza(string bread, string sauce, string cheese, string toppings) {
            this->bread = bread;
            this->sauce = sauce;
            this->cheese = cheese;
            this->toppings = toppings;
            cout << endl;
            cout << "This is a Full 4/4 TvPizza, Enjoy!!!" << endl;
        };

        Pizzas::tvPizza(string bread, string sauce, string cheese) {
            this->bread = bread;
            this->sauce = sauce;
            this->cheese = cheese;
            cout << endl;
            cout << "This is a Almost-Full 3/4 TvPizza, Enjoy Your Meal!!!" << endl;
        };

        Pizzas::tvPizza(string bread, string sauce,) {
            this->bread = bread;
            this->sauce = sauce;
            cout << endl;
            cout << "This is a 2/4 Kinda smol TvPizza, Sure you don't want more?!!!" << endl;
        };

        Pizzas::tvPizza(string bread) {
            this->bread = bread;
            cout << endl;
            cout << "This is a 1/4 TvPizza, dude the big ones are only 4500 pesos, sure you don't want one?" << endl;
        };

        Pizzas::tvPizza() {
            cout << endl;
            this->bread = "Default bread";
            this->sauce = "Default sauce";
            this->cheese = "Default cheese";
            this->toppings = "Default toppings";
            cout << "This is a 0/4 TvPizza, so it goes to the Default options" << endl;
        };


int main(){

    Pizza full_pizza("Thick Crust", "Red Sauce", "Mozzarella", "Chicken&Ham");
    Pizza almost_full_pizza("Thick Crust", "Red Sauce", "Mozzarella");
    Pizza basic_pizza("Thick Crust", "Red Sauce");
    Pizza more_like_flat_bread("Thick Crust");
    Pizza default_pizza("");
/* Pizzas Creadas, a ver la funcion: */

    full_pizza.orderPizza();
    almost_full_pizza.orderPizza();
    basic_pizza.orderPizza();
    more_like_flat_bread.orderPizza();
    default_pizza.orderPizza();

cout << endl;
return 0;
}


/*
// --------------------------------------------------------
// ------------------------[Manejar Archivos?]---------------------
// --------------------------------------------------------
*/ 


// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;

// fstream file_main;

// /* */

// int main(){
//     file_main.open("Archive.txt", ios::out);
//         if(!file_main) {
//             cout << "Archive wasnt created" << endl;
//         } else if(file_main){
//             cout << "Archive already Existed" << endl;
//         } else {
//             cout << "Archive didnt Existed, it was Created" << endl;
//         }

//     file_main << 123;
//     file_main.close();

//     file_main.open("Archive.txt", ios::in);

//     int data;
//     while(!file_main.eof()) {
//         file_main >> data;
//         cout << "Vamos a sumar 17 a ver " << endl;
//         data += 17;
//         cout << data << endl;
//     }
//     file_main.close();

//     return 0;
// }


/*
// --------------------------------------------------------
// ------------------------[Functions]---------------------
// --------------------------------------------------------
*/ 


// int main(){

/*  */

// return 0;
// }
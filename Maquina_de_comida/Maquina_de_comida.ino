/*
Fundación Kinal
Centro Educativo Técnico Labral Kinal 
Electrónica
Grado: Quinto
Sección: A
Curso: Taller de Electrónica Digital y Reparación de Computadoras I
Nombre: Juan David Tejada Peñuela
Carné: 2022454 
*/


#define PMI(pin) pinMode(pin,INPUT)
#define PULSADOR_SUMA 2  // pulsador conectado a entrada 2
#define PULSADOR_RESTA 3 // pulsador conectado a entrada 3

struct PRODUCTO{ //estructura
char nombre[15];
float precio;
int stock;
int reserva;
int lote;
};

int y = 0; //variable para while
int x;     // variable para las dos condiciones

PRODUCTO producto1 = {"Chocolate", 14.55, 25, 10, 325}; //datos del producto 1 (nombre, precio, stock, reserva, lote)
PRODUCTO producto2 = {"Paleta", 2.50, 15, 5, 30};       //datos del producto 1 (nombre, precio, stock, reserva, lote)
PRODUCTO producto3 = {"Dortitos", 3, 20, 5, 50};        //datos del producto 1 (nombre, precio, stock, reserva, lote)
PRODUCTO producto4 = {"Chicles", 1.75, 35, 15, 50};     //datos del producto 1 (nombre, precio, stock, reserva, lote)




void setup() {
Serial.begin(9600);
Serial.println("MAQUINA DE COMIDA");
Serial.println("");
PMI(2); //pin 2 INPUT
PMI(3); //pin 2 INPUT
}

void loop() {

if(digitalRead(PULSADOR_SUMA)==HIGH){  //cuando se presione este pulsador su valor sera HIGH
  y = y + 1; // suma un valor para cambiar de producto
  x = 1;     // valor para while
  delay(200); // antirebote
  }

if(digitalRead(PULSADOR_RESTA)==HIGH){ //cuando se presione este pulsador su valor sera HIGH
  y = y - 1;  // resta un valor para cambiar de producto
  x = 1;      // valor para while
  delay(200); // antirebote
}

if (y>4){
  y=1;
}

if (y<1) {
  y=4;
}

while(x==1) {

switch(y){

case (1): {
Serial.println("Producto 1");
Serial.print("Nombre del Producto: ");
Serial.println(producto1.nombre);
Serial.print("Precio: Q.");
Serial.println(producto1.precio);
Serial.print("Stock ");
Serial.println(producto1.stock);
Serial.print("Productos en Reserva: ");
Serial.println(producto1.reserva);
Serial.print("Precio de lote: Q.");
Serial.println(producto1.lote);
Serial.println("");
x = 0;
break;
}
case (2): {
Serial.println("Producto 2");
Serial.print("Nombre del Producto: ");
Serial.println(producto2.nombre);
Serial.print("Precio: Q.");
Serial.println(producto2.precio);
Serial.print("Stock ");
Serial.println(producto2.stock);
Serial.print("Productos en Reserva: ");
Serial.println(producto2.reserva);
Serial.print("Precio de lote: Q.");
Serial.println(producto2.lote);
Serial.println("");
x = 0;
break;

}
case (3): {
Serial.println("Producto 3");
Serial.print("Nombre del Producto: ");
Serial.println(producto3.nombre);
Serial.print("Precio: Q.");
Serial.println(producto3.precio);
Serial.print("Stock ");
Serial.println(producto3.stock);
Serial.print("Productos en Reserva: ");
Serial.println(producto3.reserva);
Serial.print("Precio de lote: Q.");
Serial.println(producto3.lote);
Serial.println("");
x = 0;
break;
}
case (4): {
Serial.println("Producto 4");
Serial.print("Nombre del Producto: ");
Serial.println(producto4.nombre);
Serial.print("Precio: Q.");
Serial.println(producto4.precio);
Serial.print("Stock ");
Serial.println(producto4.stock);
Serial.print("Productos en Reserva: ");
Serial.println(producto4.reserva);
Serial.print("Precio de lote: Q.");
Serial.println(producto4.lote);
Serial.println("");
x = 0;
break;
}
}

}
}

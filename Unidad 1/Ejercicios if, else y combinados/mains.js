//ejercicio 1 
var dinero= 12000
if (dinero> 12000){
    console.log ("compro un iphone 12")
} else{
    console.log ("no compro un iphone compro un samsung")
}
//ejercicio 2 
var pizzas = 1000
if (pizzas> 200){
    console.log ("compro 5 pizzas")
} else{
    console.log ("compro solo 1 pizza")
}
//ejerccio 3 
var depositar= 1500
if (depositar >1200){
    console.log ("deposito 1500")
} else {
    console.log ("no pude depositar F ):")
}
//ejercicio 4 
var edad= 18
if (edad >17){
    console.log ("si puedo entrar a un bar :)")
} else{
    console.log ("no pude entrar al bar me dejaron afuera ):")
}
//ejercicio 5 
var jugadores=26 
if (jugadores<26){
    console.log ("empezar partido de futbol estamos los 26 jugadores")
} else{
    console.log("hay que esperar a los jugadores no estamos completos")
}
//ejercicio 1 switch 
var nombre= "yael" 
var edad = 19 
switch(nombre){
    case"yael":
    console.log ("hola soy yael tengo 19 años mucho gusto :)");
    break;
}
//ejercicio 2 
var nombre= "alan" 
switch(nombre){
    case"alan":
    console.log ("Que onda soy alan y soy menor de edad")
    break;
}
//ejercicio 3 
var persona= "juan"
switch(persona){
    case"juan":
    console.log ("juan va a jugar futbol")
    break; 
}
//ejercicio 4
var persona= "diego"
var amiga= "judith"
switch (persona ){
    case"diego":
console.log ("diego invita a judith al cine")
break;
}
//ejercicio 5 
var persona= "saul" 
switch (persona){
    case"saul":
    console.log ("saul va a correr")
    break;
    }
// ejercicio 1 combinacion  
var persona= "panchito"
var edad= 18 
switch (persona){
    case"panchito":
    if(edad<12){
        console.log("panchito es mayor de edad");
        break;
    } else{
        console.log("panchito no es mayor de edad");
        break;
    }
}
///ejercicio 2 y 3
var persona="yael"
var comida= "pizza" 
var perrito= "maxito"
var accion= "pasear"
switch (persona){
    case"yael":
    if(comida=="chilaquiles"){
        console.log ("hola soy yael y mi comida favorita es la pizza :)");
        break; 
    } else {
        console.log("esa comida no es mi favorita");
        break;
    }
}
switch (perrito){
    case"maxito":
    if(accion=="pasear"){
        console.log ("me gusta salir a pasear");
        break;
    } else{
        console.log(" no sacame a pasear");
        break;    
    }
}
//ejercicio 4 y 5
var salir= "correr" 
var lugar= "parque"
var ir= "pasar por la novia"
var llevarla= "cine"
switch (salir){
    case"correr":
    if(lugar=="correr"){
        console.log("voy a correr")
        break;
    } else{
        console.log("NO yo si voy a correr");
        break;
    }
}
switch (ir){
    case"pasar por la novia":
    if(llevarla=="cine"){
        console.log("voy por ella y vemos una peli");
        break;
    } else{
        console.log("no llegue a tiempo ):");
        break;
    }
}
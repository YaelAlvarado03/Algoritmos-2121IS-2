const abecedario="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    var palabra = "";

numero=parseInt(prompt("Digita la cantidad de palabras"));

    if(numero!= 0){

    for(var a=1; a<=numero; a++){
        palabra="";
        for(var b=1; b <= numero; b++){

                var aleatorio = Math.round(Math.random() * abecedario.length);

                if(aleatorio == abecedario.length){

                    aleatorio--;

                    
                }

        palabra+=abecedario.substring(aleatorio,aleatorio+1);    
            }
        console.log("La palabra " + a + " es: " + palabra);
    }
}else{
            console.log("El numero que ingreso no es posible");
}
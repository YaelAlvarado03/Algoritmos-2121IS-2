var suma = 0;
    for(var i = 1; i <= 100; i++){
        if(i % 3 == 0){
            console.log(i);    
        }else{        
            suma = suma + i;
        } 
    }
    console.log("La suma de los restantes es: " + suma);
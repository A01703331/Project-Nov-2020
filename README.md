# Project-Nov-2020
Un proyecto relacionado a mi nueva semi-obsesión, PSO2

Es el año 2011, y SEGA está probando diferentes tipos de sorteo para el su juego que está por salir el siguiente año, Phantasy Star Online 2. Se están haciendo dieferentes pruebas y a un ingeniero le pidieron hacer que cada tipo de objeto distinto se le diera un valor para que se pudieran ordenar de manera ascendente y que este sorteo también use la rareza del objeto para poder ordenarlos.

Phantasy Star Online 2 (PSO2 para acortar), es un MMORPG que toma lugar en el espacio, en la flota espacial Oracle, fue lanzado en Japón en 2012, y recientemente se lanzó la versión global en el verano de 2020. Los jugadores pueden explorar diversos planetas. Para la cantidad de objetos que existen, el inventario los acomoda por default como mejor lo vea tomando principalmente el valor del objeto.

El fin de este programa es tomar los datos que el usuario introduzca para poder organizarlos de la forma que se estableció, por valor o rareza de manera ascendente. Hay un límite de 50 objetos, pero el usuario puede elegir cuando dejar de crear objetos para poder hacer las pruebas de manera adecuada. Sin embargo, debido a lo restringido que es el juego a veces, el tipo de objeto debe de ser especificamente como se usa en el juego. Esto aplica principalmente para las 18 armas distintas, las cuales se pueden consultar aqúi https://pso2na.arks-visiphone.com/wiki/Weapons (solo tomar en cuenta que están en plural y el codigo usa el singular). Los tipos de armadura son "Back", "Arms", y "Legs". Los tipos de consumibles son "Healing" y "Booster". Los tipos de Emote o Accesorio son "Emote" y "Accesory". Y finalmente, los tipos de Disco son "Melee", "Ranged, y "Technique".

Para que el programa se compile de manera correcta, se debe de usar el comando g++ Weapon.cpp Unit.cpp Consumable.cpp Disc.cpp Inventory.cpp main.cpp -o sebas.out en el compilador

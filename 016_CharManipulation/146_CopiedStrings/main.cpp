#include <iostream>
#include <string>

int main() {

    // Se crea un objeto std::string llamado "message"
    // Contiene un texto largo para asegurar que haya memoria asignada internamente
    std::string message{
        "Hello world!Hello world!Hello world!Hello world!Hello world!"
        "Hello world!Hello world!Hello world!Hello world!Hello world!"
        "Hello world!Hello world!Hello world!Hello world!Hello world!"
        "vvHello world!Hello world!Hello world!Hello world!Hello world!"
    };

    // Se crea una referencia a message.
    // NO es una copia. Ambos nombres apuntan al mismo objeto en memoria.
    std::string& message_copy{ message };

    // data() devuelve un puntero al primer carácter del string interno.
    // Desde C++17 devuelve char* (no const char*)
    char* p1 = message.data();

    // Como message_copy es solo una referencia al mismo objeto,
    // data() devolverá la misma dirección de memoria.
    char* p2 = message_copy.data();

    // Se imprimen las direcciones del primer carácter.
    // Se hace cast a (void*) para que std::cout imprima la dirección
    // y no intente tratarlo como un C-string.
    std::cout << "&message[0] : " << (void*)p1 << std::endl;
    std::cout << "&message_copy[0] : " << (void*)p2 << std::endl;

    // Ambas direcciones deben ser iguales,
    // porque message_copy no es una copia, sino un alias del mismo objeto.

    return 0;
}


/*

&message[0] : 00000292E056C030
&message_copy[0] : 00000292E056C030

*/

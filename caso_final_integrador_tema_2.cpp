#include <iostream>
#include <fstream>
#include <string>

void load_script(const char* filename, bool show_script = false) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: No se pudo abrir el archivo '" << filename << "'.\n";
        return;
    }

    std::string script_content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();

    if (show_script) {
        std::cout << "Contenido del archivo:\n" << script_content << "\n";
    } else {
        std::cout << "Archivo cargado exitosamente.\n";
    }
}

void load_script() {
    std::string filename;
    std::cout << "Ingrese el nombre del archivo: ";
    std::cin >> filename;

    load_script(filename.c_str(), true);
}

int main() {

    load_script();


    return 0;
}

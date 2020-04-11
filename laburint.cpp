#include <iostream>
#include <string>

#define kuva(x) std::cout << x << std::endl //defineerin kuva(x), mis voimaldab natuke lihtsamini asju kuvada

//PROTSEDUURID

void loe_mootmed(unsigned int &pikkus, unsigned int &laius) {
    //kusib kasutajalt pikkust ja laiust, mis on vahemikus 1-1000

    bool vahemik;
    do {
        vahemik = false;

        std::cout << "Sisesta laburindi pikkus: ";
        std::cin >> pikkus;

        if (pikkus > 1000 || pikkus < 1) {
            kuva("Viga! Sisesta arv vahemikus 1-1000");
            vahemik = true;
            std::cin.clear();
        }
    } while (vahemik);

    do {
        vahemik = false;

        std::cout << "Sisesta laburindi laius: ";
        std::cin >> laius;

        if (laius > 1000 || laius < 1) {
            kuva("Viga! Sisesta arv vahemikus 1-1000");
            vahemik = true;
            std::cin.clear();
        }
    } while (vahemik);

}

void algvaartusta(char laburint, unsigned int pikkus, unsigned int laius) {
    unsigned int read = (2 * pikkus + 1);
    unsigned int veerud = (2 * laius + 1);

    char *tabel = new char[read * veerud];
    for (unsigned int rida = 0; rida < read; rida++) {
        for (unsigned int veerg = 0; veerg < veerud; veerg++) {
            std::cout << tabel[rida * veerud + veerg] << " ";
        }
        std::cout << std::endl;
    }

}

int main() {
    unsigned int pikkus = 0;
    unsigned int laius = 0;
    char laburint;
    loe_mootmed(pikkus, laius);
    algvaartusta(laburint, pikkus, laius);


}


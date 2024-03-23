# Bases de la programmation embarquée

Un système embarqué est un système contenant de l'informatique (et qui est donc programmé), mais dont l'objectif principal n'est pas de faire de l'informatique (aka ce n'est pas un ordinateur).

Exemples de systèmes embarqués : voitures, avions, missiles, tanks, drones, imprimantes 3D, robots, les poignées de porte de la résidence, etc.

Nous, on fait des robots.

## Différents niveaux de programmation

### Langages

Les languages de programmation sont classifiés par leur "niveau".
Par exemple, l'assembleur est un langage de "bas niveau" et le python est "haut niveau".

> Le niveau d'un langage correspond à son éloignement par rapport à l'électronique. 
> Le langage de plus bas niveau qui existe s'appelle "envoyer des signaux électriques dans le système".

Idée générale :
- plus un langage est haut niveau, plus il est simple à utiliser pour un être humain (cf. Python et ses listes)
- plus un langage est bas niveau, plus il est prooche de ce qui se passe réellement dans le système (cf. C et les pointeurs)

Tristement, les langages haut niveau sont généralement moins optimisés, et demandent donc une puisance de calcul plus élevée. De plus, les langages compilés sont généralement bien plus rapide que les langages interprétés (qui sont lus ligne par ligne par l'ordinateur).

Pour tester cela, vous pouvez utiliser les programmes suivants :
```py
# Python
import time

a = 10
r = 10**9 # 1 milliard
t = time.time()
for i in range(r):
    a = i
print(f"Finished in {time.time() - t} s")
```

```c
// C - avec Linux
#include <sys/time.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    int a = 10;
    uint32_t r = 1000000000; // 1 milliard, attention à ne pas overflow
    struct timeval stop, start;
    gettimeofday(&start, NULL);

    for (uint32_t i = 0; i < r; i++)
    {
        a = i;
    }

    gettimeofday(&stop, NULL);
    time_t time_spent_ms = ((stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec) / 1000;

    printf("Finished in %lu ms\n", time_spent_ms);

    return 0;
}
```

On constate que le C est BEAUCOUP plus rapide.

### Framework utilisé

Pour un grand nombre de microcontrôleurs, des ensembles de librairies (appelés Frameworks) permettent de programmer la carte. 

Par exemple, pour la Nucleo L432KC, on a les choix suivants (sans aller chercher loin) :
- librairies ST LL (Low Level)
- librairies ST HAL (Hardware Abstraction Layer)
- Arduino (souvent appelé "STduino" pour préciser le type de carte utilisé)

Chaque librairie apporte ses avantages et ses inconvénients. En général, les librairies plus complexes à utiliser permettent aussi un contrôle plus précis du système.

## Importance du hardware

Il y a pusieurs possibilités de hardware en embarqué. Le choix le plus important est le suivant : **quel type de carte principale est utilisé ?**

Il existe 2 types de cartes :
- les Single Board Computers (SBC), comme la Raspberry Pi
- les Microcontrôleurs, comme les STM32 ou les PIC18

Leurs différences sont résumées dans le tableau suivant :

| SBC | uControleur |
| --- | --- |
| Ordinateur complet | Carte spécialisée |
| Branchement à un écran + clavier possible | Envoi de code par USB |
| Linux | Pas d'OS, on n'envoie que du binaire compilé |
| Programmation possible avec des langages variés | C/C++ avec librairies fournisseur |

### Avantages et inconvénients des SBC

Avantages des SBC :
- beaucoup plus puissants
- facilités à programmer (brancher un écran, choix du langage)
- vous avez Linux

Inconvénients des SBC :
- plus chers
- plus complexes à utiliser (voir ROS)
- alimentation demande beaucoup de courant (~2-3A)

### Avantages et inconvénients des uControleurs

Avantages des uControleurs :
- optimisés pour des applications en robotique
- demande peu de puissance pour fonctionner
- pas cher, pas trop grave si ca casse/brûle (merci ST)

Inconvénients des uControleurs :
- oblige à utiliser des librairies constructeur (dépendent du modèle exact)
- moins puissants
- prog en C/C++ uniquement (sinon vous vous tirez une balle dans le pied)

## Cartes utilisées par l'AREM

uControleurs :
- STM32 Nucleo L432KC (très petit, peu de puissance)
- STM32 Nucleo F446RE (plus grand et puissant, plus de pins)
- PIC16F72 (si vous êtes punis/maso) 
- ESP32 (pour faire du Wifi/Bluetooth)
- d'autres si vous cherchez, certaines ont même des écrans intégrés

SBC :
- Raspberry Pi 4

Aller dans **[exercices -> ex2-Code.md](../exercices/ex2-Code.md)**
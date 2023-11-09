# Comment bien documenter son travail

La documentation est une partie intégrale de **tout projet**, que ce soit en programmation ou électronique.

Elle a un objectif très simple : permettre à tous de comprendre le fonctionneement d'un système, en perdant le moins de temps possible.

"Tous" comprend ici :
- d'autres personnes qui souhaitent travailler sur le projet
- d'autres personnes qui souhaitent réutiliser une partie du projet
- vous mêmes dans 6 mois quand vous aurez tout oublié

## Principes de base de la documentation

### Commencer tôt

La documentation n'est pas faite après le projet, mais **en même temps**. Cela va permettre :
- à d'autres personnes de rejoindre le projet en cours sans avoir à tout expliquer
- à l'ensemble de l'équipe du projet de comprendre votre travail
- à vous de mettre au clair l'intérêt de votre travail, et de repérer des problèmes

L'idéal est de commencer à documenter **dès qu'un élément est fonctionnel**.

### Garder tout rangé, au même endroit

La documentation doit être rangée d'une manière simple à comprendre. Si elle devient longue, un sommaire qui explique ce rangement devient fortement conseillé.

L'ensemble de la documentation d'un projet doit se trouver au même endroit.

### Toujours être à jour

La documentation doit être mise à jour avec le projet, sinon elle ne sert à rien.

## Quoi mettre dans la documentation 

### Programmation

Chaque projet contenant du code doit contenir :
- **un README** (en général .md) qui explique le fonctionnement général du code
- **des commentaires** dans le code là où il n'est pas intuitif
- des dessins/schémas si c'est cohérent
- la liste des librairies utilisées, avec un lien vers la documentation de celles-ci si elles sont non-standard

**Pour du code, la meilleure documentation c'est du code bien écrit**  
C'est à dire :
- On évite les fonctions de plus de 50 lignes
- On sépare le code dans plusieurs fichiers et dossiers
- les noms de variables restent parlants
- on fait attention aux [règles de codage](https://fr.wikipedia.org/wiki/R%C3%A8gles_de_codage#:~:text=Les%20r%C3%A8gles%20de%20codage%20s%27articulent%20autour%20de%20plusieurs,code%20source%20Recommandations%20sur%20la%20d%C3%A9claration%20des%20variables)

### Electronique

**En électronique, un bon schéma vaut mieux que mille mots**  
La documentation doit donc contenir :
- schémas en tout genre à faire et conserver (avec du texte explicatif svp)
- Explications de l'utilisation du système
- Matériel utilisé (soyez précis)

## Types de documentation

Tout est possible, tant que c'est bien fait. On va ici voir des exemples.

### Vidéos

Exemple : [Code AREM CdR 2022](https://www.youtube.com/playlist?list=PLIzFWC3vmmyIB0DskwA88rnXii7TlwJEb)

Inconvénients :
- Long à produire
- Difficile à modifier
- Demande des compétences particulières

Avantages :
- très clair
- peut inclure de tout

Cas d'usage :
- vulgarisation du projet
- documentation d'un projet fini qui ne sera pas modifié

Remarques :
- Attention au découpage 
> Des blocs d'1h c'est pas pratique pour retrouver une info spécifique, 
> on a donc rajouté des timestamps pour chaque vidéo en 2023

### Texte "pur"

Exemple : Pages de manuel des commandes linux / librairies standard C

```sh
# commande man
man strlen

# lancer la commande avec le flag --help
ls --help
```

Avantages :
- très simple à écrire et modifier

Inconvénients :
- moche
- ingérable si ca fait plus de 50 lignes

### Texte - site web

Exemple : [Référence librairies standard C++](https://en.cppreference.com/w/)

Avantages :
- facile de trouver une info particulière (Ctrl+F)
- facile à modifier
- facile à découper proprement
- peut tout contenir (images, liens, vidéos, animations, même des exemples interactifs)

Inconvénients :
- il faut savoir faire du web
- il faut faire tourner un site web
- oui c'est du boulot...

### Texte - office

Exemple : une datasheet quelconque -> transformée en PDF mais fait sur office

Avantages :
- facile de trouver une info particulière (Ctrl+F)
- facile à modifier
- facile à découper proprement (**sommaire au début**)
- tout le monde sait utiliser office

Inconvénients :
- limité à un seul fichier -> une suite de pages numérotées
> Genre [cette datasheet](https://www.st.com/resource/en/datasheet/stm32l432kc.pdf) fait 150 pages, et c'est déjà très chiant, puis on se rend compte qu'elle ne se suffit pas a elle même et en référence d'autres.

### Texte - LaTeX

Exemple : *insérer article scientifique quelconque ici*

Comme office mais :
- plus simple de gérer une bibliographie
- plus simple d'écrire des formules mathématiques complexes
- y'a que les chercheurs qui maitrisent vraiment

### Texte - markdown

Exemple : [cette chose]()


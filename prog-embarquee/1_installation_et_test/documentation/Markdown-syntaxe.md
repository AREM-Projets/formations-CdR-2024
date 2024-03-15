# La syntaxe du markdown

## Généralités

Le markdown est une **convention d'écriture** très utilisée pour la documentation. Il est simple d'utilisation, mais demande quand même quelques connaissances.

La plupart des outils de messagerie supportent au moins en partie le markdown (ex: Discord, commentaires Reddit), mais pas Messenger.

Il peut y avoir des légères différences sur la syntaxe du markdown selon où il est utilisé (ajouts / retrait / modifications de fonctionnalités)

## Syntaxe

### Paragraphes, passage à la ligne

Deux paragraphes sont délimités par une ligne vide entre eux.

Pour passer à la ligne sans changer de paragraphe, ajouter 2 espaces à la fin de la ligne, puis appuyer sur entrée. **Un passage à la ligne sans espaces à la fin ne sera pas respecté**.

### Mise en forme générale

La mise en forme est gérée par des balises :
- \**italique*\* ou \_*italique*\_
- \*\***gras**\*\* 
- \_\___souligné__\_\_
- \~\~~~barré~~\~\~
- \``morceau de code`\`
- > \> je sais pas comment appeler ça

Insertion d'un bloc de code :   
\`\`\`extension_de_fichier (ici py)  
```py
# Code exemple
name = "Feur"
print(f"Hi {name} \n")
``` 
\`\`\`

Note : la fonction \_\_souligner\_\_ est souvent remplacée par du gras, car les [liens](https://matias.ma/nsfw/) sont souvent soulignés et cela porterait à confusion.

### Les titres

- \# Titre
- \#\# Titre (plus petit)
- \#\#\# Titre (encore plus petit) 
- \#\#\#\# vous comprenez

On évite d'aller au delà de \#\#\#\#

### Tableaux 

\| colonne 1 \| ... \| colonne n \|   
\| --- \| ... \| ----- \| `(nombre de '-' >= 3)`   
\| truc \| ... \| chose \|   

Rendu :

| colonne 1 | ... | colonne n |   
| --- | --- | ----- |   
| truc | ... | chose |   

### Liens et images

Liens : \[[cliquez ici](https://www.youtube.com/watch?v=dQw4w9WgXcQ)\](https://www.youtube.com/watch?v=dQw4w9WgXcQ)

Images : !\[nom de l'image\](chemin/vers/image.png)

Ex : ![image légendaire](../images/stalinerac.jpg)

### Equations

Les équations sont basées sur le [LaTeX](https://en.wikipedia.org/wiki/LaTeX)

Les équations sur une ligne sont écrites : \$ x = \sqrt{y} \$ (rendu : $x = \sqrt{y}$).

Les équations centrées sont écrites\$\$x = \sqrt{y}\$\$. Rendu : 
$$x = \sqrt{y}$$

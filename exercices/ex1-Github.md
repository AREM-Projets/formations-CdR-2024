# Exercice - utilisation de github

Voir `3-Git-et-github.md` dans le dossier documentation si besoin à tout moment.

## Objectif

1. Cloner le repo de la formation
2. Créer une branche
3. Ajouter un fichier dans le dossier "participants"
4. Créer une merge request

## Consignes détaillées

### Cloner le repo de la formation

- Ouvrir VSCode (incroyable je sais)
- Ouvrir la page web https://github.com/AREM-Projets/formation-embarque
- Copier le lien pour cloner (en HTTPS sauf si vous savez ce que vous faites) dans le menu "code"
- Utiliser la commande `Git: Clone` avec la palette (`F1` ou `Ctrl+Shift+P`)
- Coller l'URL 
- Choisir un dossier dans lequel placer le repo

Vous avez maintenant une copie locale du repo de la formation. Il faut maintenant le modifier. Vous pouvez maintenant accéder à l'onglet `Source control` du menu de gauche (commande : `View : Show Source Control`).

### Créer une branche

**On évite de modifier directement la branche main**

- en bas de la fenètre VSCode (barre bleue), cliquez sur `main`, qui représente la branche dans laquelle vous êtes actuellement
- Cliquez sur `Create new branch...`
- Nommez votre branche avec un nom cohérent

### Créer un nouveau commit

- créez dans votre branche un nouveau fichier `prenom-nom.txt` dans le dossier `participants`
- Vous pouvez maintenant observer votre modification dans l'onglet `Source Control`
- Dans cet onglet, écrivez un message dans la zone au dessus du bouton `Commit` (obligatoire), qui explique ce que ce commit ajoute
- Cliquez sur le bouton `Commit`
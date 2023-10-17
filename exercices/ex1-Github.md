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

- créez dans votre branche un nouveau fichier `prenom-nom.txt` dans le dossier `participants` et écrivez quelque chose dedans
- Vous pouvez maintenant observer votre modification dans l'onglet `Source Control`
- Dans cet onglet, écrivez un message dans la zone au dessus du bouton `Commit` (obligatoire), qui explique ce que ce commit ajoute
- Cliquez sur le bouton `Commit` (aussi accessible depuis la palette de commandes)
- Cliquez sur `Publish branch` (ultérieurement, ce bouton deviendra `Sync`, pour push puis pull)

Vous avez maintenant créé une nouvelle branche à la fois en local et en remote, contenant un nouveau commit. Vous pouvez créer autant de nouveaux commitsque vous le souhaitez sur cette branche. 

### Merge 

Maintenant que vous avez votre branche, il faudrait que les changements effectués sur celle-ci puissent être ajoutés sur la branche principale.

Pour cela, on va fusionner (merge) ces deux branches, en utilisant l'interface de github.

- Ouvrir (ou refresh) la page du repo sur Github
- Cliquer sur l'onglet `Pull requests`
- Cliquer sur `New pull request` puis créer la requête suivante 
```
base: main <- compare: votre-branche
```
- Cliquer sur `Create pull request`

Normalement, la fusion devrait être automatique, cependant parfois des conflits émergent. Il s'agit très souvent de cas dans lesquels *2 personnes différentes ont modidié la même fonction / le même paragraphe d'un texte*.

- Après avoir résolu les conflits, cliquer sur `Merge pull request`, puis `Confirm merge`
- En général, les branches fusionnées sont supprimées (faites le), cliquez sur `Delete branch`
- Repartez dans la branche `main`, utilisez la commande `Git: Sync` et observez les changements.

Si votre fichier est bien présent, vous avez réussi ! 

**Aller dans documentation -> 4-Programmation-embarquee.md**
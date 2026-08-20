# Somme et Moyenne d'un Tableau

Petit programme en C qui calcule la somme et la moyenne des éléments d'un tableau d'entiers.

##  Description

Ce projet propose deux fonctions utilitaires simples permettant de manipuler un tableau d'entiers en C :
- Calculer la **somme** de tous les éléments
- Calculer la **moyenne** de tous les éléments

##  Fonctionnalités

| Fonction | Description | Retour |
|----------|-------------|--------|
| `sommeTableau(int tableau[], int tailleTableau)` | Calcule la somme des éléments du tableau | `int` |
| `moyenneTableau(int tableau[], int tailleTableau)` | Calcule la moyenne des éléments du tableau | `double` |

##  Compilation

Assurez-vous d'avoir un compilateur C installé (comme `gcc`), puis exécutez :

```bash
gcc main.c -o main
```

##  Exécution

```bash
./main
```

##  Exemple de sortie

Avec le tableau `{25, 33, 5, 21}` :

```
84 
21.00 
```

##  Technologies utilisées

- Langage **C**
- Compilateur **GCC**

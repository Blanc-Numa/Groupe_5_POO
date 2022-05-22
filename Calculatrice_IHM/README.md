# Ultimate Calculator

[![forthebadge](https://forthebadge.com/images/badges/0-percent-optimized.svg)](https://forthebadge.com)  
[![forthebadge](https://forthebadge.com/images/badges/powered-by-coffee.svg)](https://forthebadge.com)  
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)  
[![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://forthebadge.com)  

Le projet Ultimate Calculator a pour objectif de proposer une calculatrice complexe grâce à laquelle l'utilisateur pourra facilement créer, afficher et résoudre des expressions et des calculs faisant usage des opérateurs mathématiques de base, à savoir : L'addition, La soustraction, La multiplication, La division.   
Le programme sera agrémenté de quelques extensions d'opérateurs pour compléter ses fonctionnalités à l'avenir (résolution d'équations avec inconnues, affichage de graphiques 2D et 3D, fonctions avancées telles que ln, exponentielle...).  
  
# Sommaire
1. [Pour commencer](#start)  
    - [Pré-requis](#start-prerequisites)  
    - [Installer le projet](#project-begin)  
2. [Bien travailler](#how-to)  
3. [Todo List](#todo)  
4. [Versions](#versions)  
5. [Auteurs](#authors)  
6. [License](#license)  

## Pour commencer <a name="start"></a>

Afin de travailler sur le projet, vous trouverez dans cette partie tout ce qui peut vous être utile pour installer votre environnement de travail, intégrer le projet à l'IDE et commencer à compiler / éxecuter du code.  
Voyez ci-dessous, un diagrammre de classes utilisées par le programme à l'initialisation du dépôt git.  
![Diagramme de classes](res/modelio.png?raw=true "Diagramme de classes")
  
### Pré-requis <a name="start-prerequisites"></a>

Pour démarrer le projet et executer le code sans souci, il est conseillé d'utiliser l'environnement de développement integré "Qt Creator" car il permet la gestion d'interfaces graphiques via Qt très simplement et l'édition de code C++. La compilation est donc gérée par l'IDE, il n'y a pas de makefile pour ce projet et il n'y en aura jamais puisqu'une ouverture du projet sous Qt Creator permet facilement d'éxecuter le projet.  
  
Pour installer l'éditeur QtCreator :  
* [Qt Open Source](https://www.qt.io/download-open-source) - L'éditeur CPP proposé par Qt pour la création de programmes avec interfaces hommes-machines. Attention toutefois car il s'agit là d'une version open-source de l'éditeur : Elle ne conviendra pas pour tous les projets.  

### Installer le projet <a name="project-begin"></a>

Pour installer le projet dans Qt, il faut cloner ce dépôt git et ouvrir le projet directement dans Qt Creator via le fichier "UltimateCalculator.pro". Les options de compilations, de lien et d'include devraient être parfaitement paramétrées et permettre ainsi de travailler tout de suite sur le projet !  

Pour cloner le dépôt, dans un Git Bash, placez vous dans le dossier ou vous stockez vos projets habituellements, et tapez :  

``git clone https://github.com/cpp-2021/ultimate-calculator``  

Reste à vous placer sur la bonne branche et a ouvrir Qt Creator pour lancer le fichier projet:

``git checkout features/ma_branche``  
  
## Comment bien travailler sur le projet ? <a name="how-to"></a>

**Comment bien travailler en équipe sur mon sujet ?**

- Utilisez une branche par sujet
    - **NB** : N'hésitez pas à créer des branches locales pour une tâche qui vous est spécifique.
- Communiquez et accordez vous
    - Entre les membres de l'équipe
    - Avec les équipes qui touchent au même domaine que le votre
- Tenez vous à jour
    - Faites régulièrement usage de la commande "git rebase" pour récupérer les dernières modifications de la branche dev sur votre branche de travail. (internet regorge d'informations sur les commandes git pour vous aider).

**Comment pousser l'une de mes modifications ?**

- Vous devrez passer par une **pull-request**, qui sera ensuite passée au peigne-fin par le groupe en charge de l'intégration, pour accepter (ou refuser) une proposition de modification sur votre branche.
- Publiez toujours une modification qui compile.  

**Comment Utiliser le Singleton ?**  
- En utilisant la classe `RootExpressionSingleton`, il est possible d'utiliser l'instance unique d'Expression n'importe où depuis le programme via les méthodes "get()" et "set()" de la classe singleton.  
- Il est donc possible assez facilement d'accéder à une expression unique modifiable n'importe où et n'importe quand !  

## Todo List <a name="todo"></a>

- [x] Initialisation du projet (Fonctions de base)  
- [x] Singleton  
- [x] Interface Homme Machine
- [ ] Variables  
- [x] Input utilisateur via IHM  
- [x] Simplifications d'expressions  
- [ ] Sauvegarde et chargement  
- [x] Graphique 2D  
- [ ] Graphique 3D  
- [x] Extensions d'opérations  
- [x] Expressions rentrées par l'utilisateur  
- [ ] Documentation 

Légende :  les points anotés par " ~ " ne sont pas encore intégrés et/ou sont en cours d'édition par les groupes respectifs.

## Versions <a name="versions"></a>
**Dernière version stable (stable) :** 0.0.0-d  
**Dernière version preview (nigthly) :** 0.0.0-d  

Liste des versions : [Cliquez ici](https://github.com/cpp-2021/cpp-2021/ultimate-calculator/tags)  

## Auteurs <a name="authors"></a>
Le projet est développé et maintenu par la totalité du groupe M1 de l'ISEN Toulon participant au cours de CPP.  

Equipe en charge de l'intégration :  
* **ATTIA Yanis** [@ydev83](https://github.com/yadev83)  
* **SIMON Thibaud** [@TibRib](https://github.com/tibrib)  
* **DELESSE Alexandre** [@AlexandreDelesse](https://github.com/alexandredelesse)  

## License <a name="license"></a>

Ce projet est sous license ``GNU GPL v3`` - Voir le fichier [LICENSE](LICENSE) pour plus d'informations.  

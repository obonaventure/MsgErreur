# Messages d'erreur des compilateurs C

Ce document en [restructured text](http://www.sphinx-doc.org/en/master/) a comme obejctif de fournir une explication simple des principaux messages d'erreurs retournés par les compilateurs C comme [clang](https://clang.llvm.org) et [gcc](https://gcc.gnu.org). Quand un étudiant commence à programmer en C, il a parfois très difficile de comprendre la signification du message d'erreur qu'il reçoit. Bien souvent, une bonne interprétation du message d'erreur permet de corriger rapidement cette erreur. 

Les étudiants qui souhaitent participer à la rédaction de ce document peuvent le faire en deux phases.

**Première phase**:  documenter les erreurs qu'ils ont vues et qu'ils n'ont pas réussi à interpréter correctement. Pour cela, il suffit d'encoder une issue  via https://github.com/obonaventure/MsgErreur/issues en fournissant clairement le code source C utilisé et le message d'erreur le plus complet possible retourné par le compilateur. Merci d'indiquer le compilateur utilisé  via le label github et de fournir les flags utilisés pour la compilation (par défaut, activez tous les warnings via ``-Wall``). 

Pour introduire une issue sur un projet Github tel que [https://github.com/obonaventure/MsgErreur/](celui-ci), vous devez d'abord vous créer un compte sur [GitHub.com](Github). Allez ensuite sur https://github.com/obonaventure/MsgErreur

![première étape](/images/pr1.png)

Sur cet écran, il vous suffit de cliquer sur Issues pour aller dans la gestion des Issues.

![deuxième étape](/images/pr2.png)

En cliquant sur le bouton *New Issue* vous entrez sur l'écran qui vous permet d'encoder une nouvelle Issue. Regardez d'abord si le problème que vous avez n'est pas déjà connu et regardant la liste des issues qui sont déjà encodées. A titre d'exemple, voici une issue hyper simple. Prenez l'habitude de respecter les conventions suivantes pour décrire une issue :

 - copiez le message d'erreur que vous avez obtenu dans le titre de l'issue
 - utilisez le *label* indiquant *erreur gcc* ou *erreur clang* en fonction du compilateur que vous avez utilisé
 - fournissez le code C le plus court possible qui provoque la même erreur. Profitez du format [Markdown](https://guides.github.com/features/mastering-markdown/) qui est supporté par [GitHub.com](Github) pour encoder votre issue en profitant de la coloration syntaxique. L'exemple ci-dessous devrait vous aider.

![troisième étape](/images/pr3.png)

Fournissez une explication en français de l'erreur et de comment la corriger (dans l'exemple simple ci-dessus, il manque évidemment un ``return`` et il suffit de rajouter ``return 0;`` dans le corps de la fonction ``main``).

Vérifiez via le bouton *Preview* que votre issue est claire et que la coloration de syntaxe fonctionne correctement

![quatrième étape](/images/pr4.png)

Si tout est bon, il vous suffit de soumettre votre issue via le bouton *Submit new issue*

Vous trouverez un exemple d'issue [ici](https://github.com/obonaventure/MsgErreur/issues/2)

**Deuxième phase**: proposer des `pull-requests <https://github.com/obonaventure/MsgErreur/pulls>` via github. Un pull-request doit idéalement contenir toutes les informations relatives à un messages d'erreur, si possible pour [clang](https://clang.llvm.org) et [gcc](https://gcc.gnu.org). Le premier message d'erreur repris dans le document de base devrait vous servir d'exemple.

La version HTML du document est disponible via https://sites.uclouvain.be/SystInfo/MsgErreur/

Ce document est distribué sous licence Creative Commons CC-BY-SA (https://creativecommons.org/licenses/by-sa/3.0/deed.en)

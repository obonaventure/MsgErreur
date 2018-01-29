.. -*- coding: utf-8 -*-
.. Copyright |copy| 2017 by `Olivier Bonaventure <http://perso.uclouvain.be/olivier.bonaventure>`_
.. Ce fichier est distribué sous une licence `creative commons <http://creativecommons.org/licenses/by-sa/3.0/>`_

Erreurs retournées par gcc_
===========================

Ce document reprend les principaux messages d'erreurs retournés par le compilateur gcc_ avec
un exemple simple qui illustre chaque message d'erreur et comment il peut être corrigé.

Sauf indication contraire, gcc_ est lancé avec les arguments ``-Wall -Werror -std=c99``.


:index:`control reaches end of non-void function (gcc)`
-------------------------------------------------------
.. sectionauthor:: Olivier Bonaventure


.. literalinclude:: src/noreturn/noreturn.c
   :language: c

Lorsque ce programme est compilé en utilisant gcc_, il retourne l'erreur
:index:`control reaches end of non-void function (gcc)`. Cette erreur indique que l'étudiant a
oublié de retourner la valeur de retour de la fonction ``f`` (dans ce cas, la valeur
attendue est de type ``int``).

.. literalinclude:: src/noreturn/noreturn.gcc
   :language: console


:index:`conflicting types for \<function\>`
------------------------------------------
.. sectionauthor:: Nicolas Rybowski

.. literalinclude:: src/conflictingtype/conflictingtype.c
    :language: c

Cette erreur signifie généralement que le fonction incriminée surcharge une fonction
déjà existante dans un package inclus dans le programme. Dans cet exemple, il s'agit de la fonction
``strcpy`` du package ``string.h``.

La solution la plus simple est de renommer sa fonction afin d'éviter le conflit, par exemple ```my_strcpy``.

Il est toutefois possible de redefinir une telle fonction en utilisant la même signature. Ceci est
illustré avec la seconde fonction qui ne génère pas d'erreur. Cette redéfinition ne sera valable que localement.

.. literalinclude:: src/conflictingtype/conflictingtype.gcc
   :language: console


:index:`implicit declaration of function \<function\>`
------------------------------------------------------

.. sectionauthor:: Nicolas Rybowski

.. literalinclude:: src/implicit/implicit.c
    :language: c

Cette erreur signifie que la fonction faisant appel à cette fonction spécifique ne peut la voir, elle ne
se situe pas dans sa portée. Dans ce cas particulier, la fonction ``sum`` se trouve en dessous de la fonction appelante (ici ``main``).

De manière générale en C, pour pouvoir appeler une fonction dans un même fichier, il faut que celle ci soit définie `avant` la fonction appelante.

.. literalinclude:: src/implicit/implicit.gcc
   :language: console

Une autre variante de cette erreur peut être trouvée dans l'exemple ci-dessous.

.. literalinclude:: src/implicit2/implicit2.c
    :language: c

Dans ce cas ci, l'oubli de l'``include`` provoque cette erreur. Ici, gcc_ détecte qu'il s'agit d'un potentiel appel système, aussi
il conseille le bon package à inclure.

.. literalinclude:: src/implicit2/implicit2.gcc
   :language: console



:index:`\<var\> undeclared (first use in this function)`
--------------------------------------------------------

.. sectionauthor:: Nicolas Rybowski

.. literalinclude:: src/undeclared/undeclared.c
    :language: c

Cette erreur signifie que l'on fait usage d'une variable non déclarée ou dont la portée n'est pas suffisante.

.. literalinclude:: src/undeclared/undeclared.gcc
   :language: console

:index:`passing argument \<value\> of ‘\<function\>’ makes pointer from integer without a cast`
-----------------------------------------------------------------------------------------------

.. sectionauthor:: Nicolas Rybowski

.. literalinclude:: src/incompatibleptr/incompatibleptr.c
    :language: c

Cette erreur signifie que l'on ne passe pas un pointeur en argument comme réclamé, mais une valeur.

Dans ce cas particulier, on passe une valeur de type ``int`` au lieu d'un pointeur vers un ``int``.

.. literalinclude:: src/incompatibleptr/incompatibleptr.gcc
   :language: console

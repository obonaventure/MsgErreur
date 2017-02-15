.. -*- coding: utf-8 -*-
.. Copyright |copy| 2017 by `Olivier Bonaventure <http://perso.uclouvain.be/olivier.bonaventure>`_
.. Ce fichier est distribué sous une licence `creative commons <http://creativecommons.org/licenses/by-sa/3.0/>`_

Erreurs retournées par clang_
=============================

Ce document reprend les principaux messages d'erreurs retournés par le compilateur 
clang_ avec un exemple simple qui illustre chaque message d'erreur et comment 
il peut être corrigé.

Sauf indication contraire, clang_ est lancé avec les arguments 
``-Weverything -fcaret-diagnostics -fdiagnostics-fixit-info -std=c99``.

:index:`control reaches end of non-void function (clang)`
---------------------------------------------------------
.. sectionauthor:: Olivier Bonaventure 

Considérons le programme simple ci-dessous.

.. literalinclude:: src/noreturn/noreturn.c
   :language: c

Lorsque ce programme est compilé avec clang_, il retourne deux erreurs.

.. literalinclude:: src/noreturn/noreturn.clang
   :language: console


La première, `no previous prototype for function (clang)` indique que la fonction ``f`` a été
définie sans que sa signature n'aie été déclarée dans un prototype préalable. La
seconde, :index:`control reaches end of non-void function (clang)` indique que l'étudiant a
oublié de retourner la valeur de retourde la fonction ``f`` (dans ce cas, la valeur
attendue est detype ``int``). 


:index:`no previous prototype for function (clang)`
---------------------------------------------------

.. literalinclude:: src/noproto/noproto.c
   :language: c

Lorsque ce programme est compilé avec clang_, il retourne l'erreur
:index:`no previous prototype for function` qui indique que la fonction ``f`` a été
définie sans que sa signature n'aie été déclarée dans un prototype préalable. 

.. literalinclude:: src/noreturn/proto.clang
   :language: console

Cette erreur peut être corrigé en incluant au début du fichier ou dans un fichier ``.h`` la
signature ```void f();``.








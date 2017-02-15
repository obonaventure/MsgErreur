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









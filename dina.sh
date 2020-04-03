#!/bin/bash

echo "Bonjour,ceci est un jeux de devinette"

PS3="choisir le mode de jeux: "
select mod_jeu in facile moyen difficile
do
echo “Vous avez choisi le mode $mod_jeu”
break
done
#!/bin/bash

echo "Bonjour,ceci est un jeux de devinette"

PS3="Nombre de joueur: "
select joueur in un_player multi_player
do
echo “Vous avez choisi le mode $joueur”
if (( joueur=1 ))
	
break
done

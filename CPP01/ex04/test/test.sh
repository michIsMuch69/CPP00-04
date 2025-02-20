#!/bin/bash

#$1 aura pour valeur arg1
#$2 aura pour valeur arg2
#$3 aura pour valeur arg3
#De plus, il y a quelques autres variables spéciales que vous pourriez trouver utiles :
#
#$0 - Le nom du script lui-même.
#$# - Le nombre d'arguments passés au script.
#$@ ou $* - Tous les arguments passés au script.
#$$ - L'ID du processus du script en cours d'exécution.
#$? - Le code de sortie de la dernière commande exécutée.

red='\033[31m'
green='\033[32m'
yellow='\033[33m'
reset='\033[0m'

time="0"

#intercept args
for ((i=1; i<=$#; i++)); do
  eval arg=\${$i}
  case "$arg" in
    -c)
      clear
	  ;;
	-t)
	  time="1"
	  ;;
  esac
done

make -C ./../.

if [ $? -ne 0 ] ; then
    echo -e "$red""COMPILATION ERROR"$reset
    exit
else
    echo -e "$green""COMPILATION COMPLETED"$reset
fi

s1=("cc" "a" "Hello" "NotINFile" "repeat" "$" "Line" "" "hello")
s2=("" "aa" "Hey" "NotINFileToo" "repeat" "zz" "Row" "nothing" "hy")

#### TEST RUNNING ####
for i in {0..7} ;
do
    echo -e "$yellow=========================================================================="
    echo -e "       ./../sed_loser \"./test_files/test$i\" \"${s1[$i]}\" \"${s2[$i]}\""
    echo -e "=========================================================================="
    echo -e "EXEC : $reset"
    ./../sed_loser "./test_files/test$i" "${s1[$i]}" "${s2[$i]}"
    echo

    echo -e "$yellow""file -> test$i :$reset"
    cat -e ./test_files/test$i
    echo

    echo -e "$yellow""test$i.expected : $reset"
    cat -e ./test_files/test$i.expected
    echo

    echo -e "$yellow""test$i.replace :$reset"
    cat -e ./test_files/test$i.replace
    echo

if diff -q ./test_files/test$i.replace ./test_files/test$i.expected > /dev/null ; then
    echo -e "$green""test ok$reset"
else
    echo -e "$red""test failed"
    echo -e "$(diff ./test_files/test$i.replace ./test_files/test$i.expected)$reset"
	sleep 3
fi

echo
sleep $time

done


echo -e "$yellow=========================================================================="
echo -e "       ./../sed_loser \"./test_files/emptyFile\" \"hi\" \"oh\""
echo -e "=========================================================================="
echo -e "EXEC : $reset"
./../sed_loser "./test_files/emptyFile" "hi" "oh"
echo

echo -e "$yellow""file -> emptyFile :$reset"
cat -e ./test_files/emptyFile
echo

echo -e "$yellow""emptyFile.expected : $reset"
cat -e ./test_files/emptyFile
echo

echo -e "$yellow""emptyFile.replace :$reset"
cat -e ./test_files/emptyFile.replace
echo

if diff -q ./test_files/emptyFile.replace ./test_files/emptyFile > /dev/null ; then
    echo -e "$green""test ok$reset"
else
    echo -e "$red""test failed"
    echo -e "$(diff ./test_files/emptyFile.replace ./test_files/emptyFile)$reset"
fi

echo

echo -e "$yellow=========================================================================="
echo -e "       ./../sed_loser \"./test_files/invalidFile\" \"hi\" \"oh\""
echo -e "=========================================================================="
echo -e "EXEC : $reset"
./../sed_loser "./test_files/invalidFile" "hi" "oh"

if cat -e ./test_files/invalidFile.replace 2> /dev/null ; then
	echo "$red""Test failed, invalidFile.replace should'nt exist"$reset
else
	echo -e $green
	cat -e ./test_files/invalidFile.replace
	echo -e "No invalidFile.replace, test OK"$reset
fi

echo

echo -e "$yellow=========================================================================="
echo -e "       ./../sed_loser \"./test_files/Makefile.test\" \"#\" \"%\""
echo -e "=========================================================================="
echo -e "EXEC : $reset"
./../sed_loser "./test_files/Makefile.test" "#" "%"
echo
echo -e "$yellow""Makefile.test :$reset"
cat -e ./test_files/Makefile.test
echo

if diff -q ./test_files/Makefile.replace ./test_files/Makefile.test > /dev/null ; then
    echo -e "$red""test failed, Makefile.replace is the same as Makefile.test"
	echo -e "$(diff ./test_files/Makefile.replace ./test_files/Makefile.test)$reset"
else
    echo -e "$green""test ok, all occurences changed"
    echo -e "$(diff ./test_files/Makefile.test.replace ./test_files/Makefile.test)$reset"
fi

echo
echo -e "TESTS TERMINATED"

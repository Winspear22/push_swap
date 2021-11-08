#!/bin/bash

WHITE='\033[0m'
BLUE='\033[36m'
CYAN='\033[1;32m'
YELLOW='\033[1;33m'

make re

echo "======================================================================================================="
echo "__    ____   ______ ____ __ ______   __ __ ___      ___ ___  ___  ______  ___ ______  __  ___ ________"
echo "||   ||      | || |||   (( \| || |   || ||// \\    //  // \\  ||\\//||||\\//||||   ||\ || //  ||   || \\"
echo "||   ||==      ||  ||==  \\    ||      \\ //||=||  (( ((   ))|| \/ |||| \/ ||||== ||\\||((   ||== ||_//"
echo "||__|||___     ||  ||___\_))  ||      \V/ || ||    \\__\\_// ||    ||||    ||||___|| \|| \\__||___|| \\"
echo "======================================================================================================="

echo "\nLes dieux, faisant un tri parmi les hommes, éliminent les pires et les meilleurs, ne laissant\n"
echo "vieillir que les rares mortels qui ont vécu sans haine et sans excès, pour qu'ils conduisent la génération suivante.\n"
echo "=======================================================================================================\n"

echo "${YELLOW}=========== Test avec 0-2 ARG =========== ${WHITE}\n\n"

echo "=== [1] doit afficher vide             =="
echo "=== [5][6][7] doivent afficher 'Error' ==\n"

echo "${CYAN}[Test n°1]${WHITE}   " && ARG=""; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°2]${WHITE}   \c" && ARG="1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°3]${WHITE}   \c" && ARG="1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°4]${WHITE}   \c" && ARG="2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°5]${WHITE}   \c" && ARG="0f 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°6]${WHITE}   \c" && ARG="0 1 2 3f"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°7]${WHITE}   \c" && ARG="coucou bebe"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°8]${WHITE}   \c" && ARG=""" 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°9]${WHITE}   \c" && ARG="1 2 3 """; ./push_swap $ARG | ./checker_Mac $ARG

echo "==============================================================================================\n\n"

echo "${YELLOW}=========== Test avec 3 ARG =========== ${WHITE}\n\n"

echo "${CYAN}[Test n°1]${WHITE}   \c" && ARG="1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°2]${WHITE}   \c" && ARG="1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°3]${WHITE}   \c" && ARG="2 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°4]${WHITE}   \c" && ARG="2 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°5]${WHITE}   \c" && ARG="3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°6]${WHITE}   \c" && ARG="3 1 2"; ./push_swap $ARG | ./checker_Mac $ARG

echo "==============================================================================================\n\n"

echo "${YELLOW}=========== Test avec 4 ARG =========== ${WHITE}\n\n"

echo "${CYAN}[Test n°1]${WHITE}   \c" && ARG="1 2 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°2]${WHITE}   \c" && ARG="1 2 3 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°3]${WHITE}   \c" && ARG="1 3 2 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°4]${WHITE}   \c" && ARG="1 3 4 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°5]${WHITE}   \c" && ARG="1 4 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°6]${WHITE}   \c" && ARG="1 4 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°7]${WHITE}   \c" && ARG="2 1 3 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°8]${WHITE}   \c" && ARG="2 1 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°9]${WHITE}   \c" && ARG="2 3 1 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°10]${WHITE}  \c" && ARG="2 3 4 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°11]${WHITE}  \c" && ARG="2 4 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°12]${WHITE}  \c" && ARG="2 4 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°13]${WHITE}  \c" && ARG="3 1 2 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°14]${WHITE}  \c" && ARG="3 1 4 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°15]${WHITE}  \c" && ARG="3 2 1 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°16]${WHITE}  \c" && ARG="3 2 4 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°17]${WHITE}  \c" && ARG="3 4 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°18]${WHITE}  \c" && ARG="3 4 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°19]${WHITE}  \c" && ARG="4 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°20]${WHITE}  \c" && ARG="4 1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°21]${WHITE}  \c" && ARG="4 2 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°22]${WHITE}  \c" && ARG="4 2 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°23]${WHITE}  \c" && ARG="4 3 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°24]${WHITE}  \c" && ARG="4 3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG

echo "==============================================================================================\n\n"

echo "${YELLOW}=========== Test avec 5 ARG =========== ${WHITE}\n\n"

echo "${CYAN}[Test n°1]${WHITE}   \c" && ARG="1 2 3 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°2]${WHITE}   \c" && ARG="1 2 3 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°3]${WHITE}   \c" && ARG="1 2 4 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°4]${WHITE}   \c" && ARG="1 2 4 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°5]${WHITE}   \c" && ARG="1 2 5 3 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°6]${WHITE}   \c" && ARG="1 2 5 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°7]${WHITE}   \c" && ARG="1 3 2 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°8]${WHITE}   \c" && ARG="1 3 2 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°9]${WHITE}   \c" && ARG="1 3 4 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°10]${WHITE}  \c" && ARG="1 3 4 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°11]${WHITE}  \c" && ARG="1 3 5 2 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°12]${WHITE}  \c" && ARG="1 3 5 4 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°13]${WHITE}  \c" && ARG="1 4 2 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°14]${WHITE}  \c" && ARG="1 4 2 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°15]${WHITE}  \c" && ARG="1 4 3 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°16]${WHITE}  \c" && ARG="1 4 3 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°17]${WHITE}  \c" && ARG="1 4 5 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°18]${WHITE}  \c" && ARG="1 4 5 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°19]${WHITE}  \c" && ARG="2 1 3 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°20]${WHITE}  \c" && ARG="2 1 3 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°21]${WHITE}  \c" && ARG="2 1 4 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°22]${WHITE}  \c" && ARG="2 1 4 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°23]${WHITE}  \c" && ARG="2 1 5 3 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°24]${WHITE}  \c" && ARG="2 1 5 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°25]${WHITE}  \c" && ARG="2 3 1 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°26]${WHITE}  \c" && ARG="2 3 1 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°27]${WHITE}  \c" && ARG="2 3 4 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°28]${WHITE}  \c" && ARG="2 3 4 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°29]${WHITE}  \c" && ARG="2 3 5 1 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°30]${WHITE}  \c" && ARG="2 3 5 4 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°31]${WHITE}  \c" && ARG="2 4 1 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°32]${WHITE}  \c" && ARG="2 4 1 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°33]${WHITE}  \c" && ARG="2 4 3 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°34]${WHITE}  \c" && ARG="2 4 3 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°35]${WHITE}  \c" && ARG="2 4 5 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°36]${WHITE}  \c" && ARG="2 4 5 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°37]${WHITE}  \c" && ARG="3 1 2 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°38]${WHITE}  \c" && ARG="3 1 2 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°39]${WHITE}  \c" && ARG="3 1 4 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°40]${WHITE}  \c" && ARG="3 1 4 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°41]${WHITE}  \c" && ARG="3 1 5 2 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°42]${WHITE}  \c" && ARG="3 1 5 4 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°43]${WHITE}  \c" && ARG="3 2 1 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°44]${WHITE}  \c" && ARG="3 2 1 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°45]${WHITE}  \c" && ARG="3 2 4 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°46]${WHITE}  \c" && ARG="3 2 4 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°47]${WHITE}  \c" && ARG="3 2 5 1 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°48]${WHITE}  \c" && ARG="3 2 5 4 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°49]${WHITE}  \c" && ARG="3 4 1 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°50]${WHITE}  \c" && ARG="3 4 1 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°51]${WHITE}  \c" && ARG="3 4 2 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°52]${WHITE}  \c" && ARG="3 4 2 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°53]${WHITE}  \c" && ARG="3 4 5 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°54]${WHITE}  \c" && ARG="3 4 5 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°55]${WHITE}  \c" && ARG="4 1 2 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°56]${WHITE}  \c" && ARG="4 1 2 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°57]${WHITE}  \c" && ARG="4 1 3 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°58]${WHITE}  \c" && ARG="4 1 3 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°59]${WHITE}  \c" && ARG="4 1 5 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°60]${WHITE}  \c" && ARG="4 1 5 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°61]${WHITE}  \c" && ARG="4 2 1 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°62]${WHITE}  \c" && ARG="4 2 1 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°63]${WHITE}  \c" && ARG="4 2 3 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°64]${WHITE}  \c" && ARG="4 2 3 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°65]${WHITE}  \c" && ARG="4 2 5 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°66]${WHITE}  \c" && ARG="4 2 5 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°67]${WHITE}  \c" && ARG="4 3 1 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°68]${WHITE}  \c" && ARG="4 3 1 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°69]${WHITE}  \c" && ARG="4 3 2 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°70]${WHITE}  \c" && ARG="4 3 2 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°71]${WHITE}  \c" && ARG="4 3 5 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°72]${WHITE}  \c" && ARG="4 3 5 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°73]${WHITE}  \c" && ARG="4 1 2 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°74]${WHITE}  \c" && ARG="4 1 2 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°75]${WHITE}  \c" && ARG="4 1 3 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°76]${WHITE}  \c" && ARG="4 1 3 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°77]${WHITE}  \c" && ARG="4 1 5 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°78]${WHITE}  \c" && ARG="4 1 5 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°79]${WHITE}  \c" && ARG="4 2 1 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°80]${WHITE}  \c" && ARG="4 2 1 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°81]${WHITE}  \c" && ARG="4 2 3 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°82]${WHITE}  \c" && ARG="4 2 3 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°83]${WHITE}  \c" && ARG="4 2 5 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°84]${WHITE}  \c" && ARG="4 2 5 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°85]${WHITE}  \c" && ARG="4 3 1 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°86]${WHITE}  \c" && ARG="4 3 1 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°87]${WHITE}  \c" && ARG="4 3 2 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°88]${WHITE}  \c" && ARG="4 3 2 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°89]${WHITE}  \c" && ARG="4 3 5 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "${CYAN}[Test n°90]${WHITE}  \c" && ARG="4 3 5 2 1"; ./push_swap $ARG | ./checker_Mac $ARG

echo "${YELLOW}=========== Test avec 100 ARG =========== ${WHITE}\n\n"

echo "${CYAN}[Test n°91]${WHITE}  \c" && ARG='34 78 79 43 47 81 42 33 57 48 72 18 55 90 87 65 35 89 37 85 69 60 40 75 80 38 83 67 63 28 31 10 97 66 23 26 99 88 39 5 100 7 58 93 91 4 73 62 12 15 2 68 53 22 74 30 6 94 3 44 82 14 9 19 20 16 92 50 54 61 8 76 51 21 25 27 64 70 46 29 96 36 71 11 49 24 77 56 32 13 52 41 1 45 84 86 98 17 95 59'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l
echo "${CYAN}[Test n°92]${WHITE}  \c" && ARG='3 36 16 32 29 58 51 13 88 33 14 55 48 70 89 60 22 64 61 75 54 44 5 98 68 6 21 18 40 8 72 25 97 79 19 41 95 20 27 65 1 91 77 83 30 52 45 67 49 15 10 74 46 86 62 59 56 96 76 71 35 28 50 99 43 17 66 47 82 63 92 85 11 81 78 87 4 93 38 69 24 73 84 23 34 94 12 2 57 53 42 90 26 100 9 39 37 80 7 31'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l
echo "${CYAN}[Test n°93]${WHITE}  \c" && ARG='53 39 86 96 9 88 95 13 97 27 38 34 20 23 8 81 21 2 85 72 17 83 5 68 99 61 3 43 40 12 62 37 6 91 50 14 65 92 18 35 82 78 77 28 73 41 60 94 79 55 49 29 56 46 15 84 59 80 32 54 11 51 48 30 58 19 75 36 69 25 31 1 47 57 45 93 42 70 16 74 100 64 10 52 22 66 89 44 90 24 4 76 26 87 33 71 98 63 67 7'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l
echo "${CYAN}[Test n°94]${WHITE}  \c" && ARG='9 5 13 18 47 25 23 65 81 19 56 34 37 66 28 61 1 33 31 98 92 29 80 77 24 88 72 49 41 45 40 74 99 91 8 97 26 46 60 44 59 15 73 30 64 51 86 43 71 36 84 70 16 4 57 52 78 67 10 48 93 75 21 11 95 27 82 17 7 79 54 69 94 62 20 87 96 39 76 42 32 89 2 55 6 38 83 90 35 22 50 100 58 14 53 63 12 3 85 68'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l
echo "${CYAN}[Test n°95]${WHITE}  \c" && ARG='34 73 55 58 8 4 29 15 51 46 18 47 25 19 23 21 71 37 54 3 74 44 49 43 93 81 10 5 64 57 82 90 35 11 48 38 85 12 88 92 68 65 9 94 87 100 72 30 67 70 31 53 79 97 41 17 69 40 16 95 28 78 86 13 89 63 59 75 32 6 62 77 45 98 22 83 76 50 14 7 91 36 96 56 60 84 80 27 99 39 26 66 1 2 20 42 33 61 52 24'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l

echo "${YELLOW}=========== Test avec 500 ARG =========== ${WHITE}\n\n"

echo "${CYAN}[Test n°96]${WHITE}  \c" && ARG='358 68 392 466 166 28 105 426 87 72 204 262 156 86 104 114 327 270 322 117 360 483 243 103 461 206 185 130 44 384 400 15 424 313 248 108 48 71 197 11 111 21 182 430 39 288 257 434 153 375 407 56 387 331 463 209 52 441 179 423 42 437 59 64 135 323 344 493 319 418 199 128 440 27 147 276 242 12 73 361 139 207 70 297 308 369 40 406 316 306 121 286 158 292 380 303 290 366 456 468 100 126 498 435 305 230 362 49 330 120 91 261 96 226 391 411 33 26 255 442 432 38 487 125 354 500 145 496 77 410 477 301 214 167 63 419 328 4 307 268 200 82 470 47 224 347 60 241 340 231 65 176 13 359 252 438 240 355 273 474 122 216 217 46 250 408 256 374 118 451 19 357 134 381 186 223 205 251 343 390 341 412 232 274 181 480 57 318 62 30 14 326 155 254 138 370 95 393 447 17 295 143 8 479 165 296 450 203 367 23 5 149 237 164 36 22 146 444 213 102 314 163 499 136 433 389 35 249 397 490 396 350 289 89 309 291 497 333 338 446 78 436 201 395 222 53 16 227 211 339 168 321 210 236 98 54 151 190 32 132 93 460 220 141 467 427 312 352 253 271 275 244 215 183 212 464 431 50 429 420 486 311 258 169 454 317 267 335 264 109 315 378 196 445 449 346 299 458 457 363 336 152 482 180 191 7 161 6 310 379 85 320 281 29 385 51 485 382 173 113 415 67 74 10 492 45 41 124 247 123 272 178 398 405 259 170 233 383 283 202 365 334 260 472 345 177 2 69 37 484 353 225 388 428 189 421 129 489 245 356 469 285 401 269 221 229 399 172 337 235 246 43 99 171 372 101 219 280 443 302 332 34 31 377 9 24 142 413 83 218 239 140 402 154 148 3 131 294 481 473 475 394 266 127 416 84 422 459 409 20 414 403 79 371 452 150 61 324 348 238 193 277 368 471 386 110 97 144 478 137 1 287 494 300 58 208 92 81 373 455 18 376 304 25 194 162 325 55 94 192 465 76 404 115 174 265 293 425 495 160 278 476 329 462 88 284 263 159 491 417 112 195 342 184 439 90 106 453 116 75 349 119 282 364 298 351 175 66 187 448 279 157 198 234 188 133 488 107 80 228'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l
echo "${CYAN}[Test n°97]${WHITE}  \c" && ARG='176 474 22 330 276 476 197 364 256 342 155 433 170 348 152 277 217 290 249 213 305 195 31 19 452 293 89 123 72 225 244 47 398 71 143 445 316 394 456 239 297 63 21 475 350 251 48 283 453 101 338 302 483 207 156 435 261 85 112 371 165 321 346 203 138 275 404 88 491 311 174 446 255 344 360 17 414 353 279 64 372 145 291 406 278 392 183 308 154 462 98 37 385 400 153 130 460 493 300 466 366 191 86 44 242 319 331 328 315 8 339 259 270 284 226 167 60 23 80 46 140 194 144 67 250 263 322 151 374 11 397 35 136 204 188 2 187 289 209 375 262 352 408 212 148 438 454 390 448 141 172 38 32 158 59 252 211 269 149 161 411 459 150 480 355 292 373 455 233 403 401 486 222 362 432 281 285 122 43 379 79 81 117 142 488 368 108 51 5 190 478 200 42 134 396 497 309 232 124 129 76 260 24 118 240 490 442 6 419 416 294 430 393 313 3 28 334 451 181 354 399 186 13 391 131 113 73 310 421 356 349 68 216 179 489 133 410 388 54 495 114 171 266 359 428 341 273 111 163 307 492 87 199 471 237 248 479 450 387 457 215 418 128 487 333 146 99 104 208 30 20 227 258 441 234 382 465 298 332 49 499 132 245 105 365 377 500 14 201 384 320 45 247 434 287 314 473 223 282 40 312 7 70 268 477 52 164 78 449 402 358 407 427 96 444 166 189 303 437 357 103 286 436 447 425 482 440 236 220 16 381 4 363 299 324 168 351 484 12 10 423 468 185 198 127 205 97 235 295 317 93 325 193 116 224 417 9 389 62 306 34 469 246 53 254 288 470 420 257 75 77 139 173 206 336 218 107 376 496 159 264 426 272 228 383 92 231 180 110 464 467 102 18 424 395 160 412 265 41 82 196 33 182 429 26 74 219 178 461 431 367 95 439 39 494 326 463 405 301 57 210 318 274 55 1 280 481 485 192 443 66 91 121 25 340 177 27 304 458 337 84 323 472 230 415 498 335 15 90 56 36 409 386 422 214 327 347 238 120 343 119 65 253 271 243 221 61 229 29 58 329 184 106 378 126 137 370 100 115 157 147 109 241 380 202 94 125 83 296 361 413 50 69 369 169 162 345 267 175 135'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l
echo "${CYAN}[Test n°98]${WHITE}  \c" && ARG='130 327 177 186 195 174 347 125 222 91 24 309 182 225 320 266 201 490 414 425 110 86 226 54 65 221 487 17 402 393 30 488 455 63 244 62 408 28 133 31 38 112 315 83 142 412 157 377 198 341 306 385 200 104 10 342 326 247 348 74 403 166 241 452 134 407 99 55 367 34 369 192 158 119 194 317 382 392 311 111 78 372 293 443 155 66 68 359 153 228 154 108 207 43 339 33 143 210 486 433 387 245 330 343 467 185 456 297 415 37 69 373 135 498 272 336 88 230 445 269 217 96 61 444 246 323 389 303 276 140 473 64 109 383 329 450 432 118 423 305 146 268 319 332 124 448 310 395 417 381 59 117 255 364 308 363 229 179 458 67 314 406 189 163 145 7 294 79 480 103 287 285 358 410 292 251 379 274 261 171 136 94 470 82 167 121 497 115 428 242 148 156 238 436 114 463 208 400 223 273 288 253 479 263 462 197 44 391 324 176 474 160 12 431 150 481 494 196 397 3 290 92 334 374 5 454 11 278 243 89 213 184 100 173 328 421 39 257 346 76 239 6 1 123 335 312 169 216 162 218 457 35 45 267 120 138 472 81 262 388 77 25 355 270 491 15 468 399 281 170 378 70 265 60 475 8 113 19 224 340 106 141 214 149 57 202 181 98 277 127 199 42 451 418 352 193 23 439 356 304 116 485 284 2 73 56 333 161 282 29 419 249 164 300 316 424 368 256 105 190 345 307 41 376 87 416 151 236 411 159 394 234 209 362 90 139 14 204 409 275 500 80 53 401 478 384 233 4 50 354 449 365 280 338 107 446 219 380 232 390 492 227 95 301 404 322 240 331 427 172 422 429 405 40 26 252 375 430 483 437 47 51 495 191 460 435 453 386 144 370 131 215 438 254 493 48 286 250 13 350 360 496 20 499 93 260 464 466 49 122 212 295 258 237 398 58 321 291 206 102 420 97 361 32 299 183 337 147 101 344 461 259 16 187 168 318 235 440 203 353 484 180 152 248 126 349 441 442 302 396 128 75 137 465 477 205 447 165 188 325 469 279 21 72 52 471 175 459 85 482 22 357 489 27 18 313 351 211 426 129 220 71 289 371 413 84 283 46 264 271 476 9 178 298 296 36 132 231 434 366'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l
echo "${CYAN}[Test n°99]${WHITE}  \c" && ARG='312 56 187 481 162 357 121 10 358 238 106 178 202 100 153 208 451 380 414 176 447 452 299 282 370 79 296 123 330 496 227 429 200 7 494 122 148 404 332 53 37 259 273 128 427 308 6 91 52 14 43 362 398 288 96 366 277 163 183 287 419 75 335 415 382 315 399 321 159 23 310 363 487 42 465 430 22 327 304 480 213 379 472 221 343 31 2 169 417 264 326 442 375 171 396 444 196 334 26 369 146 29 103 73 438 302 492 469 170 199 76 449 351 219 456 426 339 314 500 462 131 139 457 86 269 418 229 267 274 367 66 478 428 63 13 248 235 197 144 341 181 377 24 378 486 439 355 303 474 244 344 348 461 284 479 101 17 224 354 495 437 228 192 483 403 466 5 70 374 134 115 381 491 30 38 127 333 247 15 425 285 383 293 349 82 135 167 470 347 62 477 371 175 180 21 72 85 440 165 297 48 271 47 130 436 19 204 424 230 214 145 485 416 240 209 234 149 309 58 156 313 291 391 290 184 177 186 108 157 431 4 257 194 420 278 143 441 353 499 251 201 64 276 206 78 215 395 51 210 384 250 455 3 154 289 300 226 280 54 421 126 410 25 8 55 191 111 255 373 270 28 93 36 352 124 350 218 260 306 328 283 423 473 34 493 245 129 33 292 387 476 137 488 435 179 346 261 401 385 301 152 71 212 252 368 166 223 448 147 359 405 155 390 262 168 249 319 12 320 50 67 376 158 77 107 119 114 98 336 87 253 189 120 1 422 460 364 16 463 141 151 84 497 140 118 317 236 246 39 279 109 217 459 372 397 205 35 164 110 94 88 89 90 27 113 434 305 222 216 295 392 9 400 453 360 68 231 311 324 450 237 345 337 266 408 182 475 307 40 406 243 198 407 188 482 132 467 102 256 281 190 413 65 207 161 412 193 409 464 136 59 325 104 254 11 433 394 242 92 99 411 446 105 484 329 195 318 174 133 41 95 125 232 112 46 268 294 160 393 49 340 361 275 241 322 498 32 20 286 97 490 225 316 211 263 185 331 365 445 173 356 116 388 471 489 454 172 57 81 458 83 342 142 138 265 45 220 44 338 60 74 443 239 61 432 272 386 117 80 298 69 389 203 233 18 150 468 402 323 258'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l
echo "${CYAN}[Test n°100]${WHITE}  \c" && ARG='264 483 401 73 116 235 427 443 135 296 234 87 421 463 246 369 24 435 47 176 261 410 4 400 399 313 148 36 307 220 288 21 81 365 293 34 178 151 28 153 101 249 384 280 133 104 438 64 309 162 150 215 332 348 170 356 48 372 477 453 9 426 67 138 457 459 458 470 379 396 190 476 32 11 142 437 56 77 110 343 136 317 367 146 186 105 377 92 218 266 219 25 108 180 292 341 66 499 329 375 364 205 117 465 378 167 445 72 223 469 411 44 120 388 350 241 225 240 173 184 319 473 33 22 394 183 366 189 182 488 414 484 214 103 281 475 75 406 283 408 165 207 115 155 434 179 257 132 2 402 271 74 279 335 413 57 161 204 405 243 339 345 63 152 248 387 391 342 71 310 403 96 82 156 493 5 433 354 262 111 14 347 301 250 123 374 127 404 99 97 78 327 129 145 134 363 228 12 43 417 359 255 175 419 144 494 188 380 119 187 159 193 480 253 112 278 328 185 210 466 163 321 286 49 158 381 39 37 216 487 238 299 16 254 68 106 83 181 304 232 446 35 334 496 171 53 20 91 316 471 7 231 208 206 251 467 265 285 256 169 273 166 224 436 80 358 464 289 6 355 61 315 242 196 300 191 230 468 172 1 284 90 130 10 244 454 422 26 277 498 94 164 322 448 197 318 423 194 485 340 54 13 450 452 430 267 370 409 424 177 52 114 102 481 27 346 398 320 46 495 86 233 23 139 160 302 295 479 121 100 395 352 55 397 323 140 311 60 390 360 58 268 314 337 361 174 287 154 65 18 389 472 456 239 428 222 432 444 15 500 122 478 415 192 42 303 109 353 442 84 200 269 40 70 212 349 272 157 198 383 451 326 492 29 482 252 199 392 3 38 31 324 258 362 373 416 247 382 209 460 497 30 259 333 447 412 113 449 88 440 131 491 429 294 50 263 141 118 274 276 76 89 351 431 282 344 245 376 149 69 407 93 195 260 201 229 461 305 124 237 137 489 331 386 291 126 226 41 474 85 420 125 490 298 211 455 385 202 19 227 8 290 393 107 368 325 297 217 270 441 418 147 236 128 275 486 371 203 357 17 51 330 213 95 143 308 62 462 312 336 59 306 79 221 45 425 168 338 439 98'; ./push_swap $ARG | ./checker_Mac $ARG
echo "${BLUE}Nombre d'actions : ${WHITE}";./push_swap $ARG | wc -l

echo "==============================================================================================\n\n"

echo "${YELLOW}92 Easy${WHITE}"
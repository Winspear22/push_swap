WHITE='\033[0m'
BLUE='\033[36m'
CYAN='\033[1;32m'
YELLOW='\033[1;33m'

make
ARG=`ruby -e "puts (1..20).to_a.shuffle.join(' ')"`
ARG2=`ruby -e "puts (1..3).to_a.shuffle.join(' ')"`
echo "${CYAN}          ---- TEST PUSH_SWAP -----           ${WHITE}"
echo ""
echo "${CYAN}Test invalid arguments :${WHITE}"
echo ""
echo "${BLUE}With letters :${WHITE}"
echo ""
echo "TEST N° 1"
./push_swap ${ARG} l 
echo "TEST N° 2"
./push_swap ${ARG} @
echo "TEST N° 3"
./push_swap ${ARG} popo
echo "TEST N° 4"
./push_swap 5 1 8 9 54l4
echo ""
echo "${YELLOW}TEST OK${WHITE}"
echo "${BLUE}With not enough arguments :${WHITE}"
echo ""
echo "TEST N° 1"
./push_swap 
echo "TEST N° 2"
./push_swap 5
echo "TEST N° 3"
./push_swap 5 1
echo ""
echo "${YELLOW}TEST OK${WHITE}"
echo "${BLUE}With doubles :${WHITE}"
echo "";
echo "TEST N° 1"
./push_swap ${ARG} 145 321 47 66 99 145
echo "TEST N° 2"
./push_swap ${ARG} 145 321 47 66 99 321
echo "TEST N° 3"
./push_swap ${ARG} 145 321 47 66 99 11 45 47
echo "TEST N° 4"
./push_swap ${ARG} 145 321 47 66 99 66
echo "TEST N° 5"
./push_swap ${ARG} 145 321 47 66 99 387 4489 99 
echo ""
echo "${YELLOW}TEST OK${WHITE}"
echo "${BLUE}With max and min int${WHITE}"
echo ""
echo "TEST N° 1"
./push_swap ${ARG} 2147483647 2147483648
echo "TEST N° 2"
./push_swap ${ARG} -2147483648 2147483647 -2147483649
echo ""
echo "${YELLOW}TEST OK${WHITE}"
echo "${BLUE}With already sorted arguments${WHITE}"
echo ""
echo "TEST N° 1"
./push_swap 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
echo "TEST N° 2"
./push_swap -4 -3 -2 -1 
echo "TEST N° 3"
./push_swap  -4 -3 -2 -1 0 1 2 3 4 5 6
echo "TEST N° 4"
./push_swap 1 100 1000 10000
echo ""
echo "${YELLOW}TEST OK${WHITE}"
echo "${YELLOW}          ---- TEST INVALID_ARGUMENTS OK -----           ${WHITE}"
echo ""
echo "${CYAN}          ---- TEST NUMBERS 1 - 3 -----           ${WHITE}"
echo ""
echo "TEST N° 1"
./push_swap 2 1 3
echo "TEST N° 2"
./push_swap 3 2 1
echo "TEST N° 3"
./push_swap 3 1 2
echo "TEST N° 4"
./push_swap 1 3 2
echo "TEST N° 5"
./push_swap 2 3 1
echo "${YELLOW}TEST OK${WHITE}"
echo "${CYAN}          ---- TEST NUMBERS 1 - 4 -----           ${WHITE}"
echo "TEST N° 1"
./push_swap 2 1 3 9
echo "TEST N° 2"
./push_swap 3 2 -1 1
echo "TEST N° 3"
./push_swap 3  4 1 2
echo "TEST N° 4"
./push_swap 178 1 3 2
echo "TEST N° 5"
./push_swap -2 196 3 1
echo "${YELLOW}TEST OK${WHITE}"
echo "${CYAN}          ---- TEST NUMBERS 1 - 5 -----           ${WHITE}"
echo "TEST N° 1"
./push_swap 2 1 3 9 -1
echo "TEST N° 2"
./push_swap 3 2 -1 1 69
echo "TEST N° 3"
./push_swap 3  4 1 42 -1 
echo "TEST N° 4"
./push_swap 178 47 3 -2 12 
echo "TEST N° 5"
./push_swap -2 196 -3 1 647
echo "${YELLOW}TEST OK${WHITE}"



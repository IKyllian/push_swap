echo "------------- TEST ERROR -------------"
ARG="-"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
./push_swap $ARG

ARG="1 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
./push_swap $ARG

ARG="-1 -1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
./push_swap $ARG

ARG="1a"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
./push_swap $ARG

ARG="- -"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
./push_swap $ARG

ARG="a"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
./push_swap $ARG

ARG="2147483648"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
./push_swap $ARG

ARG="-2147483649"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
./push_swap $ARG

echo "------------- 2 Arguments -------------"

ARG="-1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="2 -1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

echo "------------- 3 Arguments -------------"

ARG="-1 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="-1 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="2 -1 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 -1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="3 -1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 -1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

echo "------------- 4 Arguments -------------"

ARG="1 2 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 2 4 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 3 2 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 3 4 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 4 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 4 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="2 1 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 1 4 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 1 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 4 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 4 1 3 "
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 4 3 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="3 1 2 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 1 4 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 1 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 4 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 4 1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 4 2 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="4 1 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 1 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 2 1 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 2 3 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 3 1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 3 2 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

echo "------------- 5 Arguments -------------"

ARG="1 2 3 4 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 2 3 5 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 2 4 3 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 2 4 5 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 2 5 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 2 5 4 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 3 2 4 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 3 2 5 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 3 4 2 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 3 4 5 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 3 5 2 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 3 5 4 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 4 2 3 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 4 2 5 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 4 3 2 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 4 3 5 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 4 5 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 4 5 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 5 2 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 5 2 4 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 5 3 2 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 5 3 4 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 5 4 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="1 5 4 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="2 1 3 4 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 1 3 5 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 1 4 3 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 1 4 5 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 1 5 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 1 5 4 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 1 4 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 1 5 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 4 1 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 4 5 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 5 1 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 3 5 4 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 4 1 3 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 4 1 5 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 4 3 1 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 4 3 5 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 4 5 1 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 4 5 3 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 5 1 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 5 1 4 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 5 3 1 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 5 3 4 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 5 4 1 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="2 5 4 3 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="3 1 2 4 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 1 2 5 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 1 4 2 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 1 4 5 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 1 5 2 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 1 5 4 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 1 4 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 1 5 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 4 1 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 4 5 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 5 1 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 2 5 4 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 4 1 2 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 4 1 5 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 4 2 1 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 4 2 5 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 4 5 1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 4 5 2 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 5 1 2 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 5 1 4 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 5 2 1 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 5 2 4 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 5 4 1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="3 5 4 2 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="4 1 2 3 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 1 2 5 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 1 2 3 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 1 3 5 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 1 5 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 1 5 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 2 1 3 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 2 1 5 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 2 3 1 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 2 3 5 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 2 5 1 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 2 5 3 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 3 1 2 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 3 1 5 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 3 2 1 5"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 3 2 5 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 3 5 1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 3 5 2 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 5 1 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 5 1 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 5 2 1 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 5 2 3 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 5 3 1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="4 5 3 2 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

ARG="5 1 2 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 1 2 4 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 1 2 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 1 3 4 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 1 4 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 1 4 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 2 1 3 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 2 1 4 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 2 3 1 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 2 3 4 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 2 4 1 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 2 4 3 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 3 1 2 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 3 1 4 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 3 2 1 4"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 3 2 4 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 3 4 1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 3 4 2 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 4 1 2 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 4 1 3 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 4 2 1 3"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 4 2 3 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 4 3 1 2"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG="5 4 3 2 1"
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG

echo "------------- Random Test 100 -------------"
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
echo "------------- Random Test 500 -------------"
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
echo "------------- Random Test 500++ -------------"
ARG=`ruby -e "puts (0..1000).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..5000).to_a.shuffle.join(' ')"`
echo ""$ARG
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker $ARG
ARG=`ruby -e "puts (0..10000).to_a.shuffle.join(' ')"`

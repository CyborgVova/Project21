#WORK_PATH=~/CPC06
clear;
printf 'ENTER PATH:  '
read WORK_PATH

cat ../README.md
printf "\\n";

printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;
printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;
printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;
printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;
printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;

printf "\\n";

norminette -R CheckForbiddenSourceHeader $WORK_PATH/ex*;

sleep 3;

printf ">>>>>>>>>>>>>> EX00 <<<<<<<<<<<<<<\\n";
printf "Expected output:\\n./my_funny_name.txt\\n./other_name\\n./a.out\\n\\nYour output:\\n";
gcc -Wall -Werror -Wextra $WORK_PATH/ex00/ft_print_program_name.c -o my_funny_name.txt && ./my_funny_name.txt;
gcc -Wall -Werror -Wextra $WORK_PATH/ex00/ft_print_program_name.c -o other_name && ./other_name;
gcc -Wall -Werror -Wextra $WORK_PATH/ex00/ft_print_program_name.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX00 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX01 <<<<<<<<<<<<<<\\n";
printf "Expected output:\\n1\\nHello\\nhow\\nhew\\nAre\\nyou\\n3\\nDoIng\\n0\\n\\nYour output:\\n";
gcc -Wall -Werror -Wextra $WORK_PATH/ex01/ft_print_params.c && ./a.out 1 Hello how hew Are you 3 DoIng 0;
printf "\\n";
printf '>>>>>>>>>> END OF EX01 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX02 <<<<<<<<<<<<<<\\n";
printf "Expected output:\\n0\\nDoIng\\n3\\nyou\\nAre\\nhew\\nhow\\nHello\\n1\\n\\nYour output:\\n";
gcc -Wall -Werror -Wextra $WORK_PATH/ex02/ft_rev_params.c && ./a.out 1 Hello how hew Are you 3 DoIng 0;
printf "\\n";
printf '>>>>>>>>>> END OF EX02 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX03 <<<<<<<<<<<<<<\\n";
printf "Expected output:\\n!hew\\n0\\n1\\n3\\nAre\\nDoIng\\nHello\\nhew\\nho!\\nhow\\nyou\\n\\nYour output:\\n";
gcc -Wall -Werror -Wextra $WORK_PATH/ex03/ft_sort_params.c && ./a.out 1 Hello how ho! !hew hew Are you 3 DoIng 0;
printf "\\n";
printf '>>>>>>>>>> END OF EX03 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

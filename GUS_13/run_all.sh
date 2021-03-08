#WORK_PATH=~/CPC02
clear;
printf "ENTER PATH:\\n Makes sure it does not have / at the end, or the program will NOT compile:\\n"
read WORK_PATH

clear;

cat msg.txt

norminette $WORK_PATH/ex*/*.c;
norminette $WORK_PATH/ex*/*.h;
sleep 3;

printf ">>>>>>>>>>>>>> EX00 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I $WORK_PATH/ex00 ex00.c $WORK_PATH/ex00/btree_create_node.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX00 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX01 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I $WORK_PATH/ex01 ex01.c $WORK_PATH/ex01/btree_apply_prefix.c && ./a.out > ex01.output;
diff ex01.output ex01.corr > ex01.diff;
cat ex01.diff
printf "\\033[0;32mIF NOTHING IS DISPLAYED ABOVE - EVERYTHING WORKED FINE\\033[0m\\n\\n";
printf "\\n";
printf '>>>>>>>>>> END OF EX01 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX02 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I $WORK_PATH/ex02 ex02.c $WORK_PATH/ex02/btree_apply_infix.c && ./a.out > ex02.output;
diff ex02.output ex02.corr > ex02.diff;
cat ex02.diff
printf "\\033[0;32mIF NOTHING IS DISPLAYED ABOVE - EVERYTHING WORKED FINE\\033[0m\\n\\n";
printf "\\n";
printf '>>>>>>>>>> END OF EX02 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX03 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I $WORK_PATH/ex03 ex03.c $WORK_PATH/ex03/btree_apply_suffix.c && ./a.out > ex03.output;
diff ex03.output ex03.corr > ex03.diff;
cat ex03.diff
printf "\\033[0;32mIF NOTHING IS DISPLAYED ABOVE - EVERYTHING WORKED FINE\\033[0m\\n\\n";
printf "\\n";
printf '>>>>>>>>>> END OF EX03 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX04 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I $WORK_PATH/ex04 ex04.c $WORK_PATH/ex00/btree_create_node.c $WORK_PATH/ex02/btree_apply_infix.c $WORK_PATH/ex04/btree_insert_data.c && ./a.out > ex04.output;
diff ex04.output ex04.corr > ex04.diff;
cat ex04.diff
printf "\\033[0;32mIF NOTHING IS DISPLAYED ABOVE - EVERYTHING WORKED FINE\\033[0m\\n\\n";
printf "\\n";
printf '>>>>>>>>>> END OF EX04 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX05 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I $WORK_PATH/ex05 ex05.c $WORK_PATH/ex05/btree_search_item.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX05 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX06 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I $WORK_PATH/ex06 ex06.c $WORK_PATH/ex06/btree_level_count.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX06 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX07 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I $WORK_PATH/ex07 ex07.c $WORK_PATH/ex07/btree_apply_by_level.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX07 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

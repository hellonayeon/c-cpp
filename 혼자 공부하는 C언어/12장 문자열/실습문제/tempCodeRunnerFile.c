void sort_3strs(char **str_ary)
// {
//     int i, j;
//     char *tmp;

//     for (i=0; i<3; i++) {
//         for (j=1; j<3; j++) {
//             if (strcmp((*str_ary + i), (*str_ary + j)) > 0) {
//                 tmp = (*str_ary + j);
//                 *(*str_ary + j) = (*str_ary + i);
//                 *(*str_ary + i) = tmp;
//             }
//         }
//     }
// }
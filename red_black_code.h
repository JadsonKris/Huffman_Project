
#ifndef RED_BLACK_CODE_H_
#define RED_BLACK_CODE_H_

typedef struct Red_black red_black;

typedef struct root_rb root;

root *create_root_tree ();
/*This function create the tree's root
 */

red_black *add_red_black (int data);
/*This function create a new node
 */

red_black *brother_node (red_black *rb);
/*This function return the brothe's node
 */

red_black *uncle_node (red_black *rb);
/*This function return the uncle's node
 */

red_black *grand_father_node (red_black *rb);
/*This function return the grandfather's node
 */

red_black *node_max (red_black *rb);
/*This function return the max node
 */

red_black *search(root *root_rb, int value);
/*Find the node specified in the parameter
 */

int node_color (red_black *rb);
/*This function return the node's color
 */

void left_rotate (red_black *node_a, root *root_rb);
/*O node B assume o lugar do node A. O node A vira o filho esquerdo de B.
 * B recebe a cor de A, e A recebe vermelho, podendo ser necessario
 * uma correcao de cor no node A.
 */

void right_rotate (red_black *node_a, root *root_rb);
/*O node B assume o lugar do node A. O node A vira o filho direito de B.
 * B recebe a cor de A, e A recebe vermelho.
 */

void replace_node (root *root_tree, red_black *rb, red_black *new_rb);
/*Replace an old Node for a new node
 */

void insert_red_black (root *root_tree, int data);
/*Em primeiro lugar, ela verifica se a raiz  eh nula, se for, cria uma nova raiz.
 * Entrando no else, temos um for que vai rodar ate encontrar um break.
 * Se o novo valor for menor, vai pra esquerda.
 * Se o novo valor for maior. vai pra direita.
 */

void delete_red_black (root *root_tree, int value);

void case1 (root *root_tree, red_black *rb);
void case2 (root *root_tree, red_black *rb);
void case3 (root *root_tree, red_black *rb);
void case4 (root *root_tree, red_black *rb);
void case5 (root *root_tree, red_black *rb);

void delete_case1 (root *root_tree, red_black *rb);
void delete_case2 (root *root_tree, red_black *rb);
void delete_case3 (root *root_tree, red_black *rb);
void delete_case4 (root *root_tree, red_black *rb);
void delete_case5 (root *root_tree, red_black *rb);
void delete_case6 (root *root_tree, red_black *rb);

void print_pre_order (red_black *rb);


#endif

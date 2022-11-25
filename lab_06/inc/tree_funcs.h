#ifndef TREE_FUNCS_H
#define TREE_FUNCS_H

#include "struct.h"

/**
 * \brief create_node - Функция, которая создает узел(корень деревья)
 * \param name Узел деревья
 * \return Деревье
 */
tree_node_t *create_node(const char *name);

/**
 * \brief insert - Функция, которая добавляет узел в деревьe
 * \param tree Структура деревья
 * \param node Узел, который добавим в деревье
 * \return Деревье
 */
tree_node_t *insert(tree_node_t *tree, tree_node_t *node);

/**
 * \brief lookup - Поиск в деревье
 * \param tree Структура деревья
 * \param name Название узла, который хотим найти
 * \return Узел
 */
tree_node_t *lookup(tree_node_t *tree, const char *name);

/**
 * \brief btree_apply_pre - 
 * \param tree Структура дерева
 * \param f s
 * \param arg s
 */
void btree_apply_pre(tree_node_t *tree, void (*f)(tree_node_t *, void *), void *arg);

#endif // TREE_FUNCS_H
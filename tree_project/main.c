#include<final.h>


int main()
{
    picture();
    //Инициализация корня дерева
    TREENODEPTR rootPtr, *copy=malloc(sizeof (TREENODEPTR)), *p_l = malloc(sizeof (TREENODEPTR));
    p_l = &rootPtr;
    //Ввод дерева
    *p_l = insert_tree();
    //
    printf("\n\nThe preOrder traversal is:\n");
    preOrder(*p_l);
    printf("\n\nThe inOrder traversal is:\n");
    inOrder(rootPtr);
    printf("\n\nThe postOrder traversal is:\n");
    postOrder(rootPtr);
    printf("\n\nThe Stage_Bypass traversal is:\n");
    stageOrder(rootPtr);
    showTree(rootPtr,0,0);
    //rootPtr = parent(rootPtr, 0);
    heightTree(rootPtr);
    dublicate(rootPtr, copy);
    rootPtr=dtree(rootPtr, 5);
    showTree(rootPtr,0,0);
   // showTree(*copy,0,0);
    //FreeTree(rootPtr);

    main();
}

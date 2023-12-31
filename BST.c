#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int ch;
    printf("\n1. Insert");
    printf("\n2. Search");
    printf("\n3. Inorder");
    printf("\n4. Preorder");
    printf("\n5. Postorder");
    printf("\n6. Delete");
    printf("\n7. Exit");
    printf("\nEnter your choice :");
    scanf("%d", &ch);
    return ch;
}

struct Tree
{
    struct Tree *left;
    int data;
    struct Tree *right;
};

struct Tree *insert(struct Tree *t, int item)
{
    struct Tree *temp;

    if (t == NULL)
    {
        temp = (struct Tree *)malloc(sizeof(struct Tree));
        temp->left = NULL;
        temp->data = item;
        temp->right = NULL;
    }
    else
    {
        if (t->data > item)
        {
            t->left = insert(t->left, item);
        }
        else if (t->data < item)
        {
            t->right = insert(t->right, item);
        }
        else
        {
            printf("Not possible to insert duplicate elements");
            return t;
        }
    }
}

struct Tree *search_element(int key, struct Tree *t)
{
    if (t == NULL)
    {
        return NULL;
    }
    else
    {
        if (key < t->data)
        {
            return (search_element(key, t->left));
        }
        else if (key > t->data)
        {
            return (search_element(key, t->right));
        }
        else
        {
            return t;
        }
    }
}

struct Tree *findmin(struct Tree *t)
{
    if (t == NULL)
    {
        return NULL;
    }
    else if (t->left == NULL)
    {
        return (t);
    }
    else
    {
        return (findmin(t->left));
    }
}

struct Tree *del(int key, struct Tree *t)
{
    struct Tree *temp;
    if (t == NULL)
    {
        return t;
    }
    else if (key < t->data)
    {
        t->left = del(key, t->left);
    }
    else if (key > t->data)
    {
        t->right = del(key, t->right);
    }
    else if (t->right && t->left)
    {
        temp = findmin(t->right);
        t->data = temp->data;
        t->right = del(t->data, t->right);
    }
    else
    {
        temp = t;
        if (t->left == NULL)
        {
            t = t->right;
        }
        else if (t->right == NULL)
        {
            t = t->left;
        }
        free(t);
    }
}

void inorder(struct Tree *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf("%d", t->data);
        inorder(t->right);
    }
    return;
}

void preorder(struct Tree *t)
{
    if (t != NULL)
    {
        printf("%d", t->data);
        preorder(t->left);
        preorder(t->right);
    }
    return;
}

void postorder(struct Tree *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d", t->data);
    }
    return;
}

int main()
{
    int n, ch;
    struct Tree *curr, *temp;
    struct Tree *root = NULL;
    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            printf("\nEnter the Value :");
            scanf("%d", &n);
            root = insert(root, n);
            break;
        case 2:
            printf("\nEnter the Value to be searched :");
            scanf("%d", &n);
            temp = search_element(n, root);
            if (temp == NULL)
            {
                printf("\nElement is not found");
            }
            else
            {
                printf("\nElement is found");
                break;
            }
        case 3:
            inorder(root);
            break;
        case 4:
            preorder(root);
            break;
        case 5:
            postorder(root);
            break;
        case 6:
            printf("\nEnter the Value to be deleted :");
            scanf("%d", &n);
            temp = del(n, root);
            if (temp == NULL)
            {
                printf("\nTree is empty");
            }
            else
            {
                printf("\nMin Value is %d", temp->data);
                break;
            }
        }
    } while (ch != 5);
    printf("Thank you");
    return 0;
}
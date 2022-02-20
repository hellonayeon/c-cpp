/* 연결리스트 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member
{
    char name[20];
    int age;
    struct member *next;
} member;

member* create_func();
void input_func(member **phead, member **ptail);
void output_func(member *head);
void search_func(member *head);
void delete_func(member **phead, member **ptail);
void save_func(member *head);
void load_func(member **phead, member **ptail);

int main(void)
{
    int no;

    member *head, *tail;
    head = tail = NULL;

    load_func(&head, &tail);

    do
    {
        printf("1. insert\n");
        printf("2. print\n");
        printf("3. search\n");
        printf("4. delete\n");
        printf("9. exit\n");
        printf("select --> ");
        scanf("%d", &no);
        getchar();

        switch (no)
        {
        case 1:
            printf("--- insert member ---\n");
            input_func(&head, &tail);
            break;
        case 2:
            printf("--- print member list ---\n");
            output_func(head);
            break;
        case 3:
            printf("--- search member ---\n");
            search_func(head);
            break;
        case 4:
            printf("--- delete member ---\n");
            delete_func(&head, &tail);
            output_func(head);
            break;
        case 9:
            printf("exit program..\n");
            printf("--- save member list ---\n");
            save_func(head);
            exit(0);

        default:
            printf("wrong choice!!\n");
            break;
        }
        printf("\n\n");
    } while (1);
    
    return 0;
}

member* create_func()
{
    member *new_member = (member *)malloc(sizeof(member));
    if (new_member == NULL)
    {
        printf("can not allocation memory\n");
        exit(1);
    }

    return new_member;
}

void input_func(member **phead, member **ptail)
{
    member *new_member = create_func();

    printf("name: ");
    fgets(new_member->name, 19, stdin);
    new_member->name[strlen(new_member->name) - 1] = '\0';

    printf("age: ");
    scanf("%d", &new_member->age);

    new_member->next = NULL;

    if (*phead == NULL)
    {
        *phead = *ptail = new_member;
    }
    else
    {
        (*ptail)->next = new_member;
        *ptail = new_member;
    }
}

void output_func(member *head)
{
    member *current = head;
    
    while (current)
    {
        printf("%s\t %d\n", current->name, current->age);
        current = current->next;
    }
}

void search_func(member *head)
{
    member *current = head;
    char s_name[20];

    printf("search name: ");
    fgets(s_name, 19, stdin);
    s_name[strlen(s_name) - 1] = '\0';

    while (current)
    {
        if (strcmp(s_name, current->name) == 0)
        {
            printf("%s\t %d\n", current->name, current->age);
            break;
        }
        current = current->next;
    }

    if (current == NULL)
    {
        printf("name \"%s\" is not founded!!\n", s_name);
    }
}

void delete_func(member **phead, member **ptail)
{
    member *current, *before;
    char d_name[20];

    printf("delete name: ");
    fgets(d_name, 19, stdin);
    d_name[strlen(d_name) - 1] = '\0';

    current = before = *phead;

    while (current)
    {
        
        if (strcmp(d_name, current->name) == 0)
        {
            // 첫 노드를 지우는 경우
            if (current == *phead)
            {
                *phead = (*phead)->next;
            }
            
            // 마지막 노드를 지우는 경우
            else if (current == *ptail)
            {
                *ptail = before;
                before->next = NULL;
            }

            // 중간 노드를 지우는 경우
            else
            {
                before->next = current->next;
            }

            free(current);
            break;
        }

        before = current;
        current = current->next;
    }

    if (current == NULL)
    {
        printf("name \"%s\" is not founded!!\n", d_name);
    }
}

void save_func(member *head)
{
    FILE *fp;
    member *current;

    if ((fp = fopen("member.dat", "w")) == NULL)
    {
        printf("can not open member.dat\n");
        exit(1);
    }

    current = head;
    while (current)
    {
        // 첫 번째 인수로 주어진 메모리 위치로 가서
        // 크기와(두 번째 인수) 개수(세 번째 인수)를 곱한 바이트 수를 읽어
        // 파일 포인터의 파일에 출력
        fwrite(current, sizeof(member), 1, fp);
        current = current->next;
    }

    fclose(fp);
}

void load_func(member **phead, member **ptail)
{
    FILE *fp;
    member *new_member;

    if ((fp = fopen("member.dat", "r")) == NULL)
    {
        printf("can not open member.dat\n");
        exit(1);
    }

    while (1)
    {
        new_member = create_func();
        new_member->next = NULL;

        if ((fread(new_member, sizeof(member), 1, fp)))
        {
            if (*phead == NULL)
            {
                *phead = *ptail = new_member;
            }
            else
            {
                (*ptail)->next = new_member;
                *ptail = new_member;
            }
        }
        else
        {
            free(new_member);
            break;
        }
    }

    fclose(fp);
}
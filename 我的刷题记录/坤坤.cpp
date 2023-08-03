//#include "stdafx.h"
#include <graphics.h> // ??????��?????
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include<mmsystem.h>
#pragma comment(lib,"Winmm.lib")


struct ikun_state //������״̬
{
    int x; //������x��
    int y; //������y��
    int qy;
    int jump_height; //��������Ծ�߶�
    int jump;        //��Ծ���
    int frame;       //���ּ�����
    int playball;    //������
    int four;        //����
    int rap;         //rap���
};

typedef struct node
{
    int x;
    int y;
    IMAGE img;
    int object; //������1������2�Ǽ���3�ǵ�Ļ
    struct node *next;

} Node, *pNode;

void show(IMAGE img[], int tem, pNode lp, IMAGE dj[], ikun_state *state); //��ʾ����
pNode obstacle(int four, IMAGE img[], pNode tail);                        //�жϺ���
void objmove(pNode lp);                                                   //�����ƶ�����
void start(ikun_state *state);                                            //���̼���
void Pdelete(pNode lp);                                                   //����ɾ��
void judge(ikun_state *state, pNode lp, pNode tail);                      //�жϺ���s
void memu();     
void music();                                                         //�жϺ���

int main()
{
    ikun_state state;
    state.x = 50;
    state.y = 200;
    state.qy = 200;
    state.four = 0;
    state.frame = 3;
    state.jump_height = 100;
    state.playball = 0;
    state.rap = 0;
    state.jump = 1;
    srand((int)time(0));
    initgraph(1000, 500);
    IMAGE ikunpng[8]; //���������˧������6����
    IMAGE basketball; //����������
    IMAGE daoju[3];

    //�����ļ���̫��
    loadimage(&daoju[0], _T("../images/basketball.gif"), 50, 50); //��������������
    loadimage(&daoju[1], _T("../images/jntm.gif"), 50, 50);       //���������ļ���̫��
    loadimage(&daoju[2], _T("../images/dm.gif"), 100, 50);        //���������ĵ�Ļ

    //Ϊ������˧������6���ĸ�ֵ
    loadimage(&ikunpng[0], _T("../images/ikun_one.gif"), 200, 200);
    loadimage(&ikunpng[1], _T("../images/ikun_two.gif"), 200, 200);
    loadimage(&ikunpng[2], _T("../images/ikun_three.gif"), 200, 200);
    loadimage(&ikunpng[3], _T("../images/ikun_four.gif"), 200, 200);
    loadimage(&ikunpng[4], _T("../images/ikun_five.gif"), 200, 200);
    loadimage(&ikunpng[5], _T("../images/ikun_six.gif"), 200, 200);

    loadimage(&ikunpng[6], _T("../images/ikun_rap.gif"), 200, 200);
    loadimage(&ikunpng[7], _T("../images/ikun_playball.gif"), 200, 200);

    int rm = 0;
    pNode head = (pNode)malloc(sizeof(node));
    head->next = NULL;
    head->x = 1000;
    head->y = 1;
    head->object = 0;
    pNode tail = head;
    music();//��������
    memu();//���ؽ���
    

    while (1)
    {

        tail = obstacle(state.four, daoju, tail);
        // MessageBox(0,TEXT("aa"),TEXT("aa"),0);
        start(&state);
        show(ikunpng, rm++, head, daoju, &state);
        objmove(head);

        Pdelete(head);
        judge(&state, head, tail);

        if (rm == 6)
        {
            rm = 0;
        }
        Sleep(100);
    }

    _getch();
    closegraph();
    return 0;
}


void music(){
    char path[50];

    

    mciSendString("open ../music/jntm.mp3", NULL, 0, NULL);
	mciSendString("play ../music/jntm.mp3", NULL, 0, NULL);        //ѭ����������


}

void memu()
{

    IMAGE memu;
    int tem = 0;
    
    settextstyle(26, 0, _T("����"));
    loadimage(&memu, _T("../images/memu.gif"), 1000, 500);

    while (!kbhit())
    {
        
        if (GetAsyncKeyState(VK_SPACE) & 0x8000)
        {
            return;
        }

        cleardevice();

        putimage(0,0,&memu);
                                     //���޼��̲�������˸
        setcolor(RED);                       //����������ɫ
        outtextxy(700, 350, _T("���ո�ʼ��Ϸ")); //��ʾ
        Sleep(100);                         //��ʱ
        setcolor(WHITE);                     //�ñ���ɫ��ȥ�ּ�
        outtextxy(700, 350, _T("���ո�ʼ��Ϸ")); //��ʾ
        Sleep(100);                         //��ʱ


    }
}

void judge(ikun_state *state, pNode lp, pNode tail)
{

    if (state->frame == 0)
    {
        settextstyle(36, 0, _T("����"));
        state->x = 50;
        state->y = 200;
        state->qy = 200;
        state->four = 0;
        state->frame = 3;
        state->jump_height = 100;
        state->playball = 0;
        state->rap = 0;
        state->jump = 1;

        while (1)
        {
            cleardevice();

            outtextxy(200, 250, _T("�㱻��ʦ�����棬�밴�ո����¿�ʼ��Ϸ"));
            if (GetAsyncKeyState(VK_SPACE) & 0x8000)
            {
                return;
            }

            Sleep(100);
        }
    }

    pNode p, q;

    if (lp == NULL)
    {
        return;
    }

    for (p = lp->next, q = lp; p != NULL; p = p->next, q = q->next)
    {

        if ((state->x + 100 >= p->x + 10) && (state->x + 100 <= p->x + 40) && (state->qy + 160 >= p->y))
        {

            if (p->object == 0)
            {

                if (state->playball)
                {
                    state->four += 5;
                    q->next = p->next;
                    if (p == NULL)
                        break;
                    else
                        free(p);
                }
                break;
            }

            if (p->object == 2)
            {

                if (state->rap)
                {
                    state->four += 10;
                    q->next = p->next;
                    if (p == NULL)
                        break;
                    else
                        free(p);
                }
                else
                {

                    state->four -= 20;
                    q->next = p->next;
                    state->frame -= 1;
                    if (p == NULL)
                        break;
                    else
                        free(p);
                }

                break;
            }

            else
            {

                state->frame -= 1;
                q->next = p->next;
                if (p == NULL)
                    break;
                else
                    free(p);
                break;
            }
        }
    }
}

void Pdelete(pNode head)
{

    pNode p, q;

    if (head == NULL)
    {
        return;
    }

    for (p = head->next, q = head; p != NULL; p = p->next, q = q->next)
    {
        if (p->x <= 0)
        {
            q->next = p->next;
        }
    }
    if (p == NULL)
        return;
    else
        free(p);
}

void show(IMAGE img[], int tem, pNode lp, IMAGE dj[], ikun_state *state)
{
    cleardevice();

    settextstyle(16, 0, _T("����"));
    TCHAR str1[10];
    TCHAR str2[10];
    sprintf(str1, "������%d", state->four);
    sprintf(str2, "����ָ��%d", state->frame);
    settextcolor(RED);
    outtextxy(0, 10, str1);
    outtextxy(0, 30, str2);

    line(0, 400, 1000, 400);

    putimage(state->x, state->qy, &img[tem]);

    if (state->playball)
    {
        putimage(state->x, state->qy, &img[7]);
    }

    if (state->rap)
    {
        putimage(state->x, state->qy, &img[6]);
    }

    for (pNode i = lp->next; i != NULL; i = i->next)
    {
        putimage(i->x, i->y, &dj[i->object]);
    }
}

void objmove(pNode lp)
{

    for (pNode i = lp->next; i != NULL; i = i->next)
    {
        if (i->object == 0)

        {
            i->y = rand() % 50 + 300;
        }

        i->x -= 20;
    }
}

pNode obstacle(int four, IMAGE img[], pNode tail)
{ //�����ϰ���

    if ((rand() % 5) == 1)
    { //1/5�ĸ���

        int thisx = rand() % 200 + 1200;
        if (thisx <= tail->x + 200)
        {

            return tail;
        }
        else
        {
            tail->next = (pNode)malloc(sizeof(Node));
            tail->next->y = 300;
            tail->next->next = NULL;
            tail->next->x = thisx;
        }

        int tmp;

        if (four > 100)
        {
            tmp = rand() % 3;

            tail->next->object = tmp;
        }
        else
        {
            tmp = rand() % 2 + 0;

            tail->next->object = tmp;
        }

        return tail->next;
    }
    return tail;
}

void start(ikun_state *state)
{

    if (GetAsyncKeyState(VK_UP) & 0x8000)
    {

        state->qy -= 30;
    }
    else
    {

        if (state->qy < state->y)
        {
            state->qy += 30;
        }
    }

    if (GetAsyncKeyState(VK_DOWN) & 0x8000)
    {
        state->playball = 1;
    }
    else
    {
        state->playball = 0;
    }

    if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
    {
        state->rap = 1;
    }
    else
    {
        state->rap = 0;
    }
}

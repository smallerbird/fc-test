# fc��Ϸ����ʵ��

# ����ʵ��
�������ã�
1.���ʣ�https://cc65.github.io/getting-started.html
�ҵ���Microsoft Windows
����� current cc65 snapshot������
����window��������
2.��ѹ����c�� c:\cc65\ (Ҳ����˵�����Ŀ¼Ҫ�ܿ���bin�ļ�) 
  ��Ҳ���Էŵ������ط���������Ӧ��������Ҫ���Լ�ȥ�޸��� 
3.�޸Ļ�������������ͼ�� 
  CC65_HOME=c:\cc65 
  CC65_INC=c:\cc65\include 
  CC65_LIB=c:\cc65\lib 
  path�Ľ�β���� %CC65_HOME%\bin ע��ֺŷָ�

4.���� 
��ʼ-���� ��cmd 
���� cc65 -V ���ǲ鿴��ǰ�汾


дһ��helloworld

1.���±��༭�ļ� helloworld.c 

Helloworld.c���� 

    #include <conio.h>
    void main()
    {
    	cprintf("Hello World!");
    	while(1){}
    }

2.�������ɣ�
cl65 -t nes -o helloworld.nes helloworld.c 
3.��ģ������




#�ο��ĵ�
CC65 ����FC/NES ��Ϸ��һ�������
https://blog.csdn.net/firseve/article/details/84105084
CC65 ����FC/NES ��Ϸ������Hello world
https://blog.csdn.net/firseve/article/details/84105184
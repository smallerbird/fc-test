# fc游戏开发实践

# 个人实践
环境配置：
1.访问：https://cc65.github.io/getting-started.html
找到：Microsoft Windows
点击“ current cc65 snapshot”下载
设置window环境变量
2.解压缩到c盘 c:\cc65\ (也就是说打开这个目录要能看到bin文件) 
  你也可以放到其他地方，不过对应的配置需要你自己去修改了 
3.修改环境变量（看截图） 
  CC65_HOME=c:\cc65 
  CC65_INC=c:\cc65\include 
  CC65_LIB=c:\cc65\lib 
  path的结尾加上 %CC65_HOME%\bin 注意分号分隔

4.测试 
开始-运行 打开cmd 
输入 cc65 -V 就是查看当前版本


写一个helloworld

1.记事本编辑文件 helloworld.c 

Helloworld.c代码 

    #include <conio.h>
    void main()
    {
    	cprintf("Hello World!");
    	while(1){}
    }

2.编译生成：
cl65 -t nes -o helloworld.nes helloworld.c 
3.用模拟器打开




#参考文档
CC65 开发FC/NES 游戏（一）环境搭建
https://blog.csdn.net/firseve/article/details/84105084
CC65 开发FC/NES 游戏（二）Hello world
https://blog.csdn.net/firseve/article/details/84105184
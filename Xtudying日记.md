# 学习日记




## 20150703 night

### 在Ubuntu 14中部署Clion开发环境

#### 安装cmake
```Bash
sudo apt-get install cmake
which cmake                      # 查询到cmake所在目录为/usr/bin/cmake
```

#### 安装Clion
```Bash
cat Install-Linux-tar.txt 
```
> INSTALLATION INSTRUCTIONS
>
> ...
>
> Open a console and cd into "{installation home}/bin" and type: `./clion.sh` to start the application.
>
> ...

```Bash
sudo ./clion.sh
```

执行安装，会有弹出图形界面选择许可，主题样式等。

![clion_install_1](https://raw.githubusercontent.com/hpcn52/Xtudying/master/image/clion_install_1.jpg)

##### 问题

![clion_install_2](https://raw.githubusercontent.com/hpcn52/Xtudying/master/image/clion_install_2.jpg)
网上找到解决方法
```Bash
cmake -D CMAKE_CXX_COMPILER="gcc" CMAKE -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX:PATH="/usr/local"
```

#### Hello, World!
![clion_install_3_b](https://raw.githubusercontent.com/hpcn52/Xtudying/master/image/clion_install_3_b.jpg)
![clion_install_3_c](https://raw.githubusercontent.com/hpcn52/Xtudying/master/image/clion_install_3_c.jpg)
![clion_install_3](https://raw.githubusercontent.com/hpcn52/Xtudying/master/image/clion_install_3.jpg)

### 复习了C指针
写了一份代码`lab/20150704_c_pointer.md`，对比了以下两种指针变量的区别
```c
char *p[10];
char (*p)[10];
```

> 稍后更新

### 学习which命令
> 来源 http://www.cnblogs.com/peida/archive/2012/11/08/2759805.html

which指令会在PATH变量指定的路径中，搜索某个系统命令的位置，并且返回第一个搜索结果。

#### 命令格式
```Bash
[root@localhost ~]# which pwd
/bin/pwd
[root@localhost ~]#  which adduser
/usr/sbin/adduser
```

> which是根据使用者所配置的PATH变量内的目录去搜寻可运行档的！所以，不同的PATH配置内容所找到的命令当然不一样的！

>     cd是bash内建的命令！
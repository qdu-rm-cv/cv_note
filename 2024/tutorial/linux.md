# ABOUT LINUX

## 目录directory

### 目录结构

![目录结构](assets/目录结构.jpg)

- /bin  二进制文件，常用指令
- /dev  外部设备（在 Linux 中访问设备的方式和访问文件的方式是相同的）
- /etc  配置文件
- /home 用户主目录
- /lib  库目录
- /opt  安装的额外软件
- /root 系统管理员的用户主目录
- /tmp  临时文件

### 特殊目录字符

- 单点（.）表示当前目录,也可以使用 ./ 来表示

- 双点（..）表示父目录,比当前位置高一个目录,也可以 ../ 来表示

- ~ 代表  /home/用户名
- / 代表  根目录，就是所有目录最顶层的目录

**ps**:如果一个目录或文件名以一个点 . 开始，表示这个目录或文件是一个**隐藏目录或文件**(如：.bashrc)。即以默认方式查找时，不显示该目录或文件

## 账户account

## 权限permission

![权限](assets/权限.jpg)

\ |属主权限|属组权限|其他用户权限|
------|-------|-------|-------|
权限|**rwx**|**rwx**|**rwx**|
是否有权限|011|110|101|
十进制|3|6|5|
是否有权限|111|111|111|
十进制|7|7|7|

## 包管理apt

## 命令command

### 命令格式

命令 [选项] [参数]

其中 [   ]中是可选项

短格式选项是英文的简写，用一个 - 调用

长格式选项是英文完整单词，一般用两个 -- 调用

``` bash

ls  #枚举目录、文件命令

ls -l  #带选项、不带参数的命令  并且是短格式命令

ls --all  #带选项、不带参数的命令  并且是长格式命令

ls --all /home #带选项、带参数、并且是长格式命令

```

### 常用命令

commands|meaning|
--------|-------|
ls|枚举目录
cd|
mkdir|
rm|
mv|
cp|
touch|
vi/vim|
nano|
gedit|
cat|
chmod|
tar|
grep|搜索过滤
find|递归搜索
locate|搜索路径
pwd|
su|用户切换
sudo|单次root权限
chsh|切换终端
ps|
kill|
ifconfig|
ping|
clear|
\> |重定向符
\| |管道符
shutdown|
poweroff|
reboot|

### 使用方法

1.帮助

``` bash

ls --help

man ls

```

2.关机

```bash
shutdown -h now
shutdown -h 5
poweroff
```

3.重启

```shell
reboot
```

4.切换目录

```bash

cd /
cd /usr
cd ..
cd ~
cd
cd -
```

5.查看文件

```shell
ls
ls -a
ls -l
ll
```

6.创建

```shell

touch README.md
mkdir -p /test/
```

7.删除

```shell
rm -r test/
rm -rf test/
```

8.目录复制/移动/搜索

```shell
mv 所要移动文件的当前路径  目标路径

cp 所要复制的文件名 目标文件夹

cp -r 所要复制的文件夹  目标路径

find /test --name 's*'
```

9.查找

```shell
ps -ef | grep sshd
find ~/tutorial -name "*.md"
#“|”左边命令的输出就会作为“|”右边命令的输入

#"*"通配符
```

## 常见文件格式

### 安装包

- .deb

### 脚本文件

- .sh
shell
**运行方法**
1.给权限
sudo chmod 777 文件名
2.运行
./文件名

### 压缩包

- .tar.gz
- .gz
- .zip
- .rar

**打包压缩**

```shell
打包文件后缀.tar
压缩文件后缀.gz
打包并压缩的文件后缀.tar.gz

z:调用gzip压缩命令进行压缩
c:打包
v:显示运行过程
f:指定文件名

```

**解压**

```shell
z:调用gzip压缩命令解压
x:解包
v:显示运行过程
f:指定文件名
-C:指定解压位置

```

## 安装应用

- sudo dpkg -i 文件名.deb
- sudo apt install 软件名

## 终端

### 快捷键

ctrl+ALT+T

### 分类

- bash
- sh

1.查看终端
cat /etc/shells
2.切换终端
chsh -s /bin/终端名

## 配置你的ubuntu

### 换源

- 清华源网站选择版本
- 复制源链接
- sudo gedit /etc/apt/sources.list
- sudo apt update
- sudo apt upgrade

### 配置你的浏览器

- 搜索引擎bing
- edge

### 必备软件

- git apt
- vscode
- linux qq

- clash
- anaconda/miniconda (算法)
- utools
- todesk


zsh
bash

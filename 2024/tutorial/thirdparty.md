# thirdparty

## 命令方式

```shell
sudo apt install libXXX-dev  #libXXX-dev
sudo apt install XXX  #直接包名
#安装位置：/usr/lib /usr/include

-----------------------------------------------------

#ROS
sudo apt install ros-noetic-usb-cam #ros-版本-功能包名
#安装位置：自查

-----------------------------------------------------

#python
pip install opencv-python
pip install opencv-python -i pip清华源网址
#安装位置：自查
```

> 卸载方式：自查
> 优点：安装便捷
> 缺点：难以进行版本控制

## 源码方式

> 源码获取方式：github、gitee...

```shell
# cmake构建安装  源码最外层目录中有CMakeLists.txt
1.git clone 代码  或者  下载压缩包解压
2.code打开源码
3.源代码管理->tag选择版本
4.mkdir build
5.cd build
6.cmake ..
7.make 或者 sudo make
8.sudo make install

------------------------------------------------
卸载
build中
sudo make uninstall
```

```shell
# configure构建安装
1.git clone 代码  或者  下载压缩包解压
2.进入源码目录找到configure文件
3.mkdir build
4.cd build
5. ../configure --prefix=/usr/local  #生成makefile，并指定库的安装位置
6.make 或者 sudo make
7.sudo make install
```

> pip源码安装自查

## 直接拷贝

> .so .a文件直接拷贝到/usr/local/lib下
> 对应的头文件放在/usr/local/include,方便直接引用

## deb安装

## 最有效的安装方式

> 看第三方库仓库中的README.md !!!

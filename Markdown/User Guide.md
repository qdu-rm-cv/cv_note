# RM视觉总结

## 关于对比赛和视觉的总结

## 环境配置和依赖安装

### Linux

1. #### **Ubuntu**

   - *Ubuntu20.04*
     - 个人PC使用的OS，也是大部分时间操作的系统，从入队开始饱受折磨，最后慢慢捣鼓会了。
     - 但是没想到的是，几天前崩了，然后改用了Pop
   - *Ubuntu18.04*
     - NX的OS，架构`Armhf`，而不是`X86` 
   - Ubuntu16.04
     - 哈哈哈操，是妙算的OS，也是`Armhf`

2. #### **WSL**

   - Ubuntu20.04
     - 没有CUDA，不支持硬件层（USB）
     - 再升级到Win内测（现在已经是Win11），可以使用WSLg，支持了GUI，可以进行imshow等需要GTK支持的操作。

3. #### **虚拟机**

   - 不喜欢用，因为PC的问题，比较拉胯

4. #### **Pop_OS!**

   - 现在在使用的OS
   
   - 优点：
     - 开局自带CUDA和Nivida驱动
     - 与Ubuntu不同的UI设计
     - More ***Modern*** and ***Beautiful***
     - 更适合中国用户体验
     
   - 缺点：
     - 不同的UI设计导致一些控件不可使用、比如VSC的View : Panel Manage、Gnome extension tweak的资源监视等。
     - 貌似代理不太好使的样子，Clash 和electron-SSR均阵亡，也可能是没调教好
     

---

  

### 常用的工具

1. cutecom
2. code
3. MVS客户端
4. git
5. cmake

---



### 依赖

1. GoogleTest

   1. 链接：

      [GItHub原链接](https://github.com/google/googletest.git)、[Gitee镜像链接](https://gitee.com/c12h22o11/googletest.git)

   2. 说明：

      跨平台的C++单元测试框架，使用各种宏定义来测试不同的函数功能。在视觉开发时，一个函数修改往往牵一发而动全身，单纯为了修改和测试一个函数所带来的开销是不可估量的。因此我们进行单元测试，简单的可以进行类似于main函数的操作。

      同时也是其他库的基础依赖之一（BT、OpenCV）

   3. 安装：

      ````shell
      
   ````
      

2. BehaviourTree.CPP

   1. 链接：

      [GItHub原链接](https://github.com/BehaviorTree/BehaviorTree.CPP)、[Gitee镜像链接](https://gitee.com/c12h22o11/BehaviorTree.CPP.git)
      
   2. 说明：

      AI控制的行为树组件，是一个比较成熟的C++的行为树库。

      暂时未进行研发和编写，原因是在现在已有仓库代码的基础上改动过于困难。

      

      ***学习得到的经验积累***

      1. [官方说明文档](https://www.behaviortree.dev/)

      2. 树的基础是节点和线径，前者是BT库的最核心的操作，后者则为设计者的需求。在其中要掌握blackboard和background的理念

      3. 详见docs、sample_nodes、examples进行更一步的学习

      4. 可以使用GUI进行树状图的绘制`Groot`，官方README有提

         ````shell
         sudo apt-get install libzmq3-dev libboost-dev
         mkdir build; cd build
         cmake ..
         make
         sudo make install
         ````

   3. 安装：

      ```shell
      
      ```
      

3. Spdlog

   1. 链接：
   2. 说明：
   3. 安装：

4. oneTBB

   1. 链接：
   2. 说明：
   3. 安装：

5. OpenCV

6. MVS

   1. 链接
   2. 说明：
   3. 安装：

7. CUDA

8. TensorRT

   

---



  


## 开发经验和对IDE的掌控

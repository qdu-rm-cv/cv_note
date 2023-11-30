# git

- 分布式版本控制系统
- 方便我们管理这些不同版本的文件
- 多人协作

![git](assets/git-command.jpg)

## 安装

```shell
sudo apt install git
sudo apt-get install git
```

## 配置

```shell
git config --global user.email "你的邮箱地址"
git config --global user.name "你的名字"
```

> 配置一次即可

## 区域

- Remote：远程仓库
- Repository：本地仓库
- index：暂存区
- workspace：工作区

## 流程

### 创建远程仓库

github or gitee

### 创建本地仓库

mkdir

> 注意文件夹的命名要规范！！！

### 初始化仓库

进入文件夹

```shell
git init
```

### 添加远程仓库

```shell
git remote add origin http://*.git
```

> origin 为远程地址的别名

### 提交代码

- 工作区---->暂存区---->本地仓库---->远程仓库

1: 工作区---->暂存区

```shell
git add 文件名/目录名 #添加文件到暂存区
git add . #添加所有文件

#查看文件状态
git status  #新增文件和修改后的文件都是红色

git status -s #简短输出

```

2: 暂存区---->本地仓库

```shell
git commit -m "信息描述" # commit 附带信息
```

3: 本地仓库---->远程仓库

```shell
git push origin master  #上传代码到 master 分支
```

> 注意分支名！

### 下拉代码

- 远程仓库---->本地仓库[---->工作区]

1: 远程仓库---->本地仓库

```shell
git clone http://*.git  #clone 代码
```

2: 本地仓库[---->工作区]

切换分支[可选，不切换就是默认分支]

### 更新代码

- 远程仓库---->本地仓库

```shell
git pull origin master
```

> 有时候主分支是master，有时候主分支是main

### 分支

#### 查看分支

```shell
git branch
```

#### 创建分支

```shell
git branch 分支名称
```

#### 切换分支

```shell
git checkout 分支名称
```

#### 合并分支

```shell
git merge 要合并的分支
```

> 要切换成你想最终保留的分支

#### 删除分支

```shell
git branch -d 分支名称
```

### github、gitee

#### fork

#### pull request

PR

## coursework

- gitee\github创建远程仓库
- 创建本地仓库、helloworld程序
- 上传到自己仓库

- 每组clone自己组内的代码

### 更新第三方库

```shell
git submodule update --init --recursive
```

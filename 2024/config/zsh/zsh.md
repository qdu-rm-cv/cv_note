# ZSH安装

## 安装zsh

```shell

#ubuntu

sudo apt install zsh

```

## 安装超级终端terminator

```shell

#ubuntu

sudo apt install terminator

```

> 确保你先安装zsh再安装terminator

安装完成terminator后，会进入zsh配置界面

根据英文提示选项输入你想要的配置主题

> 可以跳过

配置之后会在主目录生成**.zshrc**的配置文件

相当于bash的**.bashrc**,如果你以后的终端使用zsh的话

配置环境变量要修改.zshrc而不是.bashrc

## 安装oh-my-zsh主题

> 在你安装之前要先安装git、wget

- 手动安装

```shell
git clone https://github.com/ohmyzsh/ohmyzsh.git ~/.oh-my-zsh
cp ~/.oh-my-zsh/templates/zshrc.zsh-template ~/.zshrc
```
重新打开终端

如果主题变了，恭喜你已经安装好了

- 配置主题

```shell
git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ${ZSH_CUSTOM:-$HOME/.oh-my-zsh/custom}/themes/powerlevel10k
```
- 修改.zshrc使主题生效

```shell

sudo gedit ~/.zshrc

将
ZSH_THEME="robbyrussell"
改为
ZSH_THEME="powerlevel10k/powerlevel10k"

重新打开终端

根据英文提示选择主题

```

接下来我们需要配置以下**插件**


## 配置插件

### zsh-autosuggestions命令提示插件

```shell

git clone https://github.com/zsh-users/zsh-autosuggestions ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-autosuggestions

#修改.zshrc

#搜索plugins,添加以下内容

plugins=(git
    zsh-autosuggestions  # 插件之间使用空格隔开
)

```
打开终端，输入命令会有浅色提示

按键盘向右的按键可以补全

> 注意和tab补全区别一下
> zsh中也可以用tab补全

### zsh-syntax-highlighting命令语法校验插件

```shell

git clone https://github.com/zsh-users/zsh-syntax-highlighting.git ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-syntax-highlighting 

#修改.zshrc

#搜索plugins,添加以下内容

plugins=(git
    zsh-autosuggestions  # 插件之间使用空格隔开
    zsh-syntax-highlighting
)
```

## 最后一步

你会发现，你在文件夹下按右键、e打开终端，仍然是bash

这时候，请在bash中输入

```shell

chsh -s /bin/zsh

```

然后重启

大功告成！！！

> 下面的场景你要改变

> source ./devel/setup.bash的时候
> 改为source ./devel/setup.zsh

> 修改环境变量时.bashrc改为.zshrc




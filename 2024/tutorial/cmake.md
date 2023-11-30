# CMAKE

## CMakeLists.txt

## 使用方法

### 常见内置变量

| Variable                 | Info                                                       |
| :----------------------- | :--------------------------------------------------------- |
| CMAKE_SOURCE_DIR         | 根源代码目录，工程顶层目录。暂认为就是PROJECT_SOURCE_DIR   |
| CMAKE_CURRENT_SOURCE_DIR | 当前处理的 CMakeLists.txt 所在的路径                       |
| PROJECT_SOURCE_DIR       | 工程顶层目录                                               |
| CMAKE_BINARY_DIR         | 运行cmake的目录。外部构建时就是build目录                   |
| CMAKE_CURRENT_BINARY_DIR | The build directory you are currently in.当前所在build目录 |
| PROJECT_BINARY_DIR       | 暂认为就是CMAKE_BINARY_DIR                                 |

> message输出

> cmake内置命令不区分大小写

> cmake内置变量和自定义变量区分大小写

### 自定义变量

```cmake
set(<variable> <value>...)

set(SOURCES
    src/Hello.cpp
    src/main.cpp
    )

${SOURCES} #解析
```

### 指定最小版本

```cmake
算法：
cmake_minimum_required(VERSION 3.12)

电控：
cmake_minimum_required(VERSION 3.13)
```

### 工程名称

```cmake
project(工程名称)
```

### 生成可执行文件

```cmake
add_executable(可执行文件的名称 源文件)
#此处的源文件为 .cpp文件

例如：
add_executable(hello_world src/Hello.cpp src/main.cpp)
```

### 头文件搜索

```cmake
target_include_directories(hello_headers
    PRIVATE
    include/
)
```

### 库

#### 使用静态库

```cmake

1.生成静态库
add_library(hello_library STATIC  #STATIC参数表明是静态库
    src/Hello.cpp
    )


2.为静态库指明头文件路径
target_include_directories(hello_library
    PUBLIC
        include/
)

---------------------

add_executable(hello_binary
    src/main.cpp)

---------------------

3.链接静态库
target_link_libraries(可执行程序名称
    PRIVATE
        hello_library
)
```

> 关于PUBLIC、PRIVATE、INTERFACE

#### 使用动态库

```cmake

1.生成动态库
add_library(hello_library SHARED
    src/Hello.cpp
)

2.为动态库起别名（可选）
add_library(hello::library ALIAS hello_library)

3.为动态库指明头文件路径
target_include_directories(hello_library
    PUBLIC
        include/

---------------------

add_executable(hello_binary
    src/main.cpp)

---------------------

4.链接库
target_link_libraries( hello_binary
    PRIVATE
        hello::library
)
```

#### 查找第三方库

```cmake
find_package(Boost 1.46.1 REQUIRED)

Boost:库名称
1.46.1：最低支持版本
REQUIRED：告诉模块这是必需的，如果找不到会报错


find_package(Opencv REQUIRED)


查找 FindXXX.cmake
找到之后会生成变量：
XXX_FOUND
XXX_INCLUDE_DIR
XXX_LIBS
这些变量可以在后续直接使用
```

> cmake学习痛点
> 1.包含大量内置变量
> 2.部分情况大小写不敏感
> 3.使用的命令可用其他命令替代实现
> 4.部分命令长相过于相似，令初学者混淆
> 5.使用部分命令会生成一些你不知道的变量
> 6.存在自己定义的cmake脚本，你将误以为它是cmake内置函数
> 7.cmake良心教程匮乏，大部分教程为机器翻译、错综复杂，不适合新手入门学习

```cmake

find_package(Boost 1.46.1 REQUIRED)


--------------------------------------------
add_executable(third_party_include main.cpp)
--------------------------------------------


target_link_libraries( third_party_include
    PRIVATE
        Boost
)
```

### 输出信息

```cmake
message()

message(STATUS "${PROJECT_NAME}")
```

### 常用

```cmake
cmake_minimum_required(VERSION )

add_executable()

target_include_directories()

add_library()

target_link_libraries()

find_package()

```

### 易混淆

```cmake


--------------------------
target_link_libraries()

link_libraries()  尽量不要用！
--------------------------


----------------------------
target_include_directories()

include_directories()  尽量不要用！
----------------------------


----------------------------------------
            ！！！用得少！！！
----------------------------------------
taget_link_directories()

link_directories()   尽量不要用！

如果必须提供库搜索路径
则最好尽可能使用 target_link_directories()
而不是 link_directories()
----------------------------------------


------------------------------------------------
add_library()   生成库

find_package()  寻找库，并且是带有FindXXX.cmake的库
------------------------------------------------

```

### $<...>生成器表达式

> 在CMake生成构建系统的时候根据不同配置动态生成特定的内容

```cmake
$<STREQUAL:string1,string2>：判断字符串是否相等

$<BOOL:string>：如果字符串为空、0、不区分大小写的FALSE、OFF、N、NO、IGNORE、NOTFOUND或者区分大小写以-NOTFOUND结尾的字符串，则为0，否则为1

$<AND:conditions>：逻辑与  #conditons是以逗号分割的条件列表

$<OR:conditions>：逻辑或

$<NOT:condition>：逻辑非

$<TARGET_EXISTS:target>：判断目标是否存在

$<TARGET_PROPERTY:target,INTERFACE_INCLUDE_DIRECTORIES>：获取target的INTERFACE_INCLUDE_DIRECTORIES的值

#当一个目标（例如，库或可执行文件）被其他目标链接时，它的INTERFACE_INCLUDE_DIRECTORIES属性会被继承给依赖它的目标。这样，依赖目标就能够访问到被链接目标的包含目录，以便在编译时找到所需的头文件。
```

### private pubic interface

- PRIVATE  目录被添加到目标（库）的包含路径中。
- INTERFACE  目录没有被添加到目标（库）的包含路径中，而是链接了这个库的其他目标（库或者可执行程序）包含路径中
- PUBLIC  目录既被添加到目标（库）的包含路径中，同时添加到了链接了这个库的其他目标（库或者可执行程序）的包含路径中

例如：my_library库有三个文件
私有源文件：my_library_private.cpp
公开源文件：my_library_public.cpp
接口头文件：my_library_interface.h

my_library_private.cpp只能被my_library自身访问
my_library_public.cpp可以被my_library和其他依赖my_library的目标访问
my_library_interface.h只能被依赖my_library的目标访问

### file()

#### file GLOB

>该命令主要用于匹配规则在指定的目录内匹配到所需要的文件

```cmake

file(GLOB SOURCES "src/*.cpp")
#使用*这个通配符，表示所有.cpp结尾的文件都会包含到这个SOURCES变量

#例如
file(GLOB ${PROJECT_NAME}_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    )
```

> 不建议使用glob
> 指定源文件最好的办法就是列出它们来

```cmake
set(SOURCES
main.cpp
hello.cpp
)
```

### install

### add_dependencies

```camke
add_dependencies(target dependencies1,dependencies2...)

# 该命令会告诉编译器首先编译依赖
```

## 子工程

```cmake
add_subdirectory()
```

## 配置文件

[by yourself](https://sfumecjf.github.io/cmake-examples-Chinese/03-code-generation/configure-files/)
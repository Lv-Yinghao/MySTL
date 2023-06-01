MyTinySTL
=====

## 简介
   基于 `C++11` 的 `tinySTL`，这是我的第二个项目，在做项目之前拜读了侯捷老师的《STL源码剖析》，这本书扫清了我对STL大部分的疑惑，给予了我很大的启发。同时，我参考了另一位优秀的程序设计者的作品：https://github.com/Alinshans/MyTinySTL ，这些资料帮助我初窥STL的魅力。不过，目前仅仅实现了vector、deque和list这三个常见的序列式容器，后续其他容器还在更新中。

## 支持

* 操作系统
  * linux
  * windows
  * osx
* 编译器
  * g++ 5.4 或以上
  * clang++ 3.5 或以上
  * msvc 14.0 或以上

## 运行

  * Linux
  1. 克隆仓库
```bash
$ git clone git@github.com:Alinshans/MyTinySTL.git
$ cd MyTinySTL
```
  2. 构建并运行
```bash
$ mkdir build && cd build
$ cmake ..
$ make
$ cd ../bin && ./stltest
```

  * Windows
  1. 克隆仓库
  2. 使用 `vs2015`（或 `vs2017`）打开 `MSVC/MyTinySTL_VS2015.sln`，配置成 `Release` 模式，（Ctrl + F5）开始执行。
  

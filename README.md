  1. MyTinySTL
     =====

     ## 简介

        基于 `C++11` 的 `tinySTL`，这是我的第二个项目，本项目参考了github上的一些优秀的开源项目，同时也参考了侯捷老师的《STL源码剖析》，书中的一些实例让我对C++标准库有了更深层次的了解。

     ​	本项目选择了vector、list、deque和unordered_map五类常用容器进行实现，同时可以搭配迭代器进行使用，后面对标准库的容器和算法编写了单元测试用例，其中用宏定义封装了很多测试过程，这也是我第一次自己使用C++编写测试框架，无论是从容器实现还是测试，这个项目都带给我很大的收获。

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

       * VS on windows

         1. 克隆仓库
         2. 使用 `vs2015`打开 `MSVC/MyTinySTL_VS2015.sln`，配置成 `Release` 模式后，直接开始执行。

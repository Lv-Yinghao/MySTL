MyTinySTL
=====

## 简介

   基于 `C++11` 的 `tinySTL`，这是我的第二个项目，本项目参考了github上的一些优秀的开源项目，同时也参考了侯捷老师的《STL源码剖析》，书中的一些实例让我对C++标准库有了更深层次的了解。

​	本项目选择了vector、list、deque和unordered_map五类常用容器进行实现，同时可以搭配迭代器进行使用，后面对标准库的容器和算法编写了单元测试用例，其中用宏定义封装了很多测试过程，这也是我第一次自己使用C++编写测试框架，无论是从容器实现还是测试，这个项目都带给我很大的收获。

## 运行

  * 使用 VS 打开

    1. 克隆仓库
    2. 使用 `vs2015`打开 `MSVC/MyTinySTL_VS2015.sln`，配置成 `Release` 模式后，直接开始执行。
   
## 测试计划

   本次测试分为迭代器和容器两部分，其中迭代器的测试放在四个不同容器下，针对四个不同容器的不同类别的方法展开测试。下面是具体的测试用例的编写：

### 迭代器：

   ![迭代器](https://github.com/Lv-Yinghao/MySTL/assets/76142149/4bb03fb2-415d-4421-9f7f-cf28a1ebc5a9)

### 序列式容器

   **vector:**
   vector是一个经典的基于动态数组的数据结构，测试时要特别注意容器扩容和迭代器失效的问题。
   
   ![vector](https://github.com/Lv-Yinghao/MySTL/assets/76142149/301ec062-ab39-4fca-a441-3177f6a5b608)

   **deque:**
   deque是一个典型的双端队列，针对其测试用例的设计相比vector会有pop_front和push_front两个首部元素的增删方法。
   
   ![deque](https://github.com/Lv-Yinghao/MySTL/assets/76142149/6a5efa25-8993-4ac1-9c8a-61ccc6125a54)

   **list:**
   list底层结构是一个链表，其测试用例的设计和deque相差并不大，所以在STL中会多一些链表的操作方法，比如链表和并，链表去重和链表排序等。
   
   ![list](https://github.com/Lv-Yinghao/MySTL/assets/76142149/c9759ae9-1d08-411e-86cc-bddaf8554c45)

### 关联式容器

   **unordered_map:**
   unordered_map的底层是哈希表，使用拉链法解决哈希冲突的问题，在元素数量超过哈希桶时，会选择一块新接近于原内存两倍的的内存重新哈希，其有一些独特的方法，实现起来和序列式容器略有不同。
   
   ![unordered_map](https://github.com/Lv-Yinghao/MySTL/assets/76142149/ab2010ee-a072-4d7f-afa6-6aed1b7c7ee6)


## 测试结果展示

   **vector:**
   ![vector测试结果](https://github.com/Lv-Yinghao/MySTL/assets/76142149/2c2cb80f-b368-4667-93f0-f6915a10dc96)

   **deque:**
   ![deque](https://github.com/Lv-Yinghao/MySTL/assets/76142149/dbeedad6-a0a7-413c-aa45-773ccbf4856a)

   **list:**
   ![list测试结果](https://github.com/Lv-Yinghao/MySTL/assets/76142149/f5c61957-1ecb-4e66-85b2-e7956378efc0)

   **unordered_map:**
   ![unordered_map](https://github.com/Lv-Yinghao/MySTL/assets/76142149/b5eb76ad-02bd-49d9-93fb-b469302fd765)


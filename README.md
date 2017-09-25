# HBUT-GPA-Calculate
湖北工业大学绩点计算小程序，素质测评用
---

#### 注意！本代码仅适用于湖北工业大学本部的绩点计算，计算依据来自run.hbut.edu.cn

### 使用方法

所需依赖 `git`,`g++`
```
git clone https://github.com/Alleysakura/HBUT-GPA-Calculate.git
cd HBUT-GPA-Calculate
make
./HBUT_GPA_Calculate
```
第一行为需要统计的课程数量，第二行为每门课程所占的学分（例:高数5.5）第三行为学生人数。接下来每一行是每个学生每门的成绩

### tips
将成绩统计好的excel表导出成csv格式，再用记事本打开csv文件，全选后把逗号替换为空格，这样就成了标准的程序输入格式，复制粘贴后就能计算完绩点非常快

---

### 如果你懂得acm的代码调试

添加`mainauto.cpp`里的内容来打开关闭你的测试数据文件

第一行为需要统计的课程数量，第二行为每门课程所占的学分（例:高数5.5）第三行为学生人数。接下来每一行是每个学生每门的成绩。
##### Sample Input
```
6
5.0 5.5 3.0 0.5 4.0 2.5
3
60 60 60 60 60 60
70 70 70 70 70 70
85 85 85 85 85 85
```

##### Sample Output
```
1.0000
2.0000
3.5000
```

---

#### License

MIT

Copyright (c) SakaraHiroya

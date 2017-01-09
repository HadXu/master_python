# 持续更新中
## Python3 的学习

# Anaconda 3.5安装完需要装的东西

----------
## 最近在学习Python3.5，由于怕各种环境混合起来，于是就搭建了两个典型的环境也就是机器学习环境与web开发环境。

[Anaconda镜像](https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/free/)
----------

## 首先是web开发环境

    conda create --name web-develop python=3.5
    activate web-develop
    conda install jupyter
    conda install django
    conda install -c menpo opencv3
	  conda install pymongo
	  pip install mongoengine
	  conda install pymysql
	  conda install anaconda  #安装anaconda中的所有包
	  conda install scrapy
	  

还有一些其他的web开发库还没有想到，等想到就添加进去。

----------


## 机器学习环境

    conda create --name deep-learnig python=3.5
    activate deep-learning
    conda install jupyter
    conda install scipy
    conda install tensorflow
    conda install keras #修改theano/compat/__init__.py 46行 'gbk'
    conda install gensim
    pip install jieba
	  conda install -c menpo opencv3
	  conda install scikit-learn
	  conda install anaconda  #安装anaconda中的所有包

暂时想到这么多，想到再添加。





1. [第一章 数据结构与算法](https://github.com/HadXu/master_python/blob/master/chapter1.ipynb)
2. [第二章 文本与字符串处理](https://github.com/HadXu/master_python/blob/master/chapter2.ipynb)
3. [第三章 数字与日期](https://github.com/HadXu/master_python/blob/master/chapter3.ipynb)
4. [第四章 迭代器](https://github.com/HadXu/master_python/blob/master/chapter4.ipynb)
5. [第五章 文件与IO](https://github.com/HadXu/master_python/blob/master/chapter5.ipynb)
## 参考文件
[python cookbook](https://github.com/ia-cas/pandas-cookbook)



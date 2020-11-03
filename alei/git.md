# TASK-4

****

***

​																									————信卓2001曾仕磊

#### 仓库（ **Repository** ）

> > > 啥是仓库？想开源就需要创建一个仓库用于存放项目代码

* 创建仓库相关指令
  * `mkdir `+名字

    `cd `+名字

    `pwd `查看位置

  * `git init`变成git管理仓库     

####  **复制克隆项目（Fork）** 

> > >  什么是`fork`？？？

* 相当于一个独立存在的复制项目。如果看上了那个项目，就在项目主页右上角FORK这个项目，然后自己的主页上就多了一个项目，类似于copy，在这个copy项目上做的改的不会影响到本来的项目

####  **发起请求（Pull Request）** 

> > >  那么问题来了，之前fork的项目如果改得很好，就连开源的人也想要怎么办？？

* 有一个配合fork的操作：pull。将fork改进之后的东西PR，开源者就会看到，并且考虑是否将这个改进之后的项目加到原有的项目上

#### 提交添加文件

> > >

* 要把文件放到这个仓库下

  git add

* git commit -m“文件说明”   提交文件

#### 时光机

> > > git hub 可以回到改之前的文件状态，这又是如何操作的？

* 两个区

  * 工作区：就是咱们看到的目录了
  * 暂存区：第一步`git add`添加的文件还没有添加到项目之中，而是存在一个叫做暂存区的地方，第二步的指令`git commit` 可以把暂存区的文件一次性提交到当前分支

* 跟踪修改：每一次修改 如果不用`git add`到暂存区，那就不会加入到`commit`中。 

* 撤销修改

  * 在工作区：命令`git checkout -- <file>`意思就是，把文件在工作区的修改全部撤销,就是让这个文件回到最近一次`git commit`或`git add`时的状态。

  *  在暂存区：用命令`git reset HEAD <file> `可以把暂存区的修改撤销掉 .回到了暂存区再用checkout

  * 在版本库：`git reset --hard HEAD^`（回到上一个版本）

    ​					`HEAD~100`（回到上100个版本）

    ​					再往前修改 `git reset --hard 版本号` 

* `git status` 查看仓库状态

* `git diff `查看修改的地方

* `git log` 历史记录

* `git reflog `记录每一次命令

*  `git branch -r `查看远程所有分支 

#### 远程仓库（remote Repository）

> > > 如之前所说， `GitHub`告诉我们，可以从这个仓库克隆出新的仓库，也可以把一个已有的本地仓库与之关联，然后，把本地仓库的内容推送到`GitHub`仓库。 

* 关联远程库 

  ````
  git remote add origin git@github.com:michaelliao/learngit.git
  ````

   `michaelliao`替换成`GitHub`账户名 

*  把本地库的内容推送到远程，用`git push`命令，实际上是把当前分支`master`推送到远程。 `git push -u <name of remote Repository> <branch>`
* 关联后，使用命令`git push -u origin master`第一次推送master分支的所有内容

> > >如果现有远程库，那么，如何clone？

*  要克隆一个仓库，首先必须知道仓库的地址，然后使用`git clone`命令克隆。 

#### 分支（Branch）

> > >  




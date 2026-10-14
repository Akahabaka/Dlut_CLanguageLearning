# Dlut_CLanguageLearning
只是记录我在大工的程序设计课程的练习和作业

## 两台电脑使用与同步（VS Code + GitHub）

本仓库的代码通过 GitHub 在两台电脑之间同步。每台电脑都要各自克隆一次仓库；不要把同一个文件夹放进网盘同步目录。

### 第一次设置另一台电脑

1. 安装 [Git for Windows](https://git-scm.com/download/win) 和 [Visual Studio Code](https://code.visualstudio.com/)。
2. 打开 VS Code，按 `Ctrl+Shift+P`，运行 `Git: Clone`。
3. 粘贴仓库地址：`https://github.com/Akahabaka/Dlut_CLanguageLearning.git`，选择一个存放作业的文件夹。
4. 克隆完成后，选择“打开”。如果 VS Code 要求登录 GitHub，按提示登录拥有此仓库写入权限的账号。
5. 首次提交时若提示设置 Git 作者姓名和邮箱，在终端按提示设置。邮箱建议使用 GitHub 设置里提供的 `noreply` 邮箱。

### 每次换电脑时

1. 在当前电脑把代码保存好，在 VS Code 左侧“源代码管理”里填写提交说明，点“提交”，再点“同步更改”（首次可能要点“发布/推送”）。
2. 等同步完成后再换到另一台电脑。打开项目后，先点状态栏的同步按钮，或在“源代码管理”菜单中选择“拉取”，再继续编辑。
3. 编辑完成后再次“提交”并“同步更改”。VS Code 会自动获取 GitHub 上的新版本；若两台电脑同时改了同一个文件，按 VS Code 的冲突提示合并后再提交。

本项目已开启 VS Code 自动获取远程更新。获取更新不会自动提交你的修改；同步前仍需先提交，这样可以避免未完成的作业内容被意外覆盖。GitHub 登录只需在每台电脑各做一次。

仓库会忽略所有 `.exe` 文件。它们只保留在各自电脑上，不会随 GitHub 同步；如果某台电脑删除了本地 `.exe`，重新编译即可生成。

### C 语言编译

当前 `.vscode/tasks.json` 使用 `C:\\mingw64\\bin\\gcc.exe`。如果另一台电脑的 GCC 安装路径不同，需要修改该文件中的 `command` 路径。

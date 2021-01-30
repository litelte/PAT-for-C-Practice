###
 # @Date: 2020-04-25 18:03:20
 # @LastEditors: litelte
 # @LastEditTime: 2021-01-30 00:52:12
 # @FilePath: /pat/.vscode/g.sh
 # @Description: 一个自动化git的脚本
 ###
#  zsh的git命令，相关链接：https://segmentfault.com/a/1190000011197249
# alias ga='git add'
# alias gb='git branch'
# alias gba='git branch -a'
# alias gbd='git branch -d'
# alias gcam='git commit -a -m'
# alias gcb='git checkout -b'
# alias gco='git checkout'
# alias gcp='git cherry-pick'
# alias gd='git diff'
# alias gfo='git fetch origin'
# alias ggpush='git push origin $(git_current_branch)'
# alias ggsup='git branch --set-upstream-to=origin/$(git_current_branch)'
# alias glgp='git log --stat -p'
# alias gm='git merge'
# alias gp='git push'
# alias gst='git status'
# alias gsta='git stash save'
# alias gstp='git stash pop'
#!/usr/bin/env sh
set -e
cd ~/../CProject/pat
git add .
git commit -a -v -m "A new update,good luck bro!"
# 可选，查看此次提交与上次提交的差别
# git diff HEAD^
cd -
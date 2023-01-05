@echo off
python ./cpp_to_md.py
mkdocs build
git reset
git add ./site
git commit -m "auto build"
git push
echo git success
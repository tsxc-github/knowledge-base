@echo off
python ./cpp_to_md.py
mkdocs build
python ./del_cppmd.py
git reset
git add ./site
git commit -m "auto build"
git push
echo build finish
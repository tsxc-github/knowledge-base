@echo off
python ./cpp_to_md.py
mkdocs build
python ./del_temp_file.py
git reset
git add ./site
git commit -m "auto build"
git push
echo build finish
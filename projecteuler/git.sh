read -p "Enter file name : " name
git add $name
read -p "Enter commit message : " message
git commit -m "$message"
git push

echo "$(tput setaf 1)-----------Hello Akash! welcome in gihub-------------"
read -p "Enter file name : " name
git add $name
read -p "Enter commit message : " message
git commit -m "$message"
git push

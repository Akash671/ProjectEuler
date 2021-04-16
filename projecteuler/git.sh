echo "$(tput setaf 31)+---------------------------------+"
echo "$(tput setaf 31)|                                 |"
echo "$(tput setaf 31)|            @Akash671            |"
echo "$(tput setaf 31)|                                 |"
echo "$(tput setaf 31)+---------------------------------+"
echo "$(tput setaf 21)-----------Hello Akash! welcome in gihub-------------"
read -p "Enter file name : " name
git add $name
read -p "Enter commit message : " message
git commit -m "$message"
echo "$(tput setaf 41)Your message is : $message"
git push
echo "$(tput setaf 31)+---------------------------------+"
echo "$(tput setaf 31)|                                 |"
echo "$(tput setaf 31)|    Thank You! Akash Kumar       |"
echo "$(tput setaf 31)|                                 |"
echo "$(tput setaf 31)+---------------------------------+"

# /bin/bash

# The function to commit all the files.
function auto_commit(){
for (( counter=0; counter < $num_files; counter++ ))
do
add="$(git add ${files[$counter]})"
commit="$(git commit -m autoCommit.sh)"
echo $commit
push="$(git push origin master)"
echo $push
done
}

# intialzing the git and then getting the uncommitted files and add then to a new file named check
git_init="$(git init)"
git_commit_file="$(git commit -m 'check' > check.txt)"

# The input from the user; Getting the number of files; Storing the result of the grep in an array
input=$1
num_files="$(grep -i ".$input" check.txt | wc -l)"
files=($(grep -i ".$input" check.txt)) 

if [[ $input == "" ]]
then
echo "You did not enter any extentions to auto commit."
elif [[ $num_files -ge 0 ]] # start the process to commit the files
then
auto_commit
else echo "There is no files with the extention."
fi
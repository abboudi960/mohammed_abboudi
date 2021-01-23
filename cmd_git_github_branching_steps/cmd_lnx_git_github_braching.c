Hello mr Ouadid i want to tell you about what I learned in this previous period :


- Basic command lines of linux : 

ls : it show you the files and directories of your home or any directory you are in. 
Ls -l or ll : they show you a long listing of your files and directories of your home or any directory you are in .
Ls -l /path/  :it show you files and directories depending about your path specification of your directory . 
ls / : it show you your folders and files system. 
Ls -l / : it show you the long listing of your folders and files system.
ls -l / ( directory name ) : you'll get in the directory that you write (directory name). 
Ls -a : it show you the files and directories of your home or any directory you are in even the hidden one. 
pwd : for know where you are. 
cd ( directory name ) : changing your position between directories.
cd ~ : it’s like a reset ( exp : if the home was the first position after you applicated cd ~ whatever your place you'll going to the home. 
cd .. : you'll go back once .
cd - : you'll go back to the previous position. 
cd /.../.../ ( path ) : you'll go to the directory that you wrote in the end of the path .
ctrl + l or type clear : you’ll clear up the terminal . 
mkdir : it create a directory.
touch : it create a file.
rmdir or rm : it remove a directory. 




mkdir . directory name : it create a hidden directory.
touth . file name : it create a hidden file 
rm : it remove the files. 
ln : it create links ( shortcut ) for a file a directory. 
cat < file name : you just show the content of the file. 
cat > file name : you can show the content and modify about it too. 
mv ( file name ) ( another folder name ) : it rename the files and directories ever you want. 
mv ( file name ) path : also it can move the files and directories depending about the path.
also if you want to return the files or directories to their previous location you can do it by typing the path before the file path  (file name ).
cp file1 file2 : it make a copy from the file1 content and paste it in the file2 if there is a file2 , if not , you’ll create it then paste the content .
cp -v : you'll copy the file or directory and the program will show you a message for your operating.
cp -f : youI copy the file or directory even if there are bugs. 
cp -R : old1 new2 : you'll create new2 then copy the content of old1 and past it in the new2 cp -R old1 old2 : you'll find the copy of old1 with its content and past it in the old 2.
cp -i : you overwrite the file (it delete anything in the file then paste the copy into it). 
sort file name : it show you the content organized alphabetically from the top to the bottom. sort -r file name : it show you the content organized alphabetically from the bottom to the top. 





sort -n file name : it show you all the numbers in the file organized from the smaller to the bigger. 
sort -nr file name : it show you all the numbers in the file organized from the bigger to the smager
man flag : it show you the usage flag or what flag doing. 

- Git and Github :

it’s a tool or a small programme that puts you in touch with your account on github that such as a server or a platform allows you to upload your files and directories on it to save them and doing changes every time from your local.


so when you want to install git you’ll using : sudo apt - git install git -y
and if you wat to know what version you already installed you’ll using : git -- version

-( Git , Github ) with linux :

We create a directory first and name it git , after that we gonna choose it by the cd command :
cd git 
secondly we gonna do the configuration by using :
git config -- global user.name “ your user name “
git config -- global user.email “ your email “
git clone (....url.....) you’ll find the url on your account github .
so now you linked your github with your local successfully.
you’ll find your directory git on github.

	-uploading a file to your Github :

when you create your file into your directory which called git you must to add it to staging area first by using :
git add . : to add all the files to the staging area or to make them tracked .
or you can add just one file by using :
git add  ( file name )
to check the files status :
git status 
then you should to commit the file by using git commit -m “comment” file name .
if you want to get out a file : git rm -- cached ( file name ).
ultimately you can push your files to the github by using :
git push -u origin master or git push -u origin main .
git pull : you’ll pull all the modifications

	-branching :

git branch ( branch name ) : you’ll create a branch.
git checkout ( branch name ) : you’ll get in the branch.
git checkout -b ( branch name ) : you’ll create a branch then you’ll get in it .
git branch : it show you all branches.
git branch -d ( branch name ) : you’ll delete the branch but if there is a modifications aren’t merging it’ll stop you .
git branch -D ( branch name ) : you’ll forcing the delete operation.
git branch -m : you’ll rename any branch you want.

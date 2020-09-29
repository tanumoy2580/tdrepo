#!/usr/bin/python3
print("content-type: text/html \n")

print('<head><title>Smart RHEL8 Assistance</title></head><body bgcolor="#0091ff"></body>')
import subprocess as sr
import cgi
import socket
import os

hn=socket.gethostname()
ip=socket.gethostbyname(hn)
a=cgi.FieldStorage()
b=a.getvalue("in")
c=a.getvalue("in2")
d=a.getvalue("in3")

#Shutdown the OS
if (('shutdown' in b) or ('off' in b)):
    print('<font face="Algerian" size="15" color="#4bff19" style="text-shadow: 0px 0px 0 #000000,1px -1px 0 #000000,-1px 1px 0 #000000,1px 1px 0 #000000,  -2px 0 0 #000000,2px 0 0 #000000,0 2px 0 #000000,0 -2px 0 #000000, -2px -2px 0 #ff0000,2px -2px 0 #ff0000,-2px 2px 0 #ff0000,2px 2px 0 #ff0000,-3px 0 0 #ff0000,3px 0 0 #ff0000,0 3px 0 #ff0000,0 -3px 0 #ff0000;"><center>Your OS Is Shutting Down</center></font>')
    tmp=sr.getstatusoutput("sudo shutdown now")


#Fetch my IP Address
elif 'ip' in b:
    print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    print('<hr><br>')
    print('========================================================================================')
    print('OUTPUT :-<br>')
    print('------------------<br>')
    print(ip)
    print('<br>')
    print('========================================================================================')

#Ping a server
elif ('ping' in b):
    tmp=sr.getstatusoutput("ping -c 4 {}".format(c))
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br><br>\n\n\n')
        print('========================================================================================')
        print('Below is the output :-')
        print('-----------------------\n')
        print(tmp[1])
        print('========================================================================================')


#Calender of a month
elif ((('cal' in b) or ('calender' in b)) and ('month' in b)):
    tmp=sr.getstatusoutput("cal {0} {1}".format(c,d))
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br><br>\n\n\n')
        print('========================================================================================')
        print('Below is the output :-')
        print('-----------------------\n')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Calender of a full year
elif ((('cal' in b) or ('calender' in b)) and ('year' in b)):
    tmp=sr.getstatusoutput("cal {0}".format(c))
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br><br>\n\n\n')
        print('========================================================================================')
        print('Below is the output :-')
        print('-----------------------\n')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Current date
elif ('date' in b):
    tmp=sr.getstatusoutput("date +%d/%m/%Y")
    if tmp[0] == 0:
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-<br>')
        print('------------------<br>')
        print(tmp[1])
        print('<br>')
        print('========================================================================================')


#Current time
elif ('time' in b):
    tmp=sr.getstatusoutput("date +%I:%M:%S")
    if tmp[0] == 0:
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-<br>')
        print('------------------<br>')
        print(tmp[1])
        print('<br>')
        print('========================================================================================')



#Create a folder
elif ((('create' in b) or ('make' in b)) and ('folder' in b)):
    tmp=sr.getstatusoutput("sudo mkdir {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip)) 


#Create a file
elif ((('create' in b) or ('make' in b)) and (('file' in b) or ('document' in b))):
    tmp=sr.getstatusoutput("sudo touch {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip)) 
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Delete a file or folder
elif ((('remove' in b) or ('delete' in b)) and (('folder' in b) or ('file' in b))):
    tmp=sr.getstatusoutput("sudo rm -r {} --force".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


# Create user
elif ((('create' in b) or ('add' in b)) and (('user' in b) or ('account' in b))):
    tmp=sr.getstatusoutput("sudo useradd {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


# Remove user
elif ((('delete' in b) or ('remove' in b)) and (('user' in b) or ('account' in b))):
    tmp=sr.getstatusoutput("sudo userdel -r {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Read File
elif ((('read' in b) or ('scan' in b)) and (('file-contents' in b) or ('file' in b))):
    tmp=sr.getstatusoutput("sudo cat {}".format(c))
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br><br>\n\n\n')
        print('========================================================================================')
        print('Below Is Your Output :-')
        print('------------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#List the contents in a directory
elif ((('list' in b) or ('contents' in b)) and (('location' in b) or ('directory' in b))):
    tmp=sr.getstatusoutput("sudo ls -l -h {}".format(c))
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br><br>\n\n\n')
        print('========================================================================================')
        print('Below Is Your Output :-')
        print('------------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Rename a file or folder
elif ((('rename' in b) or ('change' in b)) and (('filename' in b) or ('file' in b) or ('foldername' in b) or ('folder' in b))):
    tmp=sr.getstatusoutput("sudo mv {0} {1}".format(c,d))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Move a file or folder
elif (('move' in b) and (('file' in b) or ('folder' in b))):
    tmp=sr.getstatusoutput("sudo mv {0} {1}".format(c,d))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Copy a file or folder
elif (('copy' in b) and (('file' in b) or ('folder' in b))):
    tmp=sr.getstatusoutput("sudo cp -r {0} {1}".format(c,d))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Check whether a software is installed
elif (('check' in b) and (('software' in b) or ('installed' in b))):
    tmp=sr.getstatusoutput("sudo rpm -q {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>This package is already installed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>This package is not installed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Uninstall software
elif ((('remove' in b) or ('un' in b)) and (('install' in b) or ('software' in b) or ('package' in b))):
    tmp=sr.getstatusoutput("sudo dnf remove {} -y".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#List of all installed packages
elif ((('list' in b) or ('all' in b)) and (('installed' in b) or ('available' in b)) and (('package' in b) or ('software' in b))):
    tmp=sr.getstatusoutput("sudo rpm -q -a")
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-')
        print('------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Install software
elif ((('download' in b) or ('install' in b)) and (('software' in b) or ('package' in b))):
    tmp=sr.getstatusoutput("sudo dnf install {} -y".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Launch a docker container
elif (('docker' in b) and (('run' in b) or ('launch' in b))):
    tmp=sr.getstatusoutput("sudo docker run -dit --name {} {}".format(c,d))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Stop a running docker container
elif (('docker' in b) and (('stop' in b) or ('terminate' in b))):
    tmp=sr.getstatusoutput("sudo docker stop {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Retart a service
elif (('restart' in b) and ('service' in b)):
    tmp=sr.getstatusoutput("sudo systemctl restart {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Start a service
elif (('start' in b) and ('service' in b)):
    tmp=sr.getstatusoutput("sudo systemctl start {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Stop a service
elif (('stop' in b) and ('service' in b)):
    tmp=sr.getstatusoutput("sudo systemctl stop {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Enable a service
elif (('enable' in b) and ('service' in b)):
    tmp=sr.getstatusoutput("sudo systemctl enable {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Disable a service
elif (('disable' in b) and ('service' in b)):
    tmp=sr.getstatusoutput("sudo systemctl disable {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>Successfully Completed<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Check status of a service
elif ((('status' in b) or ('check' in b)) and ('service' in b)):
    tmp=sr.getstatusoutput("sudo systemctl status {}".format(c))
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-')
        print('------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Check running ports and their programs
elif ((('running' in b) or ('used' in b)) and ('ports' in b)):
    tmp=sr.getstatusoutput("sudo netstat -tnlp")
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-')
        print('------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Currently running processes
elif (('running' in b) and (('program' in b) or ('process' in b))):
    tmp=sr.getstatusoutput("sudo ps -aux")
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-')
        print('------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Check all network card details
elif (('network' in b) and (('adapter' in b) or ('card' in b))):
    tmp=sr.getstatusoutput("sudo ifconfig")
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-')
        print('------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Fetch the source code location of a program
elif (('location' in b) and ('source' in b)):
    tmp=sr.getstatusoutput("which {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('OUTPUT :-<br>')
        print('------------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<br><br><a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#View manual of any program or service
elif (('manual' in b) or ('document' in b) or ('draft' in b)):
    tmp=sr.getstatusoutput("man {}".format(c))
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-')
        print('------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#List of all OS commands or programs
elif ((('list' in b) or ('all' in b)) and (('command' in b) or ('program' in b))):
    tmp=sr.getstatusoutput("sudo ls /usr/bin/  ")
    if tmp[0] == 0:
        print("Go to view page source or simply press 'Ctrl+u' to see the output <br><br><br>")
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
        print('<hr><br>')
        print('========================================================================================')
        print('OUTPUT :-')
        print('------------------')
        print(tmp[1])
        print('========================================================================================')
    else:
        print('========================================================================================')
        print('<br>Unsucessful<br>')
        print('----------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Check if a spcific file is present in a specific directory
elif (('check' in b) and ('file' in b)):
    tmp=sr.getstatusoutput("sudo ls -l {}".format(c))
    if tmp[0] == 0:
        print('========================================================================================')
        print('<br>The file is present<br>')
        print('----------------------------<br>')
        print(tmp[1])
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))
    else:
        print('========================================================================================')
        print('<br>The file is not present<br>')
        print('========================================================================================')
        print('<a href="http://{}/c.html"><font color=white>click here to go back to home page</font></a><br><br>'.format(ip))


#Restart the OS
elif (('restart' in b) or ('reboot' in b)):
    print('<font face="Algerian" size="15" color="#4bff19" style="text-shadow: 0px 0px 0 #000000,1px -1px 0 #000000,-1px 1px 0 #000000,1px 1px 0 #000000,  -2px 0 0 #000000,2px 0 0 #000000,0 2px 0 #000000,0 -2px 0 #000000, -2px -2px 0 #ff0000,2px -2px 0 #ff0000,-2px 2px 0 #ff0000,2px 2px 0 #ff0000,-3px 0 0 #ff0000,3px 0 0 #ff0000,0 3px 0 #ff0000,0 -3px 0 #ff0000;"><center>Your OS Is Rebooting</center></font>')
    tmp=sr.getstatusoutput("sudo reboot now")


else:
    print("<font size='15'><b> [>>   Unable to recognize your input. Please try again   <<] </b></font><hr><br><br>")
    print('<a href="http://192.168.30.138/c.html"><font color=white>click here to go back to home page</font></a><br><br> \n\n\n')

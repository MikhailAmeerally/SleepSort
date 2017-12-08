import os
import time

def sleepSort(lst):
	'''
	lst must be lst of integers.
	'''
	i = 0;
	while(i < len(lst)):
		pid = os.fork()
		if(0 == pid):
			i+=1
		else:
			break
	if(i < len(lst)):
		time.sleep(lst[i])
		print(lst[i])
		os.waitpid(pid,0)
	return 0



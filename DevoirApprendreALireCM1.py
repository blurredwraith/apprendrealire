#! /usr/bin/env python3

import numpy as np
import os 
import random
import time

Choice=0
C=0

def main():
 Choice = input("""\n Bienvenue dans le Tri à Bulles ! \n \n Veuillez choisir une suite de chiffres que vous voulez ranger : \n \n    
1 : [5, 8, 10, 0, 3, 4, 9, 1, 7, 2, 6]
2 : [79, 52, 33, 19, 46, 100, 93, 27, 67, 84, 35]
3 : [898, 654, 321, 1111, 811, 654, 335, 751, 698, 438, 964]
 
 Quel est votre choix ? """) 
 return Choice
 int(Choice)

if int(Choice) == 1:
   tri_bulle1()
elif int(Choice) == 2:
   tri_bulle2()
elif int(Choice) == 3:
   tri_bulle3() 
   
def tri_bulle1():
 C = np.array ([5, 8, 10, 0, 3, 4, 9, 1, 7, 2, 6])
 c=len(C)
 for i in range(c):
   for j in range(0, c-i-1): 
    if C [j] > C [j+1] :
      C [j], C [j+1] = C [j+1], C[j]
    print(" Voici votre Tableau : ")
    for i in range(len(C)):
     print ("%d" %C[i]) 
 
def tri_bulle2():
 C = np.array ([79, 52, 33, 19, 46, 100, 93, 27, 67, 84, 35])
 c=len(C)
 for i in range(c):
  for j in range(0, c-i-1): 
   if C [j] > C [j+1] :
     C [j], C [j+1] = C [j+1], C[j]
     print(" Voici votre Tableau : ")
     for i in range(len(C)):
      print ("%d" %C[i])

def tri_bulle3():
 C = np.array ([898, 654, 321, 1111, 811, 654, 335, 751, 698, 438, 964])
 c=len(C)
 for i in range(c):
   for j in range(0, c-i-1): 
    if C [j] > C [j+1] :
     C [j], C [j+1] = C [j+1], C[j]
     print(" Voici votre Tableau : ")
     for i in range(len(C)):
      print ("%d" %C[i])     
  
       
if __name__ =="__main__":
 main()     
 

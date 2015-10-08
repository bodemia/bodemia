# yum install MySQL-python
# 1.Python Script to using MySql Database

import MySQLdb
db = MySQLdb.connect("localhost","root","ssn","test" )
cursor = db.cursor()
sql = """INSERT INTO login VALUES ('teja','teja')"""
try:
   cursor.execute(sql)
   db.commit()
except:
   db.rollback()
db.close()

# python DB.py

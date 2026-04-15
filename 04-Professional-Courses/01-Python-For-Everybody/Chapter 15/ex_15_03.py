import json
import sqlite3
conn = sqlite3.connect('ex_15_03.sqlite')
cur = conn.cursor()

# Initialize tables
cur.executescript('''
DROP TABLE IF EXISTS Course;
DROP TABLE IF EXISTS User;
DROP TABLE IF EXISTS Member;

CREATE TABLE Course (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE,
    Title  TEXT UNIQUE
);

CREATE TABLE User  (
    id  INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE,
    name    TEXT UNIQUE
);



CREATE TABLE Member (
    course_id  INTEGER,
    user_id  INTEGER,
    role INTEGER,
    PRIMARY KEY    (User_id,course_id)   
);
''')



fname = input('Enter file name: ')
if len(fname) < 1: fname = 'json.data'

# Parsing the CSV file
# Structure: Name, Artist, Album, Count, Rating, Length, Genre
fh = open(fname).read()
data=json.loads(fh)
for entry in data:

    if len(entry) < 3: continue
    
    name = entry[0]
    title = entry[1]
    role = entry[2]
    
    

    # Handle Artist table
    cur.execute('INSERT OR IGNORE INTO User (name) VALUES ( ? )', ( name, ) )
    cur.execute('SELECT id FROM User WHERE name = ? ', (name, ))
    user_id = cur.fetchone()[0]

    # Handle Genre table
    cur.execute('INSERT OR IGNORE INTO Course (title) VALUES ( ? )', ( title, ) )
    cur.execute('SELECT id FROM course WHERE title = ? ', (title, ))
    course_id = cur.fetchone()[0]

    # Handle Album table
    cur.execute('INSERT OR IGNORE INTO Member (role,user_id,course_id) VALUES (?,?, ? )', ( role,user_id,course_id ) )
    test_sql = '''
SELECT 'XYZZY' || hex(User.name || Course.title || Member.role ) AS X FROM 
    User JOIN Member JOIN Course 
    ON User.id = Member.user_id AND Member.course_id = Course.id
    ORDER BY X LIMIT 1;
'''

print("\n--- Your Submission Code ---")
cur.execute(test_sql)
row = cur.fetchone()
print(row[0])
cur.close()
conn.commit()

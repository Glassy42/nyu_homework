import subprocess

process = subprocess.Popen(["./yj2159_hw3_q3"], stdout=subprocess.PIPE, stdin=subprocess.PIPE, stderr=subprocess.PIPE)

while not process.poll():
    print(process.stdout.readline())
process.stdin.write(b"1\n")
process.stdin.write(b"0\n")
process.stdin.write(b"-1\n")

print("yes")


while process.returncode is None:
    process.poll()

print("yes")

for line in process.stdout.read():
    print(line)
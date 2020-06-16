

import argparse
import subprocess
import os



if __name__ == '__main__':
	
	parser = argparse.ArgumentParser(description="Create or build project")
	parser.add_argument("--create", action="store_true", help="Create project")
	parser.add_argument("--build", action= "store_true", help="Compile project")
	

	args = parser.parse_args()
	cwd = os.getcwd()

	if not (args.create or args.build):
		parser.error("Please enter --create or --build")
	if args.create:
		if not os.path.isdir(cwd + "/_builds"):
			os.mkdir(cwd + "/_builds")
		subprocess.call(['cmake', ".."], cwd = cwd + "/_builds")
	if args.build:
		subprocess.call(['cmake', "--build", "."], cwd = cwd + "/_builds")

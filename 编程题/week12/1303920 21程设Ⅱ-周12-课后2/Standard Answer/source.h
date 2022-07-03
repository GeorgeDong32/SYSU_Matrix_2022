#include <iostream>
#include <cstring>
class base {
		char name[20];
		int age;
	public:
		base() {}
		void setname(char arr[]) {
			strcpy(name, arr);
		};
		void setage(int age) {
			this->age = age;
		};
		char* getname() {
			return name;
		};
		int getage() {
			return age;
		};
};

class leader: virtual public base {
	private:
		char job[20];
		char department[20];
	public:
		void setjob(char arr[]) {
			strcpy(job, arr);
		};
		void setdep(char arr[]) {
			strcpy(department, arr);
		};
		char * getjob() {
			return job;
		}
		char * getdep() {
			return department;
		}
};

class engineer: virtual public base {
	private:
		char major[20];
		char profession[20];
	public:
		void setmajor(char arr[]) {
			strcpy(major, arr);
		};
		void setprof(char arr[]) {
			strcpy(profession, arr);
		};
		char * getmajor() {
			return major;
		}
		char * getprof() {
			return profession;
		}
};

class chairman: public leader, public engineer {
};


# 21程设Ⅱ-周17-课后1

# Description

学校里有2个会议室，1个小会议室和1个大会议室。按照规定，小会议室和大会议室每天各自只有1个租借名额。如果要租借小会议室，只需要提供租借的日期信息（int类型）即可；如果要租借大会议室，那么不仅要提供租借的日期信息（int类型），而且还要同时提供租借该会议室的缘由（string类型）。

会议室的租借过程是**无监督的**和**先到先得的**。**“无监督”** 意味着只要某天某个会议室还没有人租借，那么任何人都可以申请此会议室该日期的使用权；**“先到先得”** 意味着如果会议室某天的使用权已经被其它人租借了，那么后续对于同一天同一个会议室的租借申请都会失败，除非原来的拥有者主动取消了这一次租借。

请根据提示完成**RoomManager类**，实现该学校里1大1小2个会议室的租借管理。其中，**RoomManager**类应该包括如下的功能：
* set<int> _room1：用于存储所有小会议室租借的【日期】信息。
* map<int, string> _room2：用于存储所有大会议室租借的【日期，缘由】信息。
* bool InsertAppointment(const int& date)：尝试租借小会议室，如果租借成功返回true，否则返回false。
* bool InsertAppointment(const int& date, const string& event)：尝试租借大会议室，如果租借成功返回true，否则返回false。
* bool CancelAppointment(const int& room_id, const int& date)：取消会议室的某次租借。如果该会议室对应的日期确实已经有租借记录，则将其删除并返回true，否则返回false。
* void PrintAppointments(const int& room_id)：按照日期的升序打印某个会议室目前已有的所有租借记录。
	

# Guiding

**RoomManager类**的声明如下代码段所示。
```
class RoomManager {
	
	private:
		
		// Conference Room 1, the smaller one.
		// Only require the date information for appointment.
		set<int> _room1; 
		
		// Conference Room 2, the bigger one.
		// Require both date and event information for appointment. 
		map<int, string> _room2; 
		
	public:
		
		// Insert an appointment to the smaller Conference Room (1).
		bool InsertAppointment(const int& date);
		
		// Insert an appointment to the bigger Conference Room (2).
		bool InsertAppointment(const int& date, const string& event);
		
		// Cancel an appointment on designated date.
		// If room_id == 1, cancel the corresponding appointment of _room1.
		// If room_id == 2, cancel the corresponding appointment of _room2.
		bool CancelAppointment(const int& room_id, const int& date);
		
		// Print all existing appointments in chronological order.
		// If room_id == 1, just print the date information. Each piece of information is separated by ' '.
		// If room_id == 2, print the information in form of "date(event)". Each piece of information is separated by ' '.
		// If there is no even one existing appointment yet, print "No Appointment".
		void PrintAppointments(const int& room_id) const;
};
```
请根据提示手动实现**RoomManager类**里声明的4个方法。
	
## Sample Input 1
```
10
InsertRoom1 20220601
InsertRoom2 20220601 Meeting
InsertRoom1 20220602
InsertRoom2 20220602 Play LOL
InsertRoom1 20220601
InsertRoom2 20220601 Keep fit with exercise
CancelRoom2 20220602
CancelRoom2 20220603
PrintRoom1
PrintRoom2

```

## Sample Output 1
```

Succeed?: true
Succeed?: true
Succeed?: true
Succeed?: true
Succeed?: false
Succeed?: false
Succeed?: true
Succeed?: false
20220601 20220602
20220601(Meeting)

```

## Sample Input 2
```
15
InsertRoom1 20220610
CancelRoom2 20220610
InsertRoom2 20220611 Academic research
CancelRoom1 20220611
InsertRoom1 20220611
InsertRoom2 20220610 Quantum reaction experiment
PrintRoom1
PrintRoom2
InsertRoom2 20220611 Satellite launch test
CancelRoom2 20220611
InsertRoom2 20220611 Satellite launch test
InsertRoom2 20220611 Geological survey
InsertRoom2 20220612 Geological survey
InsertRoom2 20220609 Czar nuclear power test
PrintRoom2

```

## Sample Output 2
```

Succeed?: true
Succeed?: false
Succeed?: true
Succeed?: false
Succeed?: true
Succeed?: true
20220610 20220611
20220610(Quantum reaction experiment) 20220611(Academic research)
Succeed?: false
Succeed?: true
Succeed?: true
Succeed?: false
Succeed?: true
Succeed?: true
20220609(Czar nuclear power test) 20220610(Quantum reaction experiment) 20220611(Satellite launch test) 20220612(Geological survey)

```
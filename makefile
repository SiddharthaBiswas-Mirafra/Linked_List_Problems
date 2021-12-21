a.out: Main.o menu.o InsertEnd_Recursion.o ReversePrint_Recursion.o ReverseList_Recursion.o Create_List.o Add_Beg.o Add_End.o Display.o Add_After.o Add_Before.o Search_Node.o ReverseList_Itarative.o Delete_Node.o
	cc Main.o menu.o InsertEnd_Recursion.o ReversePrint_Recursion.o ReverseList_Recursion.o Create_List.o Add_Beg.o Add_End.o Display.o Add_After.o Add_Before.o Search_Node.o ReverseList_Itarative.o Delete_Node.o
Main.o: Main.c
	cc -c Main.c
menu.o: menu.c
	cc -c menu.c
InsertEnd_Recursion.o: InsertEnd_Recursion.c
	cc -c InsertEnd_Recursion.c
ReversePrint_Recursion.o: ReversePrint_Recursion.c
	cc -c ReversePrint_Recursion.c
ReverseList_Recursion.o: ReverseList_Recursion.c
	cc -c ReverseList_Recursion.c
Create_List.o: Create_List.c
	cc -c Create_List.c
Add_Beg.o: Add_Beg.c
	cc -c Add_Beg.c
Add_End.o: Add_End.c
	cc -c Add_End.c
Display.o: Display.c
	cc -c Display.c
Add_After.o: Add_After.c
	cc -c Add_After.c
Add_Before.o:Add_Before.c
	cc -c Add_Before.c
Search_Node.o: Search_Node.c
	cc -c Search_Node.c
ReverseList_Itarative.o: ReverseList_Itarative.c
	cc -c ReverseList_Itarative.c
Delete_Node.o: Delete_Node.c
	cc -c Delete_Node.c

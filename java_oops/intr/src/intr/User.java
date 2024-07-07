package intr;

import java.util.List;

public class User {
	private String name;
	private String membership;
	private int age;
	public String toString() {
		return "tacos";
	}
	public static List<User> admins;
	public static void print_admins() {
		for(User u :admins) {
			System.out.println(u.get_name());
		}
	}
	public User() {
	
	}
	
	
	public User(String uname,String umembership,int uage) {
		set_name(uname);
		set_membership(umembership);
		set_age(uage);
		
	}
	public boolean equals(User u2) {
		if(get_name()==u2.get_name()
				&& get_membership()==u2.get_membership()) {
			return true;
		}
		return false;
	}
	
	void set_name(String uname) {
		name=uname;
	}
	String get_name() {
		return name;
	}
	void set_membership(String umembership) {
		membership=umembership;
		
	}
	String get_membership() {
		return membership; 
	}
	void set_membership(Membership umembership) {
		membership=umembership.name();
	}
	public enum Membership {
		Bronze,Silver,Gold;

	}
	void set_age(int uage) {
		age = uage;
	}
	int get_age() {
		return age;
		
	}

}

public class Member {
	String name = "이름";
	String id = "아이디";
	String password = "패스워드";
	int age = 3;

	public Member() {}

	public Member(int age) {
		this(age, "a", "john");
	}

	public Member(int age, String id) {
		this(age, id, "john");
	}

	public Member(int age, String id, String name) {
		this.age = age;
		this.id = id;
		this.name = name;
	}
	public static void main(String[] args) {
		Member m1 = new Member(3, "안녕");
		System.out.println(m1.name + m1.id + m1.password + m1.age);

		Member m2 = new Member(24, "a");
		System.out.println(m2.name + m2.id + m2.password + m2.age);
	}
}
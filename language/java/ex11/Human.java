public class Human implements Live{
	private String name;
	private int age;
	private String gender;
	private String race;

	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return this.age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String getGender() {
		return this.gender;
	}

	public void setGender(String gender) {
		this.gender = gender;
	}

	public String getRace() {
		return this.race;
	}

	public void setRace(String race) {
		this.race = race;
	}

	public void eat() {
		System.out.println("Eat");
	}
	
	public void sleep() {
		System.out.println("sleep");
	}
}
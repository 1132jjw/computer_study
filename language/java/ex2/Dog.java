public class Dog extends Animal {
	public Dog() {
		this.kind = "포윺류";
	}

	@Override
	public void sound() {
		System.out.println("멍멍");
	}
}
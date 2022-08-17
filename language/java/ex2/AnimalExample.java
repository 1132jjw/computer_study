public class AnimalExample {
	public static void main(String[] args) {
		Dog dog = new Dog();
		dog.sound();
		Animal animal = null;
		animal = new Dog();
		animal.sound();
		animalSound(new Dog());
	}

	public static void animalSound(Animal animal) {
		animal.sound();
	}
}
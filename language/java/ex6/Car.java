public class Car {
	String model;
	int speed;

	Car(String model) {
		this.model = model;
	}

	void setSpeed(int speed){
		this.speed = speed;
	}

	void run() {
		for (int i = 0; i < this.speed; i += 10)
		{
			System.out.println(i);
		}
	}
}
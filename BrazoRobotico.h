class BrazoRobotico{
	private:
		double x, y, z;
		bool sujetando;
	public:
		BrazoRobotico(double x, double y, double z, bool sujetando);

		double getX();
		double getY();
		double getZ();
		bool getEstado();

		void coger();
		void soltar();
		void mover(double x, double y, double z);

};

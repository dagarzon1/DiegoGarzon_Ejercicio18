grafica.png:datos.txt
	python grafica.py
datos.txt:
	c++ ec_dif.cpp -o  ec_dif.x
	./ec_dif.x > datos.txt
	rm ec_dif.x
clean:
	rm datos.txt
	rm grafica.png
	

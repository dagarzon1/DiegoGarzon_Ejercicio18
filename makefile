primera:grafica1.png
	rm datos.txt
grafica1.png:datos.txt
	python grafica.py
	
datos.txt:
	c++ ec_dif.cpp -o ec_dif.x
	./ec_dif.x primera > datos.txt
	rm ec_dif.x

segunda:grafica2.png z_vs_y.png 
	rm datos2.txt
grafica2.png:datos2.txt
	python grafica2.py
z_vs_y.png:datos2.txt
	python grafica2.py
datos2.txt:
	c++ ec_dif.cpp -o ec_dif.x
	./ec_dif.x segunda > datos2.txt
	rm ec_dif.x
clean:
	rm grafica1.png
	rm grafica2.png
	rm z_vs_y.png
	

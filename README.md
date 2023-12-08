# Neural-Network-Handwriting-Recognizer
# Requirements
CMake version 3.22+  
GNU g++ version 11.4.0+  

# Getting Started
Run the following commands:  
```
git clone https://github.com/tr29038/Neural-Network-Handwriting-Recognizer.git
cd ./Neural-Network-Handwriting-Recognizer
```

# Building
Run the following commands:  
```
cd ./build
./build.sh
make
```

# Running
Run the following command:  
```
./neural_network_handwriting_recognizer ../data/optdigits-orig.windep
```

For a list of options, run the command:  
```
./neural_network_handwriting_recognizer
```
The training input data file will be generated in the working directory as `input.txt`.  
The training output data file will be generated in the working directory as `output.txt`.  

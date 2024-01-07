
## Barcode Scanner: UPC/EAN-13 Generator and Scanner (C++)

## Introduction
This is a small project that implements a Barcode Scanner for UPC/EAN-13 codes using C++. The project includes functionalities to both generate and scan UPC/EAN-13 barcodes.

## Features
- **Barcode Scanner:** The application allows users to scan UPC/EAN-13 barcodes using the camera or uploaded images.
- **Barcode Generator:** Users can generate UPC/EAN-13 barcodes by providing the desired data.

## Requirements
- C++ compiler (Supporting C++11 or later)
- OpenCV library for image processing (optional for camera-based scanning)
- ZBar library for barcode decoding

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/martnml/Barcode_Scanner.git
   cd Barcode-Scanner-Cpp
Build the project:
bash
Copy code
make
## Usage
1. Barcode Scanner
Using Camera:
bash
Copy code
./barcode_scanner
Using Image File:
bash
Copy code
./barcode_scanner -i path/to/your/image.jpg
2. Barcode Generator
bash
Copy code
./barcode_generator -d "YourDataHere"

- Examples
Barcode Scanner
Scanning using the camera:

bash
Copy code
./barcode_scanner
Scanning from an image file:
## Generating a barcode:
bash
Copy code
./barcode_generator -d "Hello123"
## License
This project is licensed under the MIT License.

## Acknowledgments
ZBar Library for barcode decoding functionality.
OpenCV Library for image processing (optional for camera-based scanning).
Contributing
Feel free to open issues or pull requests for improvements or bug fixes. Contributors are welcome!

## Author
Zergaoui Mohamed El Amine

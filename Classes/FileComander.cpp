#define file1Path "Files/Unsorted Array.txt"

class FileComander{
	private:
	bool fileExists(std::string filename) {
	  std::ifstream ifile(filename);
	  return (bool)ifile;
	}

	bool createFile(std::string filename){
		std::ofstream fileUnsorted (filename);
		fileUnsorted << "Content here" << std::endl;
		fileUnsorted.close();
		return true;
	}
	public:
		void start(){
			std::cout << "	For proper work the program needs file with name\n\"Unsorted Array.txt\".\n\n";
			if (fileExists(file1Path)){
				std::cout << "	The file \"Unsorted Array.txt\" is allready exists.\n\n";
			} else {
				std::cout << "	Need to create the file \"Unsorted Array.txt\"\n\n";
				createFile(file1Path);
				if (fileExists(file1Path)){
					std::cout << "	Successfully created the file \"Unsorted Array.txt\"!\n\n";
				} else {
				std::cout << "	The file \"Unsorted Array.txt\" was`t created!\n\n";
			} 
		}
	}
};
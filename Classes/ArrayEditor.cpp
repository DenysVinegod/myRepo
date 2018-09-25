// class ArrayEditor{
// 	private:
// 		int x = 0;
// 		int y = 0;
// 		int arr[x, y];
// 		bool createArray(x, y){
// 			bool result = false;
// 			srand(time(NULL));
// 			for (int i = 0; i < x; i++){
// 				for (int j = 0; j < y; j++)
// 				{
// 					arr[i, j] = rand() % 10 + 1;
// 				}
// 			}
// 			result = true;
// 			return result;
// 		}
// 		bool showArray(x, y){
// 			result = false;
// 			for (int i = 0; i < x; i++){
// 				for (int j = 0; j < y; j++)
// 				{
// 					std::cout << arr[i, j] << " ";
// 				}
// 				std::cout << std::endl;
// 			}
// 			return result;
// 		}
// 	public:
// 		start(int i, int j){
// 			x = i;
// 			y = j;
// 			createArray(x, y);
// 			showArray(x, y);
// 		}
// };
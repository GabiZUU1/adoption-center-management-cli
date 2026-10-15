#include <vector>
#include <memory>
#include "AdoptedDogModel.h"
#include "Dog.h"
#include "TextRepo.h"
#include "AdminService.h"
#include "UserService.h"
#include "IFileManager.h"
#include "DogModel.h"

#include "lab89.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	vector<Dog> dogs;
	//MemoryRepo repo = MemoryRepo(dogs);
	TextRepo repo = TextRepo("repo.txt");
	AdminService serv = AdminService(repo);
	UserService userv = UserService(repo);
	IFileManager* fm = nullptr;
	std::unique_ptr<DogModel> model = std::make_unique<DogModel>(serv);
	std::unique_ptr<AdoptedDogModel> modelA = std::make_unique<AdoptedDogModel>(userv);

	lab89 window(serv, userv, model.get(), modelA.get(), fm);
	window.show();
	window.activateWindow();

	app.exec();

	if (fm != nullptr) fm->saveToFile(serv.getVector());

	return 0;
}

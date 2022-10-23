#include "header.h"

string command;

int main() {
	while (true) {
		system("cls");
		mainMenu();
		cin >> command;

		if (command == "groups") {
			while (true) {
				system("cls");
				groupMenu();
				cin >> command;

				int groupChosen = 0;
				for (int i = 0; i < 14; ++i) {
					string lower = groups[i];
					transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

					if (command == groups[i] || command == lower) {
						groupChosen = 1;
						while (true) {
							system("cls");
							elementsMenu(i);
							cin >> command;

							int elementChosen = 0;
							for (int j = 0; j < sizeof(elements[i]) / sizeof(elements[i][0]); ++j) {
								string lowerElem = elements[i][j];
								transform(lowerElem.begin(), lowerElem.end(), lowerElem.begin(), ::tolower);

								if (command == elements[i][j] || command == lowerElem) {
									elementChosen = 1;
									while (true) {
										system("cls");
										elementMenu(i, j);
										cin >> command;

										break;
									}
								}
							}
							if (!elementChosen) break;
						}
					}
				}
				if (!groupChosen) break;
			}
		}
		else break;
	}

	system("cls");
	cout << "End of the program\n";
	return 0;
}
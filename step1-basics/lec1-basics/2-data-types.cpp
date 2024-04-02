// https://www.naukri.com/code360/problems/data-type_8357232

int dataTypes(string type) {
	if (type == "Integer" || type == "Float") {
		return 4;
	} else if (type == "Long" || type == "Double") {
		return 8;
	} else {
		return 1;
	}
}
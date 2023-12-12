function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Model_3D"};
	this.sidHashMap["Model_3D"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Scope1"] = {sid: "Model_3D:195"};
	this.sidHashMap["Model_3D:195"] = {rtwname: "<Root>/Scope1"};
	this.rtwnameHashMap["<Root>/Step"] = {sid: "Model_3D:569"};
	this.sidHashMap["Model_3D:569"] = {rtwname: "<Root>/Step"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

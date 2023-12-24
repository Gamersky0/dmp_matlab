function CodeDefine() { 
this.def = new Array();
this.def["ert_main.cpp:my_model_Obj"] = {file: "ert_main_cpp.html",line:20,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_cpp.html",line:34,type:"fcn"};
this.def["main"] = {file: "ert_main_cpp.html",line:71,type:"fcn"};
this.def["rt_ertODEUpdateContinuousStates"] = {file: "my_model_cpp.html",line:21,type:"fcn"};
this.def["my_model_MATLABFunction4"] = {file: "my_model_cpp.html",line:183,type:"fcn"};
this.def["my_model_MATLABFunction14"] = {file: "my_model_cpp.html",line:229,type:"fcn"};
this.def["step"] = {file: "my_model_cpp.html",line:258,type:"fcn"};
this.def["my_model_derivatives"] = {file: "my_model_cpp.html",line:749,type:"fcn"};
this.def["initialize"] = {file: "my_model_cpp.html",line:877,type:"fcn"};
this.def["terminate"] = {file: "my_model_cpp.html",line:1028,type:"fcn"};
this.def["getRTM"] = {file: "my_model_cpp.html",line:1049,type:"fcn"};
this.def["B_my_model_T"] = {file: "my_model_h.html",line:69,type:"type"};
this.def["X_my_model_T"] = {file: "my_model_h.html",line:88,type:"type"};
this.def["XDot_my_model_T"] = {file: "my_model_h.html",line:107,type:"type"};
this.def["XDis_my_model_T"] = {file: "my_model_h.html",line:126,type:"type"};
this.def["ConstB_my_model_T"] = {file: "my_model_h.html",line:134,type:"type"};
this.def["ODE8_IntgData"] = {file: "my_model_h.html",line:144,type:"type"};
this.def["ConstP_my_model_T"] = {file: "my_model_h.html",line:170,type:"type"};
this.def["initialize"] = {file: "my_model_h.html",line:227,type:"fcn"};
this.def["RT_MODEL_my_model_T"] = {file: "my_model_types_h.html",line:21,type:"type"};
this.def["my_model_ConstB"] = {file: "my_model_data_cpp.html",line:19,type:"var"};
this.def["my_model_ConstP"] = {file: "my_model_data_cpp.html",line:50,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_cpp.html"] = "../ert_main.cpp";
	this.html2Root["ert_main_cpp.html"] = "ert_main_cpp.html";
	this.html2SrcPath["my_model_cpp.html"] = "../my_model.cpp";
	this.html2Root["my_model_cpp.html"] = "my_model_cpp.html";
	this.html2SrcPath["my_model_h.html"] = "../my_model.h";
	this.html2Root["my_model_h.html"] = "my_model_h.html";
	this.html2SrcPath["my_model_private_h.html"] = "../my_model_private.h";
	this.html2Root["my_model_private_h.html"] = "my_model_private_h.html";
	this.html2SrcPath["my_model_types_h.html"] = "../my_model_types.h";
	this.html2Root["my_model_types_h.html"] = "my_model_types_h.html";
	this.html2SrcPath["my_model_data_cpp.html"] = "../my_model_data.cpp";
	this.html2Root["my_model_data_cpp.html"] = "my_model_data_cpp.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_cpp.html","my_model_cpp.html","my_model_h.html","my_model_private_h.html","my_model_types_h.html","my_model_data_cpp.html","rtwtypes_h.html"];

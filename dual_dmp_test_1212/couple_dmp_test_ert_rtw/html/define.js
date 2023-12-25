function CodeDefine() { 
this.def = new Array();
this.def["ert_main.cpp:rtObj"] = {file: "ert_main_cpp.html",line:22,type:"var"};
this.def["ert_main.cpp:local_arg_m_Xp"] = {file: "ert_main_cpp.html",line:25,type:"var"};
this.def["ert_main.cpp:arg_m_Xp"] = {file: "ert_main_cpp.html",line:26,type:"var"};
this.def["ert_main.cpp:local_arg_m_e"] = {file: "ert_main_cpp.html",line:29,type:"var"};
this.def["ert_main.cpp:arg_m_e"] = {file: "ert_main_cpp.html",line:30,type:"var"};
this.def["ert_main.cpp:arg_X3"] = {file: "ert_main_cpp.html",line:33,type:"var"};
this.def["ert_main.cpp:arg_X4"] = {file: "ert_main_cpp.html",line:36,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_cpp.html",line:50,type:"fcn"};
this.def["main"] = {file: "ert_main_cpp.html",line:87,type:"fcn"};
this.def["rt_ertODEUpdateContinuousStates"] = {file: "couple_dmp_test_cpp.html",line:39,type:"fcn"};
this.def["MATLABFunction14"] = {file: "couple_dmp_test_cpp.html",line:203,type:"fcn"};
this.def["step"] = {file: "couple_dmp_test_cpp.html",line:231,type:"fcn"};
this.def["couple_dmp_test_derivatives"] = {file: "couple_dmp_test_cpp.html",line:841,type:"fcn"};
this.def["initialize"] = {file: "couple_dmp_test_cpp.html",line:1009,type:"fcn"};
this.def["getRTM"] = {file: "couple_dmp_test_cpp.html",line:1189,type:"fcn"};
this.def["ODE8_IntgData"] = {file: "couple_dmp_test_h.html",line:64,type:"type"};
this.def["DW"] = {file: "couple_dmp_test_h.html",line:114,type:"type"};
this.def["X"] = {file: "couple_dmp_test_h.html",line:141,type:"type"};
this.def["XDot"] = {file: "couple_dmp_test_h.html",line:168,type:"type"};
this.def["XDis"] = {file: "couple_dmp_test_h.html",line:195,type:"type"};
this.def["D"] = {file: "couple_dmp_test_h.html",line:199,type:"var"};
this.def["rtP"] = {file: "couple_dmp_test_data_cpp.html",line:20,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["int64_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["uint64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["ulonglong_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:94,type:"type"};
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
	this.html2SrcPath["couple_dmp_test_cpp.html"] = "../couple_dmp_test.cpp";
	this.html2Root["couple_dmp_test_cpp.html"] = "couple_dmp_test_cpp.html";
	this.html2SrcPath["couple_dmp_test_h.html"] = "../couple_dmp_test.h";
	this.html2Root["couple_dmp_test_h.html"] = "couple_dmp_test_h.html";
	this.html2SrcPath["couple_dmp_test_data_cpp.html"] = "../couple_dmp_test_data.cpp";
	this.html2Root["couple_dmp_test_data_cpp.html"] = "couple_dmp_test_data_cpp.html";
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
"ert_main_cpp.html","couple_dmp_test_cpp.html","couple_dmp_test_h.html","couple_dmp_test_data_cpp.html","rtwtypes_h.html"];

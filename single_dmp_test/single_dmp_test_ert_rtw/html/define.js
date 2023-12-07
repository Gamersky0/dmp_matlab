function CodeDefine() { 
this.def = new Array();
this.def["ert_main.cpp:rtObj"] = {file: "ert_main_cpp.html",line:22,type:"var"};
this.def["ert_main.cpp:arg_l_position_initial"] = {file: "ert_main_cpp.html",line:25,type:"var"};
this.def["ert_main.cpp:arg_l_position_goal"] = {file: "ert_main_cpp.html",line:28,type:"var"};
this.def["ert_main.cpp:arg_l_position_current"] = {file: "ert_main_cpp.html",line:31,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_cpp.html",line:45,type:"fcn"};
this.def["main"] = {file: "ert_main_cpp.html",line:82,type:"fcn"};
this.def["rt_ertODEUpdateContinuousStates"] = {file: "single_dmp_test_cpp.html",line:39,type:"fcn"};
this.def["step"] = {file: "single_dmp_test_cpp.html",line:202,type:"fcn"};
this.def["single_dmp_test_derivatives"] = {file: "single_dmp_test_cpp.html",line:354,type:"fcn"};
this.def["initialize"] = {file: "single_dmp_test_cpp.html",line:383,type:"fcn"};
this.def["getRTM"] = {file: "single_dmp_test_cpp.html",line:464,type:"fcn"};
this.def["ODE8_IntgData"] = {file: "single_dmp_test_h.html",line:64,type:"type"};
this.def["DW"] = {file: "single_dmp_test_h.html",line:77,type:"type"};
this.def["X"] = {file: "single_dmp_test_h.html",line:84,type:"type"};
this.def["XDot"] = {file: "single_dmp_test_h.html",line:91,type:"type"};
this.def["XDis"] = {file: "single_dmp_test_h.html",line:98,type:"type"};
this.def["ConstP"] = {file: "single_dmp_test_h.html",line:116,type:"type"};
this.def["errorStatus"] = {file: "single_dmp_test_h.html",line:120,type:"var"};
this.def["rtConstP"] = {file: "single_dmp_test_data_cpp.html",line:20,type:"var"};
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
	this.html2SrcPath["single_dmp_test_cpp.html"] = "../single_dmp_test.cpp";
	this.html2Root["single_dmp_test_cpp.html"] = "single_dmp_test_cpp.html";
	this.html2SrcPath["single_dmp_test_h.html"] = "../single_dmp_test.h";
	this.html2Root["single_dmp_test_h.html"] = "single_dmp_test_h.html";
	this.html2SrcPath["single_dmp_test_data_cpp.html"] = "../single_dmp_test_data.cpp";
	this.html2Root["single_dmp_test_data_cpp.html"] = "single_dmp_test_data_cpp.html";
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
"ert_main_cpp.html","single_dmp_test_cpp.html","single_dmp_test_h.html","single_dmp_test_data_cpp.html","rtwtypes_h.html"];

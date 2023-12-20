function CodeDefine() { 
this.def = new Array();
this.def["ert_main.cpp:rtObj"] = {file: "ert_main_cpp.html",line:22,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_cpp.html",line:36,type:"fcn"};
this.def["main"] = {file: "ert_main_cpp.html",line:73,type:"fcn"};
this.def["rt_ertODEUpdateContinuousStates"] = {file: "untitled_cpp.html",line:38,type:"fcn"};
this.def["step"] = {file: "untitled_cpp.html",line:196,type:"fcn"};
this.def["untitled_derivatives"] = {file: "untitled_cpp.html",line:286,type:"fcn"};
this.def["initialize"] = {file: "untitled_cpp.html",line:314,type:"fcn"};
this.def["getRTM"] = {file: "untitled_cpp.html",line:395,type:"fcn"};
this.def["ODE8_IntgData"] = {file: "untitled_h.html",line:64,type:"type"};
this.def["DW"] = {file: "untitled_h.html",line:77,type:"type"};
this.def["X"] = {file: "untitled_h.html",line:84,type:"type"};
this.def["XDot"] = {file: "untitled_h.html",line:91,type:"type"};
this.def["XDis"] = {file: "untitled_h.html",line:98,type:"type"};
this.def["ConstB"] = {file: "untitled_h.html",line:103,type:"type"};
this.def["ConstP"] = {file: "untitled_h.html",line:126,type:"type"};
this.def["errorStatus"] = {file: "untitled_h.html",line:130,type:"var"};
this.def["rtConstB"] = {file: "untitled_data_cpp.html",line:20,type:"var"};
this.def["rtConstP"] = {file: "untitled_data_cpp.html",line:30,type:"var"};
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
	this.html2SrcPath["untitled_cpp.html"] = "../untitled.cpp";
	this.html2Root["untitled_cpp.html"] = "untitled_cpp.html";
	this.html2SrcPath["untitled_h.html"] = "../untitled.h";
	this.html2Root["untitled_h.html"] = "untitled_h.html";
	this.html2SrcPath["untitled_data_cpp.html"] = "../untitled_data.cpp";
	this.html2Root["untitled_data_cpp.html"] = "untitled_data_cpp.html";
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
"ert_main_cpp.html","untitled_cpp.html","untitled_h.html","untitled_data_cpp.html","rtwtypes_h.html"];

function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "my_model"};
	this.sidHashMap["my_model"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "my_model:92"};
	this.sidHashMap["my_model:92"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "my_model:153"};
	this.sidHashMap["my_model:153"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "my_model:154"};
	this.sidHashMap["my_model:154"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "my_model:552"};
	this.sidHashMap["my_model:552"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "my_model:544"};
	this.sidHashMap["my_model:544"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "my_model:548"};
	this.sidHashMap["my_model:548"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "my_model:151"};
	this.sidHashMap["my_model:151"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S8>"] = {sid: "my_model:159"};
	this.sidHashMap["my_model:159"] = {rtwname: "<S8>"};
	this.rtwnameHashMap["<S9>"] = {sid: "my_model:98"};
	this.sidHashMap["my_model:98"] = {rtwname: "<S9>"};
	this.rtwnameHashMap["<S10>"] = {sid: "my_model:152"};
	this.sidHashMap["my_model:152"] = {rtwname: "<S10>"};
	this.rtwnameHashMap["<Root>/ "] = {sid: "my_model:183"};
	this.sidHashMap["my_model:183"] = {rtwname: "<Root>/ "};
	this.rtwnameHashMap["<Root>/   "] = {sid: "my_model:184"};
	this.sidHashMap["my_model:184"] = {rtwname: "<Root>/   "};
	this.rtwnameHashMap["<Root>/  "] = {sid: "my_model:185"};
	this.sidHashMap["my_model:185"] = {rtwname: "<Root>/  "};
	this.rtwnameHashMap["<Root>/     "] = {sid: "my_model:186"};
	this.sidHashMap["my_model:186"] = {rtwname: "<Root>/     "};
	this.rtwnameHashMap["<Root>/-gamma1//s"] = {sid: "my_model:187"};
	this.sidHashMap["my_model:187"] = {rtwname: "<Root>/-gamma1//s"};
	this.rtwnameHashMap["<Root>/3D PATH"] = {sid: "my_model:92"};
	this.sidHashMap["my_model:92"] = {rtwname: "<Root>/3D PATH"};
	this.rtwnameHashMap["<Root>/Gain"] = {sid: "my_model:189"};
	this.sidHashMap["my_model:189"] = {rtwname: "<Root>/Gain"};
	this.rtwnameHashMap["<Root>/Gm "] = {sid: "my_model:190"};
	this.sidHashMap["my_model:190"] = {rtwname: "<Root>/Gm "};
	this.rtwnameHashMap["<Root>/Gm  "] = {sid: "my_model:191"};
	this.sidHashMap["my_model:191"] = {rtwname: "<Root>/Gm  "};
	this.rtwnameHashMap["<Root>/OUT_couple"] = {sid: "my_model:432"};
	this.sidHashMap["my_model:432"] = {rtwname: "<Root>/OUT_couple"};
	this.rtwnameHashMap["<Root>/Step"] = {sid: "my_model:197"};
	this.sidHashMap["my_model:197"] = {rtwname: "<Root>/Step"};
	this.rtwnameHashMap["<Root>/Sum"] = {sid: "my_model:198"};
	this.sidHashMap["my_model:198"] = {rtwname: "<Root>/Sum"};
	this.rtwnameHashMap["<Root>/Sum1"] = {sid: "my_model:199"};
	this.sidHashMap["my_model:199"] = {rtwname: "<Root>/Sum1"};
	this.rtwnameHashMap["<Root>/gamma2//s"] = {sid: "my_model:287"};
	this.sidHashMap["my_model:287"] = {rtwname: "<Root>/gamma2//s"};
	this.rtwnameHashMap["<Root>/reference model"] = {sid: "my_model:376"};
	this.sidHashMap["my_model:376"] = {rtwname: "<Root>/reference model"};
	this.rtwnameHashMap["<S1>/In8"] = {sid: "my_model:94"};
	this.sidHashMap["my_model:94"] = {rtwname: "<S1>/In8"};
	this.rtwnameHashMap["<S1>/Gain20"] = {sid: "my_model:126"};
	this.sidHashMap["my_model:126"] = {rtwname: "<S1>/Gain20"};
	this.rtwnameHashMap["<S1>/Gain22"] = {sid: "my_model:127"};
	this.sidHashMap["my_model:127"] = {rtwname: "<S1>/Gain22"};
	this.rtwnameHashMap["<S1>/MATLAB Function4"] = {sid: "my_model:153"};
	this.sidHashMap["my_model:153"] = {rtwname: "<S1>/MATLAB Function4"};
	this.rtwnameHashMap["<S1>/MATLAB Function5"] = {sid: "my_model:154"};
	this.sidHashMap["my_model:154"] = {rtwname: "<S1>/MATLAB Function5"};
	this.rtwnameHashMap["<S1>/Subsystem2"] = {sid: "my_model:552"};
	this.sidHashMap["my_model:552"] = {rtwname: "<S1>/Subsystem2"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "my_model:162"};
	this.sidHashMap["my_model:162"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/Sum4"] = {sid: "my_model:165"};
	this.sidHashMap["my_model:165"] = {rtwname: "<S1>/Sum4"};
	this.rtwnameHashMap["<S1>/To Workspace"] = {sid: "my_model:168"};
	this.sidHashMap["my_model:168"] = {rtwname: "<S1>/To Workspace"};
	this.rtwnameHashMap["<S1>/To Workspace1"] = {sid: "my_model:169"};
	this.sidHashMap["my_model:169"] = {rtwname: "<S1>/To Workspace1"};
	this.rtwnameHashMap["<S1>/X3_DMP"] = {sid: "my_model:544"};
	this.sidHashMap["my_model:544"] = {rtwname: "<S1>/X3_DMP"};
	this.rtwnameHashMap["<S1>/X4_DMP"] = {sid: "my_model:548"};
	this.sidHashMap["my_model:548"] = {rtwname: "<S1>/X4_DMP"};
	this.rtwnameHashMap["<S1>/OUT"] = {sid: "my_model:179"};
	this.sidHashMap["my_model:179"] = {rtwname: "<S1>/OUT"};
	this.rtwnameHashMap["<S1>/OUT_coupling"] = {sid: "my_model:180"};
	this.sidHashMap["my_model:180"] = {rtwname: "<S1>/OUT_coupling"};
	this.rtwnameHashMap["<S2>:1"] = {sid: "my_model:153:1"};
	this.sidHashMap["my_model:153:1"] = {rtwname: "<S2>:1"};
	this.rtwnameHashMap["<S3>:1"] = {sid: "my_model:154:1"};
	this.sidHashMap["my_model:154:1"] = {rtwname: "<S3>:1"};
	this.rtwnameHashMap["<S4>/X3"] = {sid: "my_model:553"};
	this.sidHashMap["my_model:553"] = {rtwname: "<S4>/X3"};
	this.rtwnameHashMap["<S4>/X3dot"] = {sid: "my_model:554"};
	this.sidHashMap["my_model:554"] = {rtwname: "<S4>/X3dot"};
	this.rtwnameHashMap["<S4>/X4"] = {sid: "my_model:555"};
	this.sidHashMap["my_model:555"] = {rtwname: "<S4>/X4"};
	this.rtwnameHashMap["<S4>/X4dot"] = {sid: "my_model:556"};
	this.sidHashMap["my_model:556"] = {rtwname: "<S4>/X4dot"};
	this.rtwnameHashMap["<S4>/1//m1"] = {sid: "my_model:95"};
	this.sidHashMap["my_model:95"] = {rtwname: "<S4>/1//m1"};
	this.rtwnameHashMap["<S4>/1//m2"] = {sid: "my_model:96"};
	this.sidHashMap["my_model:96"] = {rtwname: "<S4>/1//m2"};
	this.rtwnameHashMap["<S4>/Add"] = {sid: "my_model:99"};
	this.sidHashMap["my_model:99"] = {rtwname: "<S4>/Add"};
	this.rtwnameHashMap["<S4>/Add1"] = {sid: "my_model:100"};
	this.sidHashMap["my_model:100"] = {rtwname: "<S4>/Add1"};
	this.rtwnameHashMap["<S4>/Gain"] = {sid: "my_model:113"};
	this.sidHashMap["my_model:113"] = {rtwname: "<S4>/Gain"};
	this.rtwnameHashMap["<S4>/Gain1"] = {sid: "my_model:114"};
	this.sidHashMap["my_model:114"] = {rtwname: "<S4>/Gain1"};
	this.rtwnameHashMap["<S4>/Gain10"] = {sid: "my_model:115"};
	this.sidHashMap["my_model:115"] = {rtwname: "<S4>/Gain10"};
	this.rtwnameHashMap["<S4>/Gain11"] = {sid: "my_model:116"};
	this.sidHashMap["my_model:116"] = {rtwname: "<S4>/Gain11"};
	this.rtwnameHashMap["<S4>/Gain12"] = {sid: "my_model:117"};
	this.sidHashMap["my_model:117"] = {rtwname: "<S4>/Gain12"};
	this.rtwnameHashMap["<S4>/Gain13"] = {sid: "my_model:118"};
	this.sidHashMap["my_model:118"] = {rtwname: "<S4>/Gain13"};
	this.rtwnameHashMap["<S4>/Gain14"] = {sid: "my_model:119"};
	this.sidHashMap["my_model:119"] = {rtwname: "<S4>/Gain14"};
	this.rtwnameHashMap["<S4>/Gain15"] = {sid: "my_model:120"};
	this.sidHashMap["my_model:120"] = {rtwname: "<S4>/Gain15"};
	this.rtwnameHashMap["<S4>/Gain2"] = {sid: "my_model:125"};
	this.sidHashMap["my_model:125"] = {rtwname: "<S4>/Gain2"};
	this.rtwnameHashMap["<S4>/Gain3"] = {sid: "my_model:133"};
	this.sidHashMap["my_model:133"] = {rtwname: "<S4>/Gain3"};
	this.rtwnameHashMap["<S4>/Gain4"] = {sid: "my_model:137"};
	this.sidHashMap["my_model:137"] = {rtwname: "<S4>/Gain4"};
	this.rtwnameHashMap["<S4>/Gain5"] = {sid: "my_model:138"};
	this.sidHashMap["my_model:138"] = {rtwname: "<S4>/Gain5"};
	this.rtwnameHashMap["<S4>/Gain6"] = {sid: "my_model:139"};
	this.sidHashMap["my_model:139"] = {rtwname: "<S4>/Gain6"};
	this.rtwnameHashMap["<S4>/Gain7"] = {sid: "my_model:140"};
	this.sidHashMap["my_model:140"] = {rtwname: "<S4>/Gain7"};
	this.rtwnameHashMap["<S4>/Gain8"] = {sid: "my_model:141"};
	this.sidHashMap["my_model:141"] = {rtwname: "<S4>/Gain8"};
	this.rtwnameHashMap["<S4>/Gain9"] = {sid: "my_model:142"};
	this.sidHashMap["my_model:142"] = {rtwname: "<S4>/Gain9"};
	this.rtwnameHashMap["<S4>/Integrator"] = {sid: "my_model:143"};
	this.sidHashMap["my_model:143"] = {rtwname: "<S4>/Integrator"};
	this.rtwnameHashMap["<S4>/Integrator1"] = {sid: "my_model:144"};
	this.sidHashMap["my_model:144"] = {rtwname: "<S4>/Integrator1"};
	this.rtwnameHashMap["<S4>/x1"] = {sid: "my_model:176"};
	this.sidHashMap["my_model:176"] = {rtwname: "<S4>/x1"};
	this.rtwnameHashMap["<S4>/x2"] = {sid: "my_model:177"};
	this.sidHashMap["my_model:177"] = {rtwname: "<S4>/x2"};
	this.rtwnameHashMap["<S4>/X1"] = {sid: "my_model:557"};
	this.sidHashMap["my_model:557"] = {rtwname: "<S4>/X1"};
	this.rtwnameHashMap["<S4>/X2"] = {sid: "my_model:558"};
	this.sidHashMap["my_model:558"] = {rtwname: "<S4>/X2"};
	this.rtwnameHashMap["<S5>/input_left"] = {sid: "my_model:545"};
	this.sidHashMap["my_model:545"] = {rtwname: "<S5>/input_left"};
	this.rtwnameHashMap["<S5>/Add4"] = {sid: "my_model:102"};
	this.sidHashMap["my_model:102"] = {rtwname: "<S5>/Add4"};
	this.rtwnameHashMap["<S5>/Constant2"] = {sid: "my_model:104"};
	this.sidHashMap["my_model:104"] = {rtwname: "<S5>/Constant2"};
	this.rtwnameHashMap["<S5>/Constant4"] = {sid: "my_model:105"};
	this.sidHashMap["my_model:105"] = {rtwname: "<S5>/Constant4"};
	this.rtwnameHashMap["<S5>/Gain25"] = {sid: "my_model:128"};
	this.sidHashMap["my_model:128"] = {rtwname: "<S5>/Gain25"};
	this.rtwnameHashMap["<S5>/Gain26"] = {sid: "my_model:129"};
	this.sidHashMap["my_model:129"] = {rtwname: "<S5>/Gain26"};
	this.rtwnameHashMap["<S5>/Gain27"] = {sid: "my_model:130"};
	this.sidHashMap["my_model:130"] = {rtwname: "<S5>/Gain27"};
	this.rtwnameHashMap["<S5>/Gain28"] = {sid: "my_model:131"};
	this.sidHashMap["my_model:131"] = {rtwname: "<S5>/Gain28"};
	this.rtwnameHashMap["<S5>/Gain29"] = {sid: "my_model:132"};
	this.sidHashMap["my_model:132"] = {rtwname: "<S5>/Gain29"};
	this.rtwnameHashMap["<S5>/Gain30"] = {sid: "my_model:134"};
	this.sidHashMap["my_model:134"] = {rtwname: "<S5>/Gain30"};
	this.rtwnameHashMap["<S5>/Integrator2"] = {sid: "my_model:145"};
	this.sidHashMap["my_model:145"] = {rtwname: "<S5>/Integrator2"};
	this.rtwnameHashMap["<S5>/Integrator3"] = {sid: "my_model:146"};
	this.sidHashMap["my_model:146"] = {rtwname: "<S5>/Integrator3"};
	this.rtwnameHashMap["<S5>/MATLAB Function14"] = {sid: "my_model:151"};
	this.sidHashMap["my_model:151"] = {rtwname: "<S5>/MATLAB Function14"};
	this.rtwnameHashMap["<S5>/Product"] = {sid: "my_model:157"};
	this.sidHashMap["my_model:157"] = {rtwname: "<S5>/Product"};
	this.rtwnameHashMap["<S5>/Right_3D"] = {sid: "my_model:159"};
	this.sidHashMap["my_model:159"] = {rtwname: "<S5>/Right_3D"};
	this.rtwnameHashMap["<S5>/Sum6"] = {sid: "my_model:166"};
	this.sidHashMap["my_model:166"] = {rtwname: "<S5>/Sum6"};
	this.rtwnameHashMap["<S5>/Sum7"] = {sid: "my_model:167"};
	this.sidHashMap["my_model:167"] = {rtwname: "<S5>/Sum7"};
	this.rtwnameHashMap["<S5>/left"] = {sid: "my_model:174"};
	this.sidHashMap["my_model:174"] = {rtwname: "<S5>/left"};
	this.rtwnameHashMap["<S5>/X3dot"] = {sid: "my_model:546"};
	this.sidHashMap["my_model:546"] = {rtwname: "<S5>/X3dot"};
	this.rtwnameHashMap["<S5>/X3"] = {sid: "my_model:547"};
	this.sidHashMap["my_model:547"] = {rtwname: "<S5>/X3"};
	this.rtwnameHashMap["<S6>/input_right"] = {sid: "my_model:549"};
	this.sidHashMap["my_model:549"] = {rtwname: "<S6>/input_right"};
	this.rtwnameHashMap["<S6>/3D"] = {sid: "my_model:98"};
	this.sidHashMap["my_model:98"] = {rtwname: "<S6>/3D"};
	this.rtwnameHashMap["<S6>/Add2"] = {sid: "my_model:101"};
	this.sidHashMap["my_model:101"] = {rtwname: "<S6>/Add2"};
	this.rtwnameHashMap["<S6>/Constant1"] = {sid: "my_model:103"};
	this.sidHashMap["my_model:103"] = {rtwname: "<S6>/Constant1"};
	this.rtwnameHashMap["<S6>/Constant5"] = {sid: "my_model:106"};
	this.sidHashMap["my_model:106"] = {rtwname: "<S6>/Constant5"};
	this.rtwnameHashMap["<S6>/Gain16"] = {sid: "my_model:121"};
	this.sidHashMap["my_model:121"] = {rtwname: "<S6>/Gain16"};
	this.rtwnameHashMap["<S6>/Gain17"] = {sid: "my_model:122"};
	this.sidHashMap["my_model:122"] = {rtwname: "<S6>/Gain17"};
	this.rtwnameHashMap["<S6>/Gain18"] = {sid: "my_model:123"};
	this.sidHashMap["my_model:123"] = {rtwname: "<S6>/Gain18"};
	this.rtwnameHashMap["<S6>/Gain19"] = {sid: "my_model:124"};
	this.sidHashMap["my_model:124"] = {rtwname: "<S6>/Gain19"};
	this.rtwnameHashMap["<S6>/Gain31"] = {sid: "my_model:135"};
	this.sidHashMap["my_model:135"] = {rtwname: "<S6>/Gain31"};
	this.rtwnameHashMap["<S6>/Gain32"] = {sid: "my_model:136"};
	this.sidHashMap["my_model:136"] = {rtwname: "<S6>/Gain32"};
	this.rtwnameHashMap["<S6>/Integrator4"] = {sid: "my_model:147"};
	this.sidHashMap["my_model:147"] = {rtwname: "<S6>/Integrator4"};
	this.rtwnameHashMap["<S6>/Integrator5"] = {sid: "my_model:148"};
	this.sidHashMap["my_model:148"] = {rtwname: "<S6>/Integrator5"};
	this.rtwnameHashMap["<S6>/MATLAB Function2"] = {sid: "my_model:152"};
	this.sidHashMap["my_model:152"] = {rtwname: "<S6>/MATLAB Function2"};
	this.rtwnameHashMap["<S6>/Product1"] = {sid: "my_model:158"};
	this.sidHashMap["my_model:158"] = {rtwname: "<S6>/Product1"};
	this.rtwnameHashMap["<S6>/Sum2"] = {sid: "my_model:163"};
	this.sidHashMap["my_model:163"] = {rtwname: "<S6>/Sum2"};
	this.rtwnameHashMap["<S6>/Sum3"] = {sid: "my_model:164"};
	this.sidHashMap["my_model:164"] = {rtwname: "<S6>/Sum3"};
	this.rtwnameHashMap["<S6>/right"] = {sid: "my_model:175"};
	this.sidHashMap["my_model:175"] = {rtwname: "<S6>/right"};
	this.rtwnameHashMap["<S6>/X4"] = {sid: "my_model:550"};
	this.sidHashMap["my_model:550"] = {rtwname: "<S6>/X4"};
	this.rtwnameHashMap["<S6>/X4dot"] = {sid: "my_model:551"};
	this.sidHashMap["my_model:551"] = {rtwname: "<S6>/X4dot"};
	this.rtwnameHashMap["<S7>:1"] = {sid: "my_model:151:1"};
	this.sidHashMap["my_model:151:1"] = {rtwname: "<S7>:1"};
	this.rtwnameHashMap["<S8>:1"] = {sid: "my_model:159:1"};
	this.sidHashMap["my_model:159:1"] = {rtwname: "<S8>:1"};
	this.rtwnameHashMap["<S9>:1"] = {sid: "my_model:98:1"};
	this.sidHashMap["my_model:98:1"] = {rtwname: "<S9>:1"};
	this.rtwnameHashMap["<S10>:1"] = {sid: "my_model:152:1"};
	this.sidHashMap["my_model:152:1"] = {rtwname: "<S10>:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "calc"};
	this.sidHashMap["calc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "calc:13"};
	this.sidHashMap["calc:13"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "calc:17"};
	this.sidHashMap["calc:17"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "calc:32"};
	this.sidHashMap["calc:32"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "calc:33"};
	this.sidHashMap["calc:33"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "calc:6"};
	this.sidHashMap["calc:6"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "calc:27"};
	this.sidHashMap["calc:27"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "calc:28"};
	this.sidHashMap["calc:28"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Display2"] = {sid: "calc:29"};
	this.sidHashMap["calc:29"] = {rtwname: "<Root>/Display2"};
	this.rtwnameHashMap["<Root>/Display3"] = {sid: "calc:30"};
	this.sidHashMap["calc:30"] = {rtwname: "<Root>/Display3"};
	this.rtwnameHashMap["<Root>/Display4"] = {sid: "calc:31"};
	this.sidHashMap["calc:31"] = {rtwname: "<Root>/Display4"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "calc:21"};
	this.sidHashMap["calc:21"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/If"] = {sid: "calc:12"};
	this.sidHashMap["calc:12"] = {rtwname: "<Root>/If"};
	this.rtwnameHashMap["<Root>/If Action Subsystem"] = {sid: "calc:13"};
	this.sidHashMap["calc:13"] = {rtwname: "<Root>/If Action Subsystem"};
	this.rtwnameHashMap["<Root>/If Action Subsystem1"] = {sid: "calc:17"};
	this.sidHashMap["calc:17"] = {rtwname: "<Root>/If Action Subsystem1"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "calc:8"};
	this.sidHashMap["calc:8"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "calc:7"};
	this.sidHashMap["calc:7"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "calc:9"};
	this.sidHashMap["calc:9"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "calc:10"};
	this.sidHashMap["calc:10"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "calc:11"};
	this.sidHashMap["calc:11"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "calc:22"};
	this.sidHashMap["calc:22"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "calc:23"};
	this.sidHashMap["calc:23"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "calc:14"};
	this.sidHashMap["calc:14"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Action Port"] = {sid: "calc:15"};
	this.sidHashMap["calc:15"] = {rtwname: "<S1>/Action Port"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "calc:16"};
	this.sidHashMap["calc:16"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "calc:19"};
	this.sidHashMap["calc:19"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "calc:24"};
	this.sidHashMap["calc:24"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "calc:20"};
	this.sidHashMap["calc:20"] = {rtwname: "<S2>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

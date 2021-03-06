function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "BitwiseOperator"};
	this.sidHashMap["BitwiseOperator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "BitwiseOperator:3"};
	this.sidHashMap["BitwiseOperator:3"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "BitwiseOperator:6"};
	this.sidHashMap["BitwiseOperator:6"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Bitwise Operator"] = {sid: "BitwiseOperator:17"};
	this.sidHashMap["BitwiseOperator:17"] = {rtwname: "<Root>/Bitwise Operator"};
	this.rtwnameHashMap["<Root>/Bitwise NOR"] = {sid: "BitwiseOperator:22"};
	this.sidHashMap["BitwiseOperator:22"] = {rtwname: "<Root>/Bitwise NOR"};
	this.rtwnameHashMap["<Root>/Bitwise OR"] = {sid: "BitwiseOperator:20"};
	this.sidHashMap["BitwiseOperator:20"] = {rtwname: "<Root>/Bitwise OR"};
	this.rtwnameHashMap["<Root>/Bitwise XOR"] = {sid: "BitwiseOperator:21"};
	this.sidHashMap["BitwiseOperator:21"] = {rtwname: "<Root>/Bitwise XOR"};
	this.rtwnameHashMap["<Root>/Bitwise XOR1"] = {sid: "BitwiseOperator:23"};
	this.sidHashMap["BitwiseOperator:23"] = {rtwname: "<Root>/Bitwise XOR1"};
	this.rtwnameHashMap["<Root>/NOT"] = {sid: "BitwiseOperator:27"};
	this.sidHashMap["BitwiseOperator:27"] = {rtwname: "<Root>/NOT"};
	this.rtwnameHashMap["<Root>/NOT1"] = {sid: "BitwiseOperator:28"};
	this.sidHashMap["BitwiseOperator:28"] = {rtwname: "<Root>/NOT1"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "BitwiseOperator:14"};
	this.sidHashMap["BitwiseOperator:14"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "BitwiseOperator:24"};
	this.sidHashMap["BitwiseOperator:24"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "BitwiseOperator:25"};
	this.sidHashMap["BitwiseOperator:25"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "BitwiseOperator:26"};
	this.sidHashMap["BitwiseOperator:26"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "BitwiseOperator:29"};
	this.sidHashMap["BitwiseOperator:29"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "BitwiseOperator:30"};
	this.sidHashMap["BitwiseOperator:30"] = {rtwname: "<Root>/Out6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

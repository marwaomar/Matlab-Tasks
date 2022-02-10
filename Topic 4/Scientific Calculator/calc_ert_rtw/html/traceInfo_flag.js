function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["calc.c:40c28"]=1;
    this.traceFlag["calc.c:47c28"]=1;
    this.traceFlag["calc.c:54c28"]=1;
    this.traceFlag["calc.c:60c18"]=1;
    this.traceFlag["calc.c:85c28"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["calc.c:40"]=1;
    this.lineTraceFlag["calc.c:47"]=1;
    this.lineTraceFlag["calc.c:54"]=1;
    this.lineTraceFlag["calc.c:60"]=1;
    this.lineTraceFlag["calc.c:64"]=1;
    this.lineTraceFlag["calc.c:74"]=1;
    this.lineTraceFlag["calc.c:85"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();

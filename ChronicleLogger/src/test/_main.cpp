#include <com/sowrov/util/logsystem/ChronicleLogger.h>
//#include <windows.h>
namespace logSystemName = com::sowrov::util::logsystem;

int main () {
	_logFatal("Fatal Error to the default output device");
	_logInfo ("We will change the output device to Disk file and formatter to Html");
	
	//logSystemName::ChronicleLogger::getLogger ().setDevice (new logSystemName::DiskFile("mylog.html"));
	//logSystemName::ChronicleLogger::getLogger ().setLogFormatter (new logSystemName::Html());
	_diskFileHtml("logHtml.html");

	_logFatal("Fatal Error");
	_logCritical("This is a critical error");
	_logWarning ("Warning for the user");
	_logInfo ("This is an information massage");
	_logDebug ("This is a debug message");

	_setLogLevel(4);

	//_CLDiskFilePlain("logPlain.txt");
	for (int i=0; i<50; i++) {
		//_CLogFatal("This is a fatal error test "<<i);
		//_CLogCritical("This is a critical error "<<i);
		_logWarning ("Warning for the user "<<i);
		_logInfo ("This is an information massage"<<i);
		_logDebug ("This is a debug message");
		//Sleep (100);
	}
	return 0;
}

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableURLRequest, NSURLRequest, __NSCFURLSession;

@interface CONNECTION_SessionTask : NSObject {

	CFURLRequestRef _originalRequest;
	CFURLRequestRef _currentRequest;
	CFDictionaryRef _connectionProperties;
	CFDictionaryRef _socketProperties;
	NSMutableURLRequest* _nsCurrentRequest;
	NSURLRequest* _nsOriginalRequest;
	__NSCFURLSession* _session;
	BOOL _is_cellular;
	Class _my_protocolForTask;
	PerformanceTimingRef __performanceTiming;
	BOOL __shouldSkipPreferredClientCertificateLookup;
	CFDictionaryRef __atsContext;

}
-(void)updateCurrentRequest:(id)arg1 ;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(const XURLCache*)_createXURLCache;
-(id)initWithRequest:(CFURLRequestRef)arg1 mutableCurrent:(CFURLRequestRef)arg2 connProps:(CFDictionaryRef)arg3 sockProps:(CFDictionaryRef)arg4 session:(id)arg5 ;
-(CFURLRequestRef)_currentCFURLRequest;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(id)_protocolForTask;
-(void)set_protocolForTask:(id)arg1 ;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(CFURLRef)currentRequest_URL;
-(id)countOfBytesExpectedToReceive;
-(id)_priorityValue;
-(long long)_bytesPerSecondLimit;
-(CFDictionaryRef)_copySocketStreamProperties;
-(id)_backgroundTaskTimingData;
-(CFDictionaryRef)_copyATSState;
-(CFURLRequestRef)_copyCurrentCFURLRequest;
-(CFURLRequestRef)_copyOriginalCFURLRequest;
-(PerformanceTimingRef)_performanceTiming;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(int)_cachePolicy;
-(double)_timeoutInterval;
-(CFDictionaryRef)_proxySettings;
-(CFDictionaryRef)_sslSettings;
-(unsigned char)_shouldPipelineHTTP;
-(unsigned char)_shouldUsePipelineHeuristics;
-(unsigned char)_shouldSkipPipelineProbe;
-(long long)_requestPriority;
-(unsigned long long)_allowedProtocolTypes;
-(id)_prohibitAuthUI;
-(unsigned char)_strictContentLength;
-(id)_connectionPropertyDuet;
-(long long)_suspensionThreshhold;
-(unsigned char)_preventsIdleSystemSleep;
-(id)_expectedWorkload;
-(id)_timeWindowDelay;
-(id)_timeWindowDuration;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)_setConnectionIsCellular:(BOOL)arg1 ;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(void)_getAuthenticationHeadersForResponse:(CFURLResponseRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CFSetRef)_getAuthenticatorStatusCodes;
-(BOOL)_cacheOnly;
-(CFURLRef)currentRequest_mainDocumentURL;
-(id)_boundInterfaceIdentifier;
-(id)_disallowCellular;
-(id)_networkServiceType;
-(void)_initializeTimingDataWithSessionConfiguration:(id)arg1 ;
-(id)_cfHSTS;
-(id)_cfCache;
-(id)_cfCreds;
-(id)_cfCookies;
-(id)_shouldHandleCookies;
-(id)_cookieAcceptPolicy;
-(id)_contentDispositionFallbackArray;
-(id)_allowsCellular;
-(void)_processConnectionProperties;
-(void)dealloc;
-(id)state;
-(float)priority;
-(id)startTime;
-(id)originalRequest;
-(id)taskIdentifier;
-(id)session;
-(id)error;
-(id)countOfBytesExpectedToSend;
-(id)countOfBytesSent;
-(id)currentRequest;
-(id)countOfBytesReceived;
-(id)workQueue;
@end


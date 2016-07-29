/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)defaultConnection;
+(id)secondaryConnection;
+(id)mobileDocumentsURL;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)invalidateCachedURLProperties;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
+(id)homeDirectoryURL;
-(void)dealloc;
-(id)initUsingUserLocalDaemonTokenService;
-(BRXPCSyncProxy*)syncTokenProxy;
-(BRXPCSyncProxy*)syncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class NSURL, NSDictionary, NSMutableDictionary, NSOperationQueue, NSURLSession, NSString;

@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate> {

	NSURL* _serverConfigurationURL;
	NSDictionary* _serverConfigurationDict;
	NSMutableDictionary* _userDefaultsCache;
	/*^block*/id _configurationPlistDidUpdateBlock;
	NSOperationQueue* _downloadQueue;
	NSURLSession* _urlSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)reset;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(id)defaultsForContainerIdentifier:(id)arg1 ;
-(void)setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
-(void)_prepopulateGlobalContainerUserDefaults;
-(void)_loadServerConfigurationDictionary;
-(void)_parsePlistWithURL:(id)arg1 ;
-(void)_loadCachedServerConfigurationDictionaryFromDB:(id)arg1 ;
-(void)_saveServerConfigurationDictionaryToDB:(id)arg1 ;
@end

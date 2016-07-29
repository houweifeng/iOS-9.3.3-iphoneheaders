/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDocumentResourceDownloadNotificationProtocol.h>
#import <iWorkImport/TSPDocumentResourceDownloader.h>

@protocol OS_dispatch_queue;
@class TSPDocumentResourceManager, TSPObjectContext, NSObject, NSHashTable, NSMutableArray, NSMutableSet, NSString;

@interface TSPDocumentResourceDataProvider : NSObject <TSPDocumentResourceDownloadNotificationProtocol, TSPDocumentResourceDownloader> {

	TSPDocumentResourceManager* _manager;
	TSPObjectContext* _context;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _storagesCache;
	NSMutableArray* _downloadItems;
	NSMutableSet* _infosToDownload;
	long long _estimatedDownloadSize;
	BOOL _isEstimatedDownloadSizePrecise;
	BOOL _didCancelDownloads;
	BOOL _didNotifyObjectContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) long long estimatedDownloadSize; 
@property (nonatomic,readonly) BOOL isEstimatedDownloadSizePrecise; 
+(void)didCompleteDocumentResourceDownloadWithDigestString:(id)arg1 ;
+(void)registerDownloadNotificationClass:(Class)arg1 ;
-(long long)estimatedDownloadSize;
-(BOOL)isEstimatedDownloadSizePrecise;
-(id)downloadWithDelegate:(id)arg1 description:(id)arg2 ;
-(id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 ;
-(id)dataStorageForSageLocator:(id)arg1 ;
-(void)cacheDataForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 ;
-(id)dataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 ;
-(id)initWithManager:(id)arg1 context:(id)arg2 ;
-(id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 needsDownload:(BOOL*)arg4 ;
-(id)dataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 needsDownload:(BOOL*)arg4 ;
-(id)init;
-(void)cancelDownloads;
-(BOOL)needsDownload;
@end

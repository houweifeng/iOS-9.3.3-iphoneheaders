/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Tones.syncBundle/Tones
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATClient.h>

@class TLToneManager, NSMutableArray, NSString;

@interface ToneSyncClient : NSObject <ATClient> {

	TLToneManager* _toneManager;
	NSMutableArray* _uploadAssets;

}

@property (setter=_setToneManager:,nonatomic,retain) TLToneManager * _toneManager;                 //@synthesize toneManager=_toneManager - In the implementation block
@property (setter=_setUploadAssets:,nonatomic,retain) NSMutableArray * _uploadAssets;              //@synthesize uploadAssets=_uploadAssets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_toneSyncAnchorFilePath;
+(id)_toneSyncPlistFolderPath;
+(id)_toneSyncMediaPath;
+(id)_syncPlistPaths;
-(void)_removeSyncPlists;
-(id)_relativePathCorrespondingTo:(id)arg1 relativeTo:(id)arg2 ;
-(id)_toneMetadataFromSyncOperation:(id)arg1 pid:(id)arg2 valid:(BOOL*)arg3 ;
-(void)_processSyncOperation:(id)arg1 withToneManager:(id)arg2 ;
-(void)_writeSyncAnchor:(id)arg1 ;
-(void)_setUploadAssets:(id)arg1 ;
-(BOOL)installAsset:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(TLToneManager *)_toneManager;
-(id)supportedDataclasses;
-(void)_setToneManager:(id)arg1 ;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)syncEndedWithSuccess:(BOOL)arg1 ;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)currentSyncAnchor;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1 ;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2 ;
-(void)clearSyncData;
-(id)installedAssetMetrics;
-(NSMutableArray *)_uploadAssets;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MCMMigrationStatus : NSObject {

	NSMutableDictionary* _migrationInfo;

}

@property (nonatomic,retain) NSMutableDictionary * migrationInfo;              //@synthesize migrationInfo=_migrationInfo - In the implementation block
+(id)currentBuildVersion;
-(void)setMigrationCompleteForType:(id)arg1 ;
-(id)_readMigrationStatusFromDisk;
-(void)_readStatusFromMarkerFileWithName:(id)arg1 andSetAsType:(id)arg2 ;
-(NSMutableDictionary *)migrationInfo;
-(BOOL)isBuildUpgrade;
-(void)setMigrationInfo:(NSMutableDictionary *)arg1 ;
-(void)_migrateFromManyMarkerFilesToOne;
-(void)_removeMarkerFileWithName:(id)arg1 ;
-(void)writeCurrentBuildInfoToDisk;
-(BOOL)hasMigrationOccurredForType:(id)arg1 ;
-(BOOL)_writeMigrationStatusToDisk;
-(id)init;
@end

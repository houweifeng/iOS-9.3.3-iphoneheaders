/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICCloudObject <NSObject>
@required
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1;
+(id)newCloudObjectForRecord:(id)arg1;
-(id)className;
-(id)recordID;
-(void)deleteFromLocalDatabase;
-(BOOL)isValidObject;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1;
-(void)mergeDataFromRecord:(id)arg1;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)needsToBeFetchedFromCloud;
-(void)fixBrokenReferences;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)newlyCreatedRecord;
-(BOOL)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 error:(id)arg2;
-(id)recordType;
-(id)recordZoneID;

@end


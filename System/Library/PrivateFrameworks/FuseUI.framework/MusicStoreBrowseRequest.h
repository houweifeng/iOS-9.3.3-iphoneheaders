/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicStoreModelRequest.h>

@protocol OS_dispatch_group;
@class NSObject, MPUOperationQueue, MusicStoreBrowseSection, NSMapTable, MusicStoreBrowseResponse;

@interface MusicStoreBrowseRequest : MusicStoreModelRequest {

	BOOL _didInitializeTimeoutIntervalAdditions;
	long long _domain;
	BOOL _errorReportingDisabled;
	long long _filteringPolicy;
	MusicStoreBrowseRequest* _individualPendingNestedRequest;
	NSObject*<OS_dispatch_group> _nestedRequestsGroup;
	MPUOperationQueue* _nestedRequestsOperationQueue;
	MusicStoreBrowseSection* _parentSection;
	unsigned long long _requestType;
	NSMapTable* _sectionsToPendingNestedRequests;
	double _timeoutIntervalAdditions;

}

@property (assign) long long domain; 
@property (assign) long long filteringPolicy; 
@property (retain) MusicStoreBrowseSection * parentSection; 
@property (nonatomic,retain) MusicStoreBrowseResponse * previousResponse; 
@property (nonatomic,copy) id responseHandler; 
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(void)cancel;
-(id)init;
-(long long)domain;
-(void)setDomain:(long long)arg1 ;
-(void)setFilteringPolicy:(long long)arg1 ;
-(id)_nestedRequestsOperationQueue;
-(void)execute;
-(void)_produceRegularResponseWithParser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setParentSection:(MusicStoreBrowseSection *)arg1 ;
-(void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)configurationForLoadingModelDataWithStoreBag:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)adjustTimeoutInterval:(double)arg1 ;
-(long long)filteringPolicy;
-(MusicStoreBrowseSection *)parentSection;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKChartCacheFetchOperation.h>

@class HKHealthStore, NSArray;

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {

	HKHealthStore* _healthStore;
	/*^block*/id _clientCompletion;
	/*^block*/id _fetchOperationManager;
	NSArray* _queries;

}

@property (nonatomic,retain) NSArray * queries;              //@synthesize queries=_queries - In the implementation block
-(id)initWithHealthStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completedWithResults:(id)arg1 error:(id)arg2 ;
-(void)setQueries:(NSArray *)arg1 ;
-(void)stopOperation;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)queries;
@end


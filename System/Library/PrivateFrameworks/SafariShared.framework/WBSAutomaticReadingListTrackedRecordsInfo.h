/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSAutomaticReadingListRecordRange, NSArray;

@interface WBSAutomaticReadingListTrackedRecordsInfo : NSObject {

	WBSAutomaticReadingListRecordRange* _rangeOfTrackedRecords;
	NSArray* _items;

}

@property (nonatomic,copy) WBSAutomaticReadingListRecordRange * rangeOfTrackedRecords;              //@synthesize rangeOfTrackedRecords=_rangeOfTrackedRecords - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                         //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setRangeOfTrackedRecords:(WBSAutomaticReadingListRecordRange *)arg1 ;
-(WBSAutomaticReadingListRecordRange *)rangeOfTrackedRecords;
@end


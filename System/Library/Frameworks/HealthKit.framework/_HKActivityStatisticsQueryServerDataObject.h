/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDate, NSDateComponents;

@interface _HKActivityStatisticsQueryServerDataObject : _HKQueryServerDataObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSDateComponents* _intervalComponents;
	double _updateInterval;

}

@property (nonatomic,copy) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (assign,nonatomic) double updateInterval;                            //@synthesize updateInterval=_updateInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setIntervalComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)intervalComponents;
@end

